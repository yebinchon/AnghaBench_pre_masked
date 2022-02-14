
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;


 int FUNC_0 (unsigned int,scalar_t__,int ,int ,int ,int ) ;

time64_t FUNC_1(struct rtc_time *VAR_0)
{
 return FUNC_0(((unsigned int)VAR_0->tm_year + 1900), VAR_0->tm_mon + 1,
   VAR_0->tm_mday, VAR_0->tm_hour, VAR_0->tm_min, VAR_0->tm_sec);
}
