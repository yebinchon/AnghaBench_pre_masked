
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_soc_data {scalar_t__ version; int high_alarm_mask; int high_alarm_shift; scalar_t__ high_alarm_ctrl; } ;
struct regmap {int dummy; } ;
struct imx_thermal_data {int alarm_temp; int c1; int c2; struct thermal_soc_data* socdata; struct regmap* tempmon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct regmap*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct imx_thermal_data *VAR_3,
          int VAR_4)
{
 struct regmap *VAR_5 = VAR_3->tempmon;
 const struct thermal_soc_data *VAR_6 = VAR_3->socdata;
 int VAR_7;

 VAR_3->alarm_temp = VAR_4;

 if (VAR_3->socdata->version == VAR_2)
  VAR_7 = VAR_4 / 1000 + VAR_3->c1 - 25;
 else
  VAR_7 = (VAR_3->c2 - VAR_4) / VAR_3->c1;

 FUNC_0(VAR_5, VAR_6->high_alarm_ctrl + VAR_0,
       VAR_6->high_alarm_mask);
 FUNC_0(VAR_5, VAR_6->high_alarm_ctrl + VAR_1,
       VAR_7 << VAR_6->high_alarm_shift);
}
