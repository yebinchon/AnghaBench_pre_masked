
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct pcf50633_time {void** time; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct pcf50633_time *VAR_7, struct rtc_time *VAR_8)
{
 VAR_7->time[VAR_4] = FUNC_0(VAR_8->tm_sec);
 VAR_7->time[VAR_2] = FUNC_0(VAR_8->tm_min);
 VAR_7->time[VAR_1] = FUNC_0(VAR_8->tm_hour);
 VAR_7->time[VAR_5] = FUNC_0(VAR_8->tm_wday);
 VAR_7->time[VAR_0] = FUNC_0(VAR_8->tm_mday);
 VAR_7->time[VAR_3] = FUNC_0(VAR_8->tm_mon + 1);
 VAR_7->time[VAR_6] = FUNC_0(VAR_8->tm_year % 100);
}
