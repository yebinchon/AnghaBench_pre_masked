
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;

 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct power_supply *VAR_2,
          enum power_supply_property VAR_3,
          union power_supply_propval *VAR_4)
{
 switch (VAR_3) {
 case 128:
  VAR_4->intval = VAR_1;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
