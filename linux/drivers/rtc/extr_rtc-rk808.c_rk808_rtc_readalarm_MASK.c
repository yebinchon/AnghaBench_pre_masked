
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
struct TYPE_6__ {int tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; TYPE_2__ time; } ;
struct rk808_rtc {TYPE_1__* creg; struct rk808* rk808; } ;
struct rk808 {int regmap; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int int_reg; int alarm_seconds_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,TYPE_2__*,int ,TYPE_2__*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct rk808_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct rk808_rtc *VAR_10 = FUNC_3(VAR_8);
 struct rk808 *VAR_11 = VAR_10->rk808;
 u8 VAR_12[VAR_5];
 uint32_t VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_11->regmap,
          VAR_10->creg->alarm_seconds_reg,
          VAR_12, VAR_5);
 if (VAR_14) {
  FUNC_2(VAR_8, "Failed to read RTC alarm date REG: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_9->time.tm_sec = FUNC_0(VAR_12[0] & VAR_6);
 VAR_9->time.tm_min = FUNC_0(VAR_12[1] & VAR_3);
 VAR_9->time.tm_hour = FUNC_0(VAR_12[2] & VAR_2);
 VAR_9->time.tm_mday = FUNC_0(VAR_12[3] & VAR_1);
 VAR_9->time.tm_mon = (FUNC_0(VAR_12[4] & VAR_4)) - 1;
 VAR_9->time.tm_year = (FUNC_0(VAR_12[5] & VAR_7)) + 100;
 FUNC_6(&VAR_9->time);

 VAR_14 = FUNC_5(VAR_11->regmap, VAR_10->creg->int_reg, &VAR_13);
 if (VAR_14) {
  FUNC_2(VAR_8, "Failed to read RTC INT REG: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_1(VAR_8, "alrm read RTC date/time %ptRd(%d) %ptRt\n",
  &VAR_9->time, VAR_9->time.tm_wday, &VAR_9->time);

 VAR_9->enabled = (VAR_13 & VAR_0) ? 1 : 0;

 return 0;
}
