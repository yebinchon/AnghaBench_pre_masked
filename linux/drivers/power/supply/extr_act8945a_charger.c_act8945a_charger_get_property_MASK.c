
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int strval; int intval; } ;
struct regmap {int dummy; } ;
struct power_supply {int dummy; } ;
struct act8945a_charger {struct regmap* regmap; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regmap*,int *) ;
 int FUNC_1 (struct act8945a_charger*,struct regmap*,int *) ;
 int FUNC_2 (struct regmap*,int *) ;
 int FUNC_3 (struct regmap*,int *) ;
 int FUNC_4 (struct act8945a_charger*,struct regmap*,int *) ;
 struct act8945a_charger* FUNC_5 (struct power_supply*) ;

__attribute__((used)) static int FUNC_6(struct power_supply *VAR_4,
      enum power_supply_property VAR_5,
      union power_supply_propval *VAR_6)
{
 struct act8945a_charger *VAR_7 = FUNC_5(VAR_4);
 struct regmap *VAR_8 = VAR_7->regmap;
 int VAR_9 = 0;

 switch (VAR_5) {
 case 129:
  VAR_9 = FUNC_3(VAR_8, &VAR_6->intval);
  break;
 case 134:
  VAR_9 = FUNC_2(VAR_8, &VAR_6->intval);
  break;
 case 128:
  VAR_6->intval = VAR_1;
  break;
 case 132:
  VAR_9 = FUNC_0(VAR_8, &VAR_6->intval);
  break;
 case 135:
  VAR_9 = FUNC_1(VAR_7,
        VAR_8, &VAR_6->intval);
  break;
 case 133:
  VAR_9 = FUNC_4(VAR_7,
            VAR_8, &VAR_6->intval);
  break;
 case 130:
  VAR_6->strval = VAR_3;
  break;
 case 131:
  VAR_6->strval = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return VAR_9;
}
