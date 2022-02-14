
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct pcf50633_time {int * time; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct rtc_time *VAR_7, struct pcf50633_time *VAR_8)
{
 VAR_7->tm_sec = FUNC_0(VAR_8->time[VAR_4]);
 VAR_7->tm_min = FUNC_0(VAR_8->time[VAR_2]);
 VAR_7->tm_hour = FUNC_0(VAR_8->time[VAR_1]);
 VAR_7->tm_wday = FUNC_0(VAR_8->time[VAR_5]);
 VAR_7->tm_mday = FUNC_0(VAR_8->time[VAR_0]);
 VAR_7->tm_mon = FUNC_0(VAR_8->time[VAR_3]) - 1;
 VAR_7->tm_year = FUNC_0(VAR_8->time[VAR_6]) + 100;
}
