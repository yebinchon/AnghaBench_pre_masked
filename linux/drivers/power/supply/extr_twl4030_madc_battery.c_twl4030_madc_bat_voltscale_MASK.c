
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_madc_battery {TYPE_1__* pdata; } ;
struct twl4030_madc_bat_calibration {int voltage; int level; } ;
struct TYPE_2__ {struct twl4030_madc_bat_calibration* discharging; struct twl4030_madc_bat_calibration* charging; } ;


 scalar_t__ FUNC_0 (struct twl4030_madc_battery*) ;

__attribute__((used)) static int FUNC_1(struct twl4030_madc_battery *VAR_0,
     int VAR_1)
{
 struct twl4030_madc_bat_calibration *VAR_2;
 int VAR_3, VAR_4 = 0;


 if (FUNC_0(VAR_0))
  VAR_2 = VAR_0->pdata->charging;
 else
  VAR_2 = VAR_0->pdata->discharging;

 if (VAR_1 > VAR_2[0].voltage) {
  VAR_4 = VAR_2[0].level;
 } else {
  for (VAR_3 = 0; VAR_2[VAR_3+1].voltage >= 0; VAR_3++) {
   if (VAR_1 <= VAR_2[VAR_3].voltage &&
     VAR_1 >= VAR_2[VAR_3+1].voltage) {

    VAR_4 = VAR_2[VAR_3].level -
     ((VAR_2[VAR_3].voltage - VAR_1) *
     (VAR_2[VAR_3].level -
     VAR_2[VAR_3+1].level)) /
     (VAR_2[VAR_3].voltage -
     VAR_2[VAR_3+1].voltage);
    break;
   }
  }
 }
 return VAR_4;
}
