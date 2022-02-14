
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union power_supply_propval {int dummy; } power_supply_propval ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct lp8788_charger {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 struct lp8788_charger* FUNC_0 (int ) ;
 int FUNC_1 (struct lp8788_charger*,union power_supply_propval*) ;
 int FUNC_2 (struct lp8788_charger*,union power_supply_propval*) ;
 int FUNC_3 (struct lp8788_charger*,union power_supply_propval*) ;
 int FUNC_4 (struct lp8788_charger*,union power_supply_propval*) ;
 int FUNC_5 (struct lp8788_charger*,union power_supply_propval*) ;
 int FUNC_6 (struct lp8788_charger*,union power_supply_propval*) ;
 int FUNC_7 (struct lp8788_charger*,union power_supply_propval*) ;
 int FUNC_8 (struct lp8788_charger*,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_9(struct power_supply *VAR_1,
     enum power_supply_property VAR_2,
     union power_supply_propval *VAR_3)
{
 struct lp8788_charger *VAR_4 = FUNC_0(VAR_1->dev.parent);

 switch (VAR_2) {
 case 130:
  return FUNC_5(VAR_4, VAR_3);
 case 132:
  return FUNC_3(VAR_4, VAR_3);
 case 131:
  return FUNC_4(VAR_4, VAR_3);
 case 128:
  return FUNC_7(VAR_4, VAR_3);
 case 135:
  return FUNC_1(VAR_4, VAR_3);
 case 129:
  return FUNC_6(VAR_4, VAR_3);
 case 134:
  return FUNC_2(VAR_4, VAR_3);
 case 133:
  return FUNC_8(VAR_4, VAR_3);
 default:
  return -VAR_0;
 }
}
