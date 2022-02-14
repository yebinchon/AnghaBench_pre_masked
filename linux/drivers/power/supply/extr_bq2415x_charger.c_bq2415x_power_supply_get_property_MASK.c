
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int strval; int intval; } ;
struct power_supply {int dummy; } ;
struct bq2415x_device {int model; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bq2415x_device*,int ) ;
 struct bq2415x_device* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_6,
          enum power_supply_property VAR_7,
          union power_supply_propval *VAR_8)
{
 struct bq2415x_device *VAR_9 = FUNC_1(VAR_6);
 int VAR_10;

 switch (VAR_7) {
 case 128:
  VAR_10 = FUNC_0(VAR_9, VAR_0);
  if (VAR_10 < 0)
   return VAR_10;
  else if (VAR_10 == 0)
   VAR_8->intval = VAR_4;
  else if (VAR_10 == 1)
   VAR_8->intval = VAR_2;
  else if (VAR_10 == 2)
   VAR_8->intval = VAR_3;
  else
   VAR_8->intval = VAR_5;
  break;
 case 129:
  VAR_8->strval = VAR_9->model;
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
