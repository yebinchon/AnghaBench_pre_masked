
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned char tm_sec; unsigned char tm_min; unsigned char tm_hour; unsigned char tm_mday; int tm_mon; int tm_year; unsigned char tm_wday; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char FUNC_0 (int) ;
 unsigned char FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_11, struct rtc_time *VAR_12)
{
 unsigned char VAR_13;

 VAR_13 = FUNC_1(VAR_11, VAR_0);


 VAR_13 |= VAR_3 | VAR_2;
 FUNC_2(VAR_11, VAR_13, VAR_0);

 if (VAR_13 & VAR_1) {

  FUNC_2(VAR_11, VAR_12->tm_sec, VAR_9);
  FUNC_2(VAR_11, VAR_12->tm_min, VAR_7);
  FUNC_2(VAR_11, VAR_12->tm_hour, VAR_6);
  FUNC_2(VAR_11, VAR_12->tm_mday, VAR_4);
  FUNC_2(VAR_11, VAR_12->tm_mon + 1, VAR_8);
  FUNC_2(VAR_11, VAR_12->tm_year % 100, VAR_10);
  FUNC_2(VAR_11, VAR_12->tm_wday, VAR_5);
 } else {

  FUNC_2(VAR_11, FUNC_0(VAR_12->tm_sec), VAR_9);
  FUNC_2(VAR_11, FUNC_0(VAR_12->tm_min), VAR_7);
  FUNC_2(VAR_11, FUNC_0(VAR_12->tm_hour), VAR_6);
  FUNC_2(VAR_11, FUNC_0(VAR_12->tm_mday), VAR_4);
  FUNC_2(VAR_11, FUNC_0(VAR_12->tm_mon + 1), VAR_8);
  FUNC_2(VAR_11, FUNC_0(VAR_12->tm_year % 100), VAR_10);
  FUNC_2(VAR_11, FUNC_0(VAR_12->tm_wday), VAR_5);
 }


 VAR_13 &= ~VAR_3;
 FUNC_2(VAR_11, VAR_13, VAR_0);

 return 0;
}
