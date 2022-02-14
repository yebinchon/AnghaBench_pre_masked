
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct rtc_time {int tm_mon; int tm_year; int tm_mday; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct device {int dummy; } ;
struct cmos_rtc {int mon_alrm; int day_alrm; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct rtc_time*) ;
 int FUNC_1 (struct device*,char*) ;
 struct cmos_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct cmos_rtc *VAR_3 = FUNC_2(VAR_1);
 struct rtc_time VAR_4;

 FUNC_0(VAR_1, &VAR_4);

 if (!VAR_3->day_alrm) {
  time64_t VAR_5;
  time64_t VAR_6;

  VAR_5 = FUNC_4(&VAR_4);
  VAR_5 += 24 * 60 * 60 - 1;
  VAR_6 = FUNC_4(&VAR_2->time);
  if (VAR_6 > VAR_5) {
   FUNC_1(VAR_1,
    "Alarms can be up to one day in the future\n");
   return -VAR_0;
  }
 } else if (!VAR_3->mon_alrm) {
  struct rtc_time VAR_7 = VAR_4;
  time64_t VAR_8;
  time64_t VAR_9;
  int VAR_10;

  if (VAR_7.tm_mon == 11) {
   VAR_7.tm_mon = 0;
   VAR_7.tm_year += 1;
  } else {
   VAR_7.tm_mon += 1;
  }
  VAR_10 = FUNC_3(VAR_7.tm_mon, VAR_7.tm_year);
  if (VAR_7.tm_mday > VAR_10)
   VAR_7.tm_mday = VAR_10;

  VAR_8 = FUNC_4(&VAR_7);
  VAR_8 -= 1;
  VAR_9 = FUNC_4(&VAR_2->time);
  if (VAR_9 > VAR_8) {
   FUNC_1(VAR_1,
    "Alarms can be up to one month in the future\n");
   return -VAR_0;
  }
 } else {
  struct rtc_time VAR_11 = VAR_4;
  time64_t VAR_12;
  time64_t VAR_13;
  int VAR_14;

  VAR_11.tm_year += 1;
  VAR_14 = FUNC_3(VAR_11.tm_mon, VAR_11.tm_year);
  if (VAR_11.tm_mday > VAR_14)
   VAR_11.tm_mday = VAR_14;

  VAR_12 = FUNC_4(&VAR_11);
  VAR_12 -= 1;
  VAR_13 = FUNC_4(&VAR_2->time);
  if (VAR_13 > VAR_12) {
   FUNC_1(VAR_1,
    "Alarms can be up to one year in the future\n");
   return -VAR_0;
  }
 }

 return 0;
}
