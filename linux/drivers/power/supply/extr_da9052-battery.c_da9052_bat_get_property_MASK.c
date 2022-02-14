
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct da9052_battery {int da9052; int charger_type; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct da9052_battery*,int*) ;
 int FUNC_2 (struct da9052_battery*,int*) ;
 int FUNC_3 (struct da9052_battery*,int*) ;
 int FUNC_4 (struct da9052_battery*,int*) ;
 int FUNC_5 (struct da9052_battery*,int*) ;
 int FUNC_6 (struct da9052_battery*,int*) ;
 struct da9052_battery* FUNC_7 (struct power_supply*) ;

__attribute__((used)) static int FUNC_8(struct power_supply *VAR_5,
        enum power_supply_property VAR_6,
        union power_supply_propval *VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct da9052_battery *VAR_10 = FUNC_7(VAR_5);

 VAR_8 = FUNC_2(VAR_10, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_9 && VAR_6 != 133)
  return -VAR_3;

 switch (VAR_6) {
 case 132:
  VAR_8 = FUNC_3(VAR_10, &VAR_7->intval);
  break;
 case 134:
  VAR_7->intval =
   (VAR_10->charger_type == VAR_1) ? 0 : 1;
  break;
 case 133:
  VAR_8 = FUNC_2(VAR_10, &VAR_7->intval);
  break;
 case 135:
  VAR_8 = FUNC_1(VAR_10, &VAR_7->intval);
  break;
 case 128:
  VAR_7->intval = VAR_0 * 1000;
  break;
 case 129:
  VAR_8 = FUNC_5(VAR_10, &VAR_7->intval);
  break;
 case 136:
  VAR_8 = FUNC_6(VAR_10, &VAR_7->intval);
  break;
 case 137:
  VAR_8 = FUNC_4(VAR_10, &VAR_7->intval);
  break;
 case 130:
  VAR_7->intval = FUNC_0(VAR_10->da9052);
  VAR_8 = VAR_7->intval;
  break;
 case 131:
  VAR_7->intval = VAR_4;
  break;
 default:
  return -VAR_2;
 }
 return VAR_8;
}
