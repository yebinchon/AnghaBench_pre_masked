
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct micro_battery {int temperature; int voltage; int chemistry; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct micro_battery* FUNC_0 (int ) ;
 int FUNC_1 (struct power_supply*) ;
 int FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_6,
     enum power_supply_property VAR_7,
     union power_supply_propval *VAR_8)
{
 struct micro_battery *VAR_9 = FUNC_0(VAR_6->dev.parent);

 switch (VAR_7) {
 case 131:
  switch (VAR_9->chemistry) {
  case 135:
   VAR_8->intval = VAR_3;
   break;
  case 134:
   VAR_8->intval = VAR_4;
   break;
  case 137:
   VAR_8->intval = VAR_1;
   break;
  case 136:
   VAR_8->intval = VAR_2;
   break;
  default:
   VAR_8->intval = VAR_5;
   break;
  };
  break;
 case 132:
  VAR_8->intval = FUNC_2(VAR_6);
  break;
 case 129:
  VAR_8->intval = 4700000;
  break;
 case 133:
  VAR_8->intval = FUNC_1(VAR_6);
  break;
 case 130:
  VAR_8->intval = VAR_9->temperature;
  break;
 case 128:
  VAR_8->intval = VAR_9->voltage;
  break;
 default:
  return -VAR_0;
 };

 return 0;
}
