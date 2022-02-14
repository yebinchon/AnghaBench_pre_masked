
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct wilco_ec_device {int dummy; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 struct wilco_ec_device* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wilco_ec_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_8,
         enum power_supply_property VAR_9,
         const union power_supply_propval *VAR_10)
{
 struct wilco_ec_device *VAR_11 = FUNC_0(VAR_8);
 int VAR_12;

 switch (VAR_9) {
 case 128:
  VAR_12 = FUNC_1(VAR_10->intval);
  if (VAR_12 < 0)
   return -VAR_4;
  return FUNC_2(VAR_11, VAR_6, VAR_12);
 case 129:
  if (VAR_10->intval < VAR_1 ||
      VAR_10->intval > VAR_0)
   return -VAR_4;
  return FUNC_2(VAR_11, VAR_5,
        VAR_10->intval);
 case 130:
  if (VAR_10->intval < VAR_3 ||
      VAR_10->intval > VAR_2)
   return -VAR_4;
  return FUNC_2(VAR_11, VAR_7,
        VAR_10->intval);
 default:
  return -VAR_4;
 }
}
