
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct wm97xx_batt_pdata {int batt_tech; int max_voltage; int min_voltage; int temp_aux; int batt_aux; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;







 int VAR_1 ;
 struct wm97xx_batt_pdata* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct power_supply*) ;
 int FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_2,
       enum power_supply_property VAR_3,
       union power_supply_propval *VAR_4)
{
 struct wm97xx_batt_pdata *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 133:
  VAR_4->intval = VAR_1;
  break;
 case 132:
  VAR_4->intval = VAR_5->batt_tech;
  break;
 case 128:
  if (VAR_5->batt_aux >= 0)
   VAR_4->intval = FUNC_1(VAR_2);
  else
   return -VAR_0;
  break;
 case 131:
  if (VAR_5->temp_aux >= 0)
   VAR_4->intval = FUNC_2(VAR_2);
  else
   return -VAR_0;
  break;
 case 130:
  if (VAR_5->max_voltage >= 0)
   VAR_4->intval = VAR_5->max_voltage;
  else
   return -VAR_0;
  break;
 case 129:
  if (VAR_5->min_voltage >= 0)
   VAR_4->intval = VAR_5->min_voltage;
  else
   return -VAR_0;
  break;
 case 134:
  VAR_4->intval = 1;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
