
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct twl4030_madc_battery {TYPE_1__* pdata; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int capacity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct twl4030_madc_battery* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct twl4030_madc_battery*) ;
 int FUNC_2 (struct twl4030_madc_battery*) ;
 int FUNC_3 (struct twl4030_madc_battery*) ;
 int FUNC_4 (struct twl4030_madc_battery*) ;
 int FUNC_5 (struct twl4030_madc_battery*,int) ;

__attribute__((used)) static int FUNC_6(struct power_supply *VAR_5,
     enum power_supply_property VAR_6,
     union power_supply_propval *VAR_7)
{
 struct twl4030_madc_battery *VAR_8 = FUNC_0(VAR_5);

 switch (VAR_6) {
 case 132:
  if (FUNC_5(VAR_8,
    FUNC_4(VAR_8)) > 95)
   VAR_7->intval = VAR_3;
  else {
   if (FUNC_1(VAR_8))
    VAR_7->intval = VAR_1;
   else
    VAR_7->intval = VAR_2;
  }
  break;
 case 128:
  VAR_7->intval = FUNC_4(VAR_8) * 1000;
  break;
 case 131:
  VAR_7->intval = VAR_4;
  break;
 case 134:
  VAR_7->intval = FUNC_2(VAR_8);
  break;
 case 133:

  VAR_7->intval = 1;
  break;
 case 135: {
   int VAR_9 = FUNC_5(VAR_8,
     FUNC_4(VAR_8));
   VAR_7->intval = (VAR_9 * VAR_8->pdata->capacity) / 100;
   break;
  }
 case 137:
  VAR_7->intval = FUNC_5(VAR_8,
     FUNC_4(VAR_8));
  break;
 case 136:
  VAR_7->intval = VAR_8->pdata->capacity;
  break;
 case 130:
  VAR_7->intval = FUNC_3(VAR_8);
  break;
 case 129: {
   int VAR_10 = FUNC_5(VAR_8,
     FUNC_4(VAR_8));

   int VAR_11 = (VAR_10 * (VAR_8->pdata->capacity/1000))/100;


   VAR_7->intval = (3600l * VAR_11) / 400;
   break;
  }
 default:
  return -VAR_0;
 }

 return 0;
}
