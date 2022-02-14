
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
 int VAR_3 ;







 int FUNC_0 (struct ltc294x_info*,int ,int *) ;
 int FUNC_1 (struct ltc294x_info*,int *) ;
 int FUNC_2 (struct ltc294x_info*,int *) ;
 int FUNC_3 (struct ltc294x_info*,int *) ;
 int FUNC_4 (struct ltc294x_info*,int *) ;
 struct ltc294x_info* FUNC_5 (struct power_supply*) ;

__attribute__((used)) static int FUNC_6(struct power_supply *VAR_4,
    enum power_supply_property VAR_5,
    union power_supply_propval *VAR_6)
{
 struct ltc294x_info *VAR_7 = FUNC_5(VAR_4);

 switch (VAR_5) {
 case 132:
  return FUNC_0(VAR_7, VAR_2,
      &VAR_6->intval);
 case 133:
  return FUNC_0(VAR_7, VAR_3,
      &VAR_6->intval);
 case 131:
  return FUNC_0(VAR_7, VAR_1,
      &VAR_6->intval);
 case 134:
  return FUNC_1(VAR_7, &VAR_6->intval);
 case 128:
  return FUNC_4(VAR_7, &VAR_6->intval);
 case 130:
  return FUNC_2(VAR_7, &VAR_6->intval);
 case 129:
  return FUNC_3(VAR_7, &VAR_6->intval);
 default:
  return -VAR_0;
 }
}
