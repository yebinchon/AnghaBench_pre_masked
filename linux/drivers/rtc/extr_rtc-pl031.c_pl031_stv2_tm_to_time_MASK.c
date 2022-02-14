
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_wday; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;
 int FUNC_3 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_7,
     struct rtc_time *VAR_8, unsigned long *VAR_9,
 unsigned long *VAR_10)
{
 int VAR_11 = VAR_8->tm_year + 1900;
 int VAR_12 = VAR_8->tm_wday;


 if (VAR_12 < -1 || VAR_12 > 6) {
  FUNC_1(VAR_7, "invalid wday value %d\n", VAR_8->tm_wday);
  return -VAR_0;
 } else if (VAR_12 == -1) {

  unsigned long VAR_13;
  struct rtc_time VAR_14;

  FUNC_3(VAR_8, &VAR_13);
  FUNC_2(VAR_13, &VAR_14);
  VAR_12 = VAR_14.tm_wday;
 }

 *VAR_10 = (FUNC_0(VAR_11 % 100) | FUNC_0(VAR_11 / 100) << 8);

 *VAR_9 = ((VAR_8->tm_mon + 1) << VAR_4)
   | (VAR_8->tm_mday << VAR_2)
   | ((VAR_12 + 1) << VAR_6)
   | (VAR_8->tm_hour << VAR_1)
   | (VAR_8->tm_min << VAR_3)
   | (VAR_8->tm_sec << VAR_5);

 return 0;
}
