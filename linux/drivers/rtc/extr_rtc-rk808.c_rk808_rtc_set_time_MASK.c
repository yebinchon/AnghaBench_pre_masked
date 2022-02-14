
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtc_time {scalar_t__ tm_wday; scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct rk808_rtc {TYPE_1__* creg; struct rk808* rk808; } ;
struct rk808 {int regmap; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int ctrl_reg; int seconds_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,struct rtc_time*,scalar_t__,struct rtc_time*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct rk808_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (struct rtc_time*) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct rk808_rtc *VAR_4 = FUNC_3(VAR_2);
 struct rk808 *VAR_5 = VAR_4->rk808;
 u8 VAR_6[VAR_1];
 int VAR_7;

 FUNC_1(VAR_2, "set RTC date/time %ptRd(%d) %ptRt\n", VAR_3, VAR_3->tm_wday, VAR_3);
 FUNC_4(VAR_3);
 VAR_6[0] = FUNC_0(VAR_3->tm_sec);
 VAR_6[1] = FUNC_0(VAR_3->tm_min);
 VAR_6[2] = FUNC_0(VAR_3->tm_hour);
 VAR_6[3] = FUNC_0(VAR_3->tm_mday);
 VAR_6[4] = FUNC_0(VAR_3->tm_mon + 1);
 VAR_6[5] = FUNC_0(VAR_3->tm_year - 100);
 VAR_6[6] = FUNC_0(VAR_3->tm_wday);


 VAR_7 = FUNC_6(VAR_5->regmap, VAR_4->creg->ctrl_reg,
     VAR_0,
     VAR_0);
 if (VAR_7) {
  FUNC_2(VAR_2, "Failed to update RTC control: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_5(VAR_5->regmap, VAR_4->creg->seconds_reg,
    VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_2(VAR_2, "Failed to bull write rtc_data: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_6(VAR_5->regmap, VAR_4->creg->ctrl_reg,
     VAR_0, 0);
 if (VAR_7) {
  FUNC_2(VAR_2, "Failed to update RTC control: %d\n", VAR_7);
  return VAR_7;
 }
 return 0;
}
