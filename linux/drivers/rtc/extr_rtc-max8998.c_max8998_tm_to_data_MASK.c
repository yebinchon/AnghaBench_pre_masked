
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct rtc_time *VAR_8, u8 *VAR_9)
{
 VAR_9[VAR_4] = FUNC_0(VAR_8->tm_sec);
 VAR_9[VAR_2] = FUNC_0(VAR_8->tm_min);
 VAR_9[VAR_1] = FUNC_0(VAR_8->tm_hour);
 VAR_9[VAR_5] = VAR_8->tm_wday;
 VAR_9[VAR_0] = FUNC_0(VAR_8->tm_mday);
 VAR_9[VAR_3] = FUNC_0(VAR_8->tm_mon);
 VAR_9[VAR_6] = FUNC_0(VAR_8->tm_year % 100);
 VAR_9[VAR_7] = FUNC_0((VAR_8->tm_year + 1900) / 100);
}
