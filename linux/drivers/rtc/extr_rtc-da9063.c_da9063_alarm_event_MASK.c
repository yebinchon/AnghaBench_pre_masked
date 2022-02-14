
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9063_compatible_rtc_regmap {int rtc_alarm_on_mask; int rtc_alarm_year_reg; } ;
struct da9063_compatible_rtc {int rtc_sync; int rtc_dev; int regmap; struct da9063_compatible_rtc_regmap* config; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct da9063_compatible_rtc *VAR_5 = VAR_4;
 const struct da9063_compatible_rtc_regmap *VAR_6 = VAR_5->config;

 FUNC_0(VAR_5->regmap,
      VAR_6->rtc_alarm_year_reg,
      VAR_6->rtc_alarm_on_mask,
      0);

 VAR_5->rtc_sync = 1;
 FUNC_1(VAR_5->rtc_dev, 1, VAR_2 | VAR_1);

 return VAR_0;
}
