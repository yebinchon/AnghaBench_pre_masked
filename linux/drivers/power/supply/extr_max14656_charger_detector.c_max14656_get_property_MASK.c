
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int strval; int intval; } ;
struct power_supply {int dummy; } ;
struct max14656_chip {int online; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct max14656_chip* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_3,
       enum power_supply_property VAR_4,
       union power_supply_propval *VAR_5)
{
 struct max14656_chip *VAR_6 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 128:
  VAR_5->intval = VAR_6->online;
  break;
 case 129:
  VAR_5->strval = VAR_2;
  break;
 case 130:
  VAR_5->strval = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
