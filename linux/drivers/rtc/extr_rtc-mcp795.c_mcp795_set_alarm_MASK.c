
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tmp ;
typedef scalar_t__ time64_t ;
struct rtc_time {int tm_year; int tm_isdst; int tm_yday; scalar_t__ tm_wday; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {struct rtc_time time; scalar_t__ enabled; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,struct rtc_time*) ;
 int FUNC_4 (struct device*,int ,int*,int) ;
 int FUNC_5 (struct device*,int ,int*,int) ;
 int FUNC_6 (struct device*,int) ;
 scalar_t__ FUNC_7 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_7, struct rtc_wkalrm *VAR_8)
{
 struct rtc_time VAR_9;
 time64_t VAR_10;
 time64_t VAR_11;
 u8 VAR_12[6];
 int VAR_13;


 VAR_13 = FUNC_3(VAR_7, &VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_10 = FUNC_7(&VAR_9);
 VAR_11 = FUNC_7(&VAR_8->time);
 if (VAR_11 <= VAR_10)
  return -VAR_1;

 if ((VAR_11 - VAR_10) >=
  (VAR_6 * (365 + FUNC_2(VAR_8->time.tm_year))))
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_7, 0);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_7, VAR_5, VAR_12, sizeof(VAR_12));
 if (VAR_13)
  return VAR_13;

 VAR_8->time.tm_year = -1;
 VAR_8->time.tm_isdst = -1;
 VAR_8->time.tm_yday = -1;

 VAR_12[0] = (VAR_12[0] & 0x80) | FUNC_0(VAR_8->time.tm_sec);
 VAR_12[1] = (VAR_12[1] & 0x80) | FUNC_0(VAR_8->time.tm_min);
 VAR_12[2] = (VAR_12[2] & 0xE0) | FUNC_0(VAR_8->time.tm_hour);
 VAR_12[3] = (VAR_12[3] & 0x80) | FUNC_0(VAR_8->time.tm_wday + 1);

 VAR_12[3] |= (VAR_4 | VAR_3 | VAR_2);
 VAR_12[4] = (VAR_12[4] & 0xC0) | FUNC_0(VAR_8->time.tm_mday);
 VAR_12[5] = (VAR_12[5] & 0xE0) | FUNC_0(VAR_8->time.tm_mon + 1);

 VAR_13 = FUNC_5(VAR_7, VAR_5, VAR_12, sizeof(VAR_12));
 if (VAR_13)
  return VAR_13;


 if (VAR_8->enabled) {
  VAR_13 = FUNC_6(VAR_7, 1);
  if (VAR_13)
   return VAR_13;
  FUNC_1(VAR_7, "Alarm IRQ armed\n");
 }
 FUNC_1(VAR_7, "Set alarm: %ptRdr(%d) %ptRt\n",
  &VAR_8->time, VAR_8->time.tm_wday, &VAR_8->time);
 return 0;
}
