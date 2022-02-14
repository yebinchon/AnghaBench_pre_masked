
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int strval; int intval; } ;
struct regmap {int dummy; } ;
struct power_supply {int dummy; } ;
struct max77693_charger {TYPE_1__* max77693; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {struct regmap* regmap; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int *) ;
 int FUNC_1 (struct regmap*,int *) ;
 int FUNC_2 (struct regmap*,int *) ;
 int FUNC_3 (struct regmap*,int *) ;
 int FUNC_4 (struct regmap*,int *) ;
 struct max77693_charger* FUNC_5 (struct power_supply*) ;

__attribute__((used)) static int FUNC_6(struct power_supply *VAR_3,
       enum power_supply_property VAR_4,
       union power_supply_propval *VAR_5)
{
 struct max77693_charger *VAR_6 = FUNC_5(VAR_3);
 struct regmap *VAR_7 = VAR_6->max77693->regmap;
 int VAR_8 = 0;

 switch (VAR_4) {
 case 128:
  VAR_8 = FUNC_2(VAR_7, &VAR_5->intval);
  break;
 case 134:
  VAR_8 = FUNC_1(VAR_7, &VAR_5->intval);
  break;
 case 133:
  VAR_8 = FUNC_0(VAR_7, &VAR_5->intval);
  break;
 case 129:
  VAR_8 = FUNC_4(VAR_7, &VAR_5->intval);
  break;
 case 130:
  VAR_8 = FUNC_3(VAR_7, &VAR_5->intval);
  break;
 case 131:
  VAR_5->strval = VAR_2;
  break;
 case 132:
  VAR_5->strval = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return VAR_8;
}
