
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_mon; int tm_mday; unsigned char tm_wday; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_0(unsigned char *VAR_10, struct rtc_time *VAR_11, int VAR_12)
{
 unsigned char VAR_13, VAR_14;

 if (VAR_12 < VAR_9)
  return -VAR_0;

 VAR_13 = (VAR_11->tm_year + 1900) / 1000;
 VAR_14 = (VAR_11->tm_year + 1900) / 100;
 VAR_14 = VAR_14 - VAR_13 * 10;
 VAR_10[VAR_8] = (VAR_13 << 4) + VAR_14;
 VAR_13 = (VAR_11->tm_year + 1900) / 10;
 VAR_14 = VAR_11->tm_year + 1900;
 VAR_14 = VAR_14 - VAR_13 * 10;
 VAR_13 = VAR_13 - (VAR_13 / 10) * 10;
 VAR_10[VAR_7] = (VAR_13 << 4) + VAR_14;
 VAR_13 = VAR_11->tm_mon / 10;
 VAR_14 = VAR_11->tm_mon;
 VAR_14 = VAR_14 - VAR_13 * 10;
 VAR_10[VAR_4] = (VAR_13 << 4) + VAR_14;
 VAR_13 = VAR_11->tm_mday / 10;
 VAR_14 = VAR_11->tm_mday;
 VAR_14 = VAR_14 - VAR_13 * 10;
 VAR_10[VAR_1] = (VAR_13 << 4) + VAR_14;
 VAR_10[VAR_6] = VAR_11->tm_wday;
 VAR_13 = VAR_11->tm_hour / 10;
 VAR_14 = VAR_11->tm_hour;
 VAR_14 = VAR_14 - VAR_13 * 10;
 VAR_10[VAR_2] = (VAR_13 << 4) + VAR_14;
 VAR_13 = VAR_11->tm_min / 10;
 VAR_14 = VAR_11->tm_min;
 VAR_14 = VAR_14 - VAR_13 * 10;
 VAR_10[VAR_3] = (VAR_13 << 4) + VAR_14;
 VAR_13 = VAR_11->tm_sec / 10;
 VAR_14 = VAR_11->tm_sec;
 VAR_14 = VAR_14 - VAR_13 * 10;
 VAR_10[VAR_5] = (VAR_13 << 4) + VAR_14;
 return 0;
}
