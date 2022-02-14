
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct device {int dummy; } ;
struct da9063_compatible_rtc_regmap {size_t rtc_data_start; int rtc_alarm_len; int rtc_alarm_secs_reg; } ;
struct da9063_compatible_rtc {int alarm_time; int regmap; struct da9063_compatible_rtc_regmap* config; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct da9063_compatible_rtc*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int *,struct da9063_compatible_rtc*) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct da9063_compatible_rtc* FUNC_5 (struct device*) ;
 int FUNC_6 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct da9063_compatible_rtc *VAR_3 = FUNC_5(VAR_1);
 const struct da9063_compatible_rtc_regmap *VAR_4 = VAR_3->config;
 u8 VAR_5[VAR_0];
 int VAR_6;

 FUNC_3(&VAR_2->time, VAR_5, VAR_3);

 VAR_6 = FUNC_2(VAR_1);
 if (VAR_6 < 0) {
  FUNC_4(VAR_1, "Failed to stop alarm: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_3->regmap,
    VAR_4->rtc_alarm_secs_reg,
    &VAR_5[VAR_4->rtc_data_start],
    VAR_4->rtc_alarm_len);
 if (VAR_6 < 0) {
  FUNC_4(VAR_1, "Failed to write alarm: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_0(VAR_5, &VAR_3->alarm_time, VAR_3);

 if (VAR_2->enabled) {
  VAR_6 = FUNC_1(VAR_1);
  if (VAR_6 < 0) {
   FUNC_4(VAR_1, "Failed to start alarm: %d\n", VAR_6);
   return VAR_6;
  }
 }

 return VAR_6;
}
