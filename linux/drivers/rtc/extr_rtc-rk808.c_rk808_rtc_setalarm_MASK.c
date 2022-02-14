
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; int tm_wday; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_2__ time; } ;
struct rk808_rtc {TYPE_1__* creg; struct rk808* rk808; } ;
struct rk808 {int regmap; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int alarm_seconds_reg; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,TYPE_2__*,int ,TYPE_2__*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct rk808_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (struct rk808_rtc*) ;
 int FUNC_7 (struct rk808_rtc*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct rk808_rtc *VAR_3 = FUNC_3(VAR_1);
 struct rk808 *VAR_4 = VAR_3->rk808;
 u8 VAR_5[VAR_0];
 int VAR_6;

 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_1, "Failed to stop alarm: %d\n", VAR_6);
  return VAR_6;
 }
 FUNC_1(VAR_1, "alrm set RTC date/time %ptRd(%d) %ptRt\n",
  &VAR_2->time, VAR_2->time.tm_wday, &VAR_2->time);

 FUNC_4(&VAR_2->time);
 VAR_5[0] = FUNC_0(VAR_2->time.tm_sec);
 VAR_5[1] = FUNC_0(VAR_2->time.tm_min);
 VAR_5[2] = FUNC_0(VAR_2->time.tm_hour);
 VAR_5[3] = FUNC_0(VAR_2->time.tm_mday);
 VAR_5[4] = FUNC_0(VAR_2->time.tm_mon + 1);
 VAR_5[5] = FUNC_0(VAR_2->time.tm_year - 100);

 VAR_6 = FUNC_5(VAR_4->regmap,
    VAR_3->creg->alarm_seconds_reg,
    VAR_5, VAR_0);
 if (VAR_6) {
  FUNC_2(VAR_1, "Failed to bulk write: %d\n", VAR_6);
  return VAR_6;
 }
 if (VAR_2->enabled) {
  VAR_6 = FUNC_6(VAR_3);
  if (VAR_6) {
   FUNC_2(VAR_1, "Failed to start alarm: %d\n", VAR_6);
   return VAR_6;
  }
 }
 return 0;
}
