
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_wday; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_0(u32 VAR_12, u32 VAR_13, struct rtc_time *VAR_14)
{
 VAR_14->tm_year = ((VAR_12 & VAR_10) >> VAR_11) - 1900;
 VAR_14->tm_mon = (((VAR_12 & VAR_8) >> VAR_9)) - 1;
 VAR_14->tm_mday = (VAR_12 & VAR_7);
 VAR_14->tm_wday = ((VAR_12 & VAR_0) >> VAR_1) - 1;
 VAR_14->tm_hour = (VAR_13 & VAR_2) >> VAR_3;
 VAR_14->tm_min = (VAR_13 & VAR_4) >> VAR_5;
 VAR_14->tm_sec = VAR_13 & VAR_6;
}
