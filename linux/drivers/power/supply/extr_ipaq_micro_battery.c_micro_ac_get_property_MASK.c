
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct micro_battery {int ac; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;

 struct micro_battery* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_1,
     enum power_supply_property VAR_2,
     union power_supply_propval *VAR_3)
{
 struct micro_battery *VAR_4 = FUNC_0(VAR_1->dev.parent);

 switch (VAR_2) {
 case 128:
  VAR_3->intval = VAR_4->ac;
  break;
 default:
  return -VAR_0;
 };

 return 0;
}
