
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct max17040_chip {int soc; int vcell; int online; int status; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;




 struct max17040_chip* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_1,
       enum power_supply_property VAR_2,
       union power_supply_propval *VAR_3)
{
 struct max17040_chip *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 129:
  VAR_3->intval = VAR_4->status;
  break;
 case 130:
  VAR_3->intval = VAR_4->online;
  break;
 case 128:
  VAR_3->intval = VAR_4->vcell;
  break;
 case 131:
  VAR_3->intval = VAR_4->soc;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
