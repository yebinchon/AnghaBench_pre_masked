
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct da9063_compatible_rtc_regmap {int rtc_count_secs_reg; } ;
struct da9063_compatible_rtc {int regmap; struct da9063_compatible_rtc_regmap* config; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtc_time*,int *,struct da9063_compatible_rtc*) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct da9063_compatible_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct da9063_compatible_rtc *VAR_3 = FUNC_2(VAR_1);
 const struct da9063_compatible_rtc_regmap *VAR_4 = VAR_3->config;
 u8 VAR_5[VAR_0];
 int VAR_6;

 FUNC_0(VAR_2, VAR_5, VAR_3);
 VAR_6 = FUNC_3(VAR_3->regmap,
    VAR_4->rtc_count_secs_reg,
    VAR_5, VAR_0);
 if (VAR_6 < 0)
  FUNC_1(VAR_1, "Failed to set RTC time data: %d\n", VAR_6);

 return VAR_6;
}
