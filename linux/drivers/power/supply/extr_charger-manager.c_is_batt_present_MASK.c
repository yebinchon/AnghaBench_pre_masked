
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct charger_manager {TYPE_1__* desc; int dev; } ;
struct TYPE_2__ {int battery_present; int * psy_charger_stat; int psy_fuel_gauge; } ;






 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct power_supply* FUNC_1 (int ) ;
 int FUNC_2 (struct power_supply*,int ,union power_supply_propval*) ;
 int FUNC_3 (struct power_supply*) ;

__attribute__((used)) static bool FUNC_4(struct charger_manager *VAR_1)
{
 union power_supply_propval VAR_2;
 struct power_supply *VAR_3;
 bool VAR_4 = 0;
 int VAR_5, VAR_6;

 switch (VAR_1->desc->battery_present) {
 case 131:
  VAR_4 = 1;
  break;
 case 128:
  break;
 case 129:
  VAR_3 = FUNC_1(VAR_1->desc->psy_fuel_gauge);
  if (!VAR_3)
   break;

  VAR_6 = FUNC_2(VAR_3, VAR_0,
    &VAR_2);
  if (VAR_6 == 0 && VAR_2.intval)
   VAR_4 = 1;
  FUNC_3(VAR_3);
  break;
 case 130:
  for (VAR_5 = 0; VAR_1->desc->psy_charger_stat[VAR_5]; VAR_5++) {
   VAR_3 = FUNC_1(
     VAR_1->desc->psy_charger_stat[VAR_5]);
   if (!VAR_3) {
    FUNC_0(VAR_1->dev, "Cannot find power supply \"%s\"\n",
     VAR_1->desc->psy_charger_stat[VAR_5]);
    continue;
   }

   VAR_6 = FUNC_2(VAR_3,
    VAR_0, &VAR_2);
   FUNC_3(VAR_3);
   if (VAR_6 == 0 && VAR_2.intval) {
    VAR_4 = 1;
    break;
   }
  }
  break;
 }

 return VAR_4;
}
