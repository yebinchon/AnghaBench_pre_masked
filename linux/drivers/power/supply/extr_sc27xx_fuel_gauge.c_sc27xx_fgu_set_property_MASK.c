
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct sc27xx_fgu_data {int lock; int dev; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sc27xx_fgu_data* FUNC_3 (struct power_supply*) ;
 int FUNC_4 (struct sc27xx_fgu_data*,int ) ;
 int FUNC_5 (struct sc27xx_fgu_data*,int ) ;

__attribute__((used)) static int FUNC_6(struct power_supply *VAR_1,
       enum power_supply_property VAR_2,
       const union power_supply_propval *VAR_3)
{
 struct sc27xx_fgu_data *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 FUNC_1(&VAR_4->lock);

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_5(VAR_4, VAR_3->intval);
  if (VAR_5 < 0)
   FUNC_0(VAR_4->dev, "failed to save battery capacity\n");
  break;

 case 129:
  FUNC_4(VAR_4, VAR_3->intval);
  VAR_5 = 0;
  break;

 default:
  VAR_5 = -VAR_0;
 }

 FUNC_2(&VAR_4->lock);

 return VAR_5;
}
