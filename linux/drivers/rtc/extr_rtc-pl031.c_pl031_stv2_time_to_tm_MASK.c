
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; unsigned long tm_mon; unsigned long tm_mday; unsigned long tm_wday; unsigned long tm_hour; unsigned long tm_min; unsigned long tm_sec; int tm_yday; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long,int) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_12, unsigned long VAR_13,
 struct rtc_time *VAR_14)
{
 VAR_14->tm_year = FUNC_0(VAR_13) + (FUNC_0(VAR_13 >> 8) * 100);
 VAR_14->tm_mon = ((VAR_12 & VAR_6) >> VAR_7) - 1;
 VAR_14->tm_mday = ((VAR_12 & VAR_2) >> VAR_3);
 VAR_14->tm_wday = ((VAR_12 & VAR_10) >> VAR_11) - 1;
 VAR_14->tm_hour = ((VAR_12 & VAR_0) >> VAR_1);
 VAR_14->tm_min = ((VAR_12 & VAR_4) >> VAR_5);
 VAR_14->tm_sec = ((VAR_12 & VAR_8) >> VAR_9);

 VAR_14->tm_yday = FUNC_1(VAR_14->tm_mday, VAR_14->tm_mon, VAR_14->tm_year);
 VAR_14->tm_year -= 1900;

 return 0;
}
