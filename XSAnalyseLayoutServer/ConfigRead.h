#ifndef configread_h

#include <iostream>  
#include <string>  
#include <fstream> 
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class CConfigRead
{
public:
    CConfigRead(void);
    ~CConfigRead(void);
public:
#ifdef __WINDOWS__
    string GetCurrentPath();
#endif
    bool ReadConfig();
public:
    string m_sConfigFile;
    string m_sCurrentPath;

    string m_sServerID;
    int m_nMaxCount;    //每50w数据额外创建一条搜索线程
    string m_sDBIP;
    int m_nDBPort;
    string m_sDBName;
    string m_sDBUser;
    string m_sDBPd;

    string m_sPubServerIP;
    int m_nPubServerPort;
    int m_nSubServerPort;

    string m_sLayoutPushIP; //布控服务IP
    int m_nLayoutPushPort;  //布控服务推送特征值消息端口
    int m_nLayoutPullPort;  //布控服务接收回应消息端口
    int m_nLayoutSearchThreadCount; //布控搜索线程数, 为0时表示根据cpu线程数来开启线程
};

#define configread_h
#endif