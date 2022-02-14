
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtc_time {void* tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rk808_rtc {TYPE_1__* creg; struct rk808* rk808; } ;
struct rk808 {int regmap; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int seconds_reg; int ctrl_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,struct rtc_time*,void*,struct rtc_time*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct rk808_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct rk808_rtc *VAR_11 = FUNC_3(VAR_9);
 struct rk808 *VAR_12 = VAR_11->rk808;
 u8 VAR_13[VAR_5];
 int VAR_14;


 VAR_14 = FUNC_5(VAR_12->regmap, VAR_11->creg->ctrl_reg,
     VAR_0,
     VAR_0);
 if (VAR_14) {
  FUNC_2(VAR_9, "Failed to update bits rtc_ctrl: %d\n", VAR_14);
  return VAR_14;
 }







 VAR_14 = FUNC_5(VAR_12->regmap, VAR_11->creg->ctrl_reg,
     VAR_0,
     0);
 if (VAR_14) {
  FUNC_2(VAR_9, "Failed to update bits rtc_ctrl: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_4(VAR_12->regmap, VAR_11->creg->seconds_reg,
          VAR_13, VAR_5);
 if (VAR_14) {
  FUNC_2(VAR_9, "Failed to bulk read rtc_data: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_10->tm_sec = FUNC_0(VAR_13[0] & VAR_6);
 VAR_10->tm_min = FUNC_0(VAR_13[1] & VAR_3);
 VAR_10->tm_hour = FUNC_0(VAR_13[2] & VAR_2);
 VAR_10->tm_mday = FUNC_0(VAR_13[3] & VAR_1);
 VAR_10->tm_mon = (FUNC_0(VAR_13[4] & VAR_4)) - 1;
 VAR_10->tm_year = (FUNC_0(VAR_13[5] & VAR_8)) + 100;
 VAR_10->tm_wday = FUNC_0(VAR_13[6] & VAR_7);
 FUNC_6(VAR_10);
 FUNC_1(VAR_9, "RTC date/time %ptRd(%d) %ptRt\n", VAR_10, VAR_10->tm_wday, VAR_10);

 return VAR_14;
}
