
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct ux500_charger {struct power_supply* psy; } ;
struct power_supply {TYPE_1__* desc; int num_supplicants; scalar_t__ supplied_to; } ;
struct device {int dummy; } ;
struct ab8500_charger {int vbat; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int num_properties; int* properties; int type; int name; } ;




 struct power_supply* FUNC_0 (struct device*) ;
 int FUNC_1 (char const**,int ,int ) ;
 scalar_t__ FUNC_2 (struct power_supply*,int,union power_supply_propval*) ;
 struct ab8500_charger* FUNC_3 (struct ux500_charger*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1)
{
 struct power_supply *VAR_2;
 struct power_supply *VAR_3 = FUNC_0(VAR_0);
 const char **VAR_4 = (const char **)VAR_3->supplied_to;
 struct ab8500_charger *VAR_5;
 union power_supply_propval VAR_6;
 int VAR_7;
 struct ux500_charger *VAR_8;

 VAR_8 = (struct ux500_charger *)VAR_1;
 VAR_2 = VAR_8->psy;

 VAR_5 = FUNC_3(VAR_8);


 VAR_7 = FUNC_1(VAR_4, VAR_3->num_supplicants, VAR_2->desc->name);
 if (VAR_7 < 0)
  return 0;


 for (VAR_7 = 0; VAR_7 < VAR_3->desc->num_properties; VAR_7++) {
  enum power_supply_property VAR_9;
  VAR_9 = VAR_3->desc->properties[VAR_7];

  if (FUNC_2(VAR_3, VAR_9, &VAR_6))
   continue;

  switch (VAR_9) {
  case 129:
   switch (VAR_3->desc->type) {
   case 128:
    VAR_5->vbat = VAR_6.intval / 1000;
    break;
   default:
    break;
   }
   break;
  default:
   break;
  }
 }
 return 0;
}
