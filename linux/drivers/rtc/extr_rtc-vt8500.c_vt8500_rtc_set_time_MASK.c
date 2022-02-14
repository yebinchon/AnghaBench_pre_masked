
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8500_rtc {scalar_t__ regbase; } ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_wday; int tm_hour; int tm_min; int tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 struct vt8500_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct vt8500_rtc *VAR_11 = FUNC_1(VAR_9);

 if (VAR_10->tm_year < 100) {
  FUNC_2(VAR_9, "Only years 2000-2199 are supported by the "
         "hardware!\n");
  return -VAR_3;
 }

 FUNC_3((FUNC_0(VAR_10->tm_year % 100) << VAR_2)
  | (FUNC_0(VAR_10->tm_mon + 1) << VAR_1)
  | (FUNC_0(VAR_10->tm_mday))
  | ((VAR_10->tm_year >= 200) << VAR_0),
  VAR_11->regbase + VAR_7);
 FUNC_3((FUNC_0(VAR_10->tm_wday) << VAR_4)
  | (FUNC_0(VAR_10->tm_hour) << VAR_5)
  | (FUNC_0(VAR_10->tm_min) << VAR_6)
  | (FUNC_0(VAR_10->tm_sec)),
  VAR_11->regbase + VAR_8);

 return 0;
}
