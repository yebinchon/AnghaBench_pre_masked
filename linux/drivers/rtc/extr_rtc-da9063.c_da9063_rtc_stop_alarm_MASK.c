
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct da9063_compatible_rtc_regmap {int rtc_alarm_on_mask; int rtc_alarm_year_reg; } ;
struct da9063_compatible_rtc {int regmap; struct da9063_compatible_rtc_regmap* config; } ;


 struct da9063_compatible_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct da9063_compatible_rtc *VAR_1 = FUNC_0(VAR_0);
 const struct da9063_compatible_rtc_regmap *VAR_2 = VAR_1->config;

 return FUNC_1(VAR_1->regmap,
      VAR_2->rtc_alarm_year_reg,
      VAR_2->rtc_alarm_on_mask,
      0);
}
