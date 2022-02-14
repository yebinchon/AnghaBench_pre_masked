
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct lt3651_charger {int chrg_gpio; int fault_gpio; int acpr_gpio; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct lt3651_charger* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_9,
  enum power_supply_property VAR_10, union power_supply_propval *VAR_11)
{
 struct lt3651_charger *VAR_12 = FUNC_1(VAR_9);

 switch (VAR_10) {
 case 128:
  if (!VAR_12->chrg_gpio) {
   VAR_11->intval = VAR_8;
   break;
  }
  if (FUNC_0(VAR_12->chrg_gpio))
   VAR_11->intval = VAR_6;
  else
   VAR_11->intval = VAR_7;
  break;
 case 129:
  VAR_11->intval = FUNC_0(VAR_12->acpr_gpio);
  break;
 case 130:
  if (!VAR_12->fault_gpio) {
   VAR_11->intval = VAR_4;
   break;
  }
  if (!FUNC_0(VAR_12->fault_gpio)) {
   VAR_11->intval = VAR_2;
   break;
  }




  if (!VAR_12->chrg_gpio) {
   VAR_11->intval = VAR_5;
   break;
  }
  VAR_11->intval = FUNC_0(VAR_12->chrg_gpio) ?
    VAR_3 :
    VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
