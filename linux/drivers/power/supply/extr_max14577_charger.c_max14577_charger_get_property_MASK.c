
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int strval; int intval; } ;
struct power_supply {int dummy; } ;
struct max14577_charger {TYPE_1__* max14577; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {size_t dev_type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int FUNC_2 (struct max14577_charger*,int *) ;
 int FUNC_3 (struct max14577_charger*,int *) ;
 int FUNC_4 (struct max14577_charger*,int *) ;
 int FUNC_5 (struct max14577_charger*,int *) ;
 int FUNC_6 (struct max14577_charger*,int *) ;
 int * VAR_3 ;
 struct max14577_charger* FUNC_7 (struct power_supply*) ;

__attribute__((used)) static int FUNC_8(struct power_supply *VAR_4,
       enum power_supply_property VAR_5,
       union power_supply_propval *VAR_6)
{
 struct max14577_charger *VAR_7 = FUNC_7(VAR_4);
 int VAR_8 = 0;

 switch (VAR_5) {
 case 128:
  VAR_8 = FUNC_4(VAR_7, &VAR_6->intval);
  break;
 case 134:
  VAR_8 = FUNC_3(VAR_7, &VAR_6->intval);
  break;
 case 133:
  VAR_8 = FUNC_2(VAR_7, &VAR_6->intval);
  break;
 case 129:
  VAR_8 = FUNC_6(VAR_7, &VAR_6->intval);
  break;
 case 130:
  VAR_8 = FUNC_5(VAR_7, &VAR_6->intval);
  break;
 case 131:
  FUNC_1(FUNC_0(VAR_3) != VAR_1);
  VAR_6->strval = VAR_3[VAR_7->max14577->dev_type];
  break;
 case 132:
  VAR_6->strval = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return VAR_8;
}
