
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct ltc294x_info {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct ltc294x_info*,int ) ;
 int FUNC_1 (struct ltc294x_info*,int ,int ) ;
 struct ltc294x_info* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_3,
 enum power_supply_property VAR_4,
 const union power_supply_propval *VAR_5)
{
 struct ltc294x_info *VAR_6 = FUNC_2(VAR_3);

 switch (VAR_4) {
 case 129:
  return FUNC_1(VAR_6,
   VAR_1, VAR_5->intval);
 case 130:
  return FUNC_1(VAR_6,
   VAR_2, VAR_5->intval);
 case 128:
  return FUNC_0(VAR_6, VAR_5->intval);
 default:
  return -VAR_0;
 }
}
