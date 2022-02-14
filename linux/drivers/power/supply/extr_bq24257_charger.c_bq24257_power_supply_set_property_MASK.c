
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union power_supply_propval {int dummy; } power_supply_propval ;
struct power_supply {int dummy; } ;
struct bq24257_device {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;

 int FUNC_0 (struct bq24257_device*,union power_supply_propval const*) ;
 struct bq24257_device* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_1,
     enum power_supply_property VAR_2,
     const union power_supply_propval *VAR_3)
{
 struct bq24257_device *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_2) {
 case 128:
  return FUNC_0(VAR_4, VAR_3);
 default:
  return -VAR_0;
 }
}
