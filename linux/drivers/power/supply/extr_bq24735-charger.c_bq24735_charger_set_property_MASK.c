
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct bq24735 {int charging; int lock; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct bq24735*) ;
 int FUNC_1 (struct bq24735*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct power_supply*) ;
 struct bq24735* FUNC_5 (struct power_supply*) ;

__attribute__((used)) static int FUNC_6(struct power_supply *VAR_2,
     enum power_supply_property VAR_3,
     const union power_supply_propval *VAR_4)
{
 struct bq24735 *VAR_5 = FUNC_5(VAR_2);
 int VAR_6;

 switch (VAR_3) {
 case 131:
  switch (VAR_4->intval) {
  case 130:
   FUNC_2(&VAR_5->lock);
   VAR_5->charging = 1;
   VAR_6 = FUNC_1(VAR_5);
   FUNC_3(&VAR_5->lock);
   if (VAR_6)
    return VAR_6;
   break;
  case 129:
  case 128:
   FUNC_2(&VAR_5->lock);
   VAR_5->charging = 0;
   VAR_6 = FUNC_0(VAR_5);
   FUNC_3(&VAR_5->lock);
   if (VAR_6)
    return VAR_6;
   break;
  default:
   return -VAR_0;
  }
  FUNC_4(VAR_2);
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
