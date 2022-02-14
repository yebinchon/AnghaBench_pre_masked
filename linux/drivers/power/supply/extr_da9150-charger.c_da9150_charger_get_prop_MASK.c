
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union power_supply_propval {int dummy; } power_supply_propval ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct da9150_charger {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;




 int FUNC_0 (struct da9150_charger*,union power_supply_propval*) ;
 int FUNC_1 (struct da9150_charger*,struct power_supply*,union power_supply_propval*) ;
 int FUNC_2 (struct da9150_charger*,union power_supply_propval*) ;
 int FUNC_3 (struct da9150_charger*,union power_supply_propval*) ;
 struct da9150_charger* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_1,
       enum power_supply_property VAR_2,
       union power_supply_propval *VAR_3)
{
 struct da9150_charger *VAR_4 = FUNC_4(VAR_1->dev.parent);
 int VAR_5;

 switch (VAR_2) {
 case 130:
  VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_3);
  break;
 case 128:
  VAR_5 = FUNC_3(VAR_4, VAR_3);
  break;
 case 131:
  VAR_5 = FUNC_0(VAR_4, VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_4, VAR_3);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
