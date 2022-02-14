
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct sc2731_charger_info {int lock; int dev; int charging; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sc2731_charger_info* FUNC_3 (struct power_supply*) ;
 int FUNC_4 (struct sc2731_charger_info*,int) ;
 int FUNC_5 (struct sc2731_charger_info*,int) ;

__attribute__((used)) static int
FUNC_6(struct power_supply *VAR_2,
    enum power_supply_property VAR_3,
    const union power_supply_propval *VAR_4)
{
 struct sc2731_charger_info *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 FUNC_1(&VAR_5->lock);

 if (!VAR_5->charging) {
  FUNC_2(&VAR_5->lock);
  return -VAR_1;
 }

 switch (VAR_3) {
 case 129:
  VAR_6 = FUNC_4(VAR_5, VAR_4->intval / 1000);
  if (VAR_6 < 0)
   FUNC_0(VAR_5->dev, "set charge current failed\n");
  break;

 case 128:
  VAR_6 = FUNC_5(VAR_5,
             VAR_4->intval / 1000);
  if (VAR_6 < 0)
   FUNC_0(VAR_5->dev, "set input current limit failed\n");
  break;

 default:
  VAR_6 = -VAR_0;
 }

 FUNC_2(&VAR_5->lock);
 return VAR_6;
}
