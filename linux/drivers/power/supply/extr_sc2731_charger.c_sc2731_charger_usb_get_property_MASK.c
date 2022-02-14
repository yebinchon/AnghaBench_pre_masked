
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u32 ;
struct sc2731_charger_info {int lock; int charging; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sc2731_charger_info* FUNC_2 (struct power_supply*) ;
 int FUNC_3 (struct sc2731_charger_info*,int*) ;
 int FUNC_4 (struct sc2731_charger_info*,int*) ;
 int FUNC_5 (struct sc2731_charger_info*) ;

__attribute__((used)) static int FUNC_6(struct power_supply *VAR_2,
        enum power_supply_property VAR_3,
        union power_supply_propval *VAR_4)
{
 struct sc2731_charger_info *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = 0;
 u32 VAR_7;

 FUNC_0(&VAR_5->lock);

 switch (VAR_3) {
 case 128:
  if (VAR_5->charging)
   VAR_4->intval = FUNC_5(VAR_5);
  else
   VAR_4->intval = VAR_1;
  break;

 case 130:
  if (!VAR_5->charging) {
   VAR_4->intval = 0;
  } else {
   VAR_6 = FUNC_3(VAR_5, &VAR_7);
   if (VAR_6)
    goto out;

   VAR_4->intval = VAR_7 * 1000;
  }
  break;

 case 129:
  if (!VAR_5->charging) {
   VAR_4->intval = 0;
  } else {
   VAR_6 = FUNC_4(VAR_5, &VAR_7);
   if (VAR_6)
    goto out;

   VAR_4->intval = VAR_7 * 1000;
  }
  break;

 default:
  VAR_6 = -VAR_0;
 }

out:
 FUNC_1(&VAR_5->lock);
 return VAR_6;
}
