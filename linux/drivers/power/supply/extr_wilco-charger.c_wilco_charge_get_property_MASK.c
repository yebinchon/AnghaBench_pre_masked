
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct wilco_ec_device {int dummy; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int FUNC_0 (int) ;
 struct wilco_ec_device* FUNC_1 (struct power_supply*) ;
 int FUNC_2 (struct wilco_ec_device*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_5,
         enum power_supply_property VAR_6,
         union power_supply_propval *VAR_7)
{
 struct wilco_ec_device *VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9;
 int VAR_10;
 u8 VAR_11;

 switch (VAR_6) {
 case 128:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_2;
  break;
 case 130:
  VAR_9 = VAR_4;
  break;
 default:
  return -VAR_1;
 }

 VAR_10 = FUNC_2(VAR_8, VAR_9, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_9 == VAR_3) {
  VAR_10 = FUNC_0(VAR_11);
  if (VAR_10 < 0)
   return -VAR_0;
  VAR_11 = VAR_10;
 }
 VAR_7->intval = VAR_11;

 return 0;
}
