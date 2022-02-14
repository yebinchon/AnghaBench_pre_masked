
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_soc_data {int panic_alarm_mask; int panic_alarm_shift; scalar_t__ panic_alarm_ctrl; } ;
struct regmap {int dummy; } ;
struct imx_thermal_data {int c2; int c1; struct regmap* tempmon; struct thermal_soc_data* socdata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct regmap*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct imx_thermal_data *VAR_2,
          int VAR_3)
{
 const struct thermal_soc_data *VAR_4 = VAR_2->socdata;
 struct regmap *VAR_5 = VAR_2->tempmon;
 int VAR_6;

 VAR_6 = (VAR_2->c2 - VAR_3) / VAR_2->c1;

 FUNC_0(VAR_5, VAR_4->panic_alarm_ctrl + VAR_0,
       VAR_4->panic_alarm_mask);
 FUNC_0(VAR_5, VAR_4->panic_alarm_ctrl + VAR_1,
       VAR_6 << VAR_4->panic_alarm_shift);
}
