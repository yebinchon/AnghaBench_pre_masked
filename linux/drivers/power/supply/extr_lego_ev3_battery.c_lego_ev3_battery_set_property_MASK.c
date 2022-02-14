
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct lego_ev3_battery {int technology; int v_max; int v_min; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;


 int VAR_1 ;
 struct lego_ev3_battery* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_2,
      enum power_supply_property VAR_3,
      const union power_supply_propval *VAR_4)
{
 struct lego_ev3_battery *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 129:
  if (VAR_5->technology != VAR_1)
   return -VAR_0;
  switch (VAR_4->intval) {
  case 128:
   VAR_5->technology = 128;
   VAR_5->v_max = 7800000;
   VAR_5->v_min = 5400000;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
