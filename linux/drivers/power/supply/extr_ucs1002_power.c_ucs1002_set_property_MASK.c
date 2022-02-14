
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct ucs1002_info {int dummy; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;


 struct ucs1002_info* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct ucs1002_info*,int ) ;
 int FUNC_2 (struct ucs1002_info*,int ) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_1,
    enum power_supply_property VAR_2,
    const union power_supply_propval *VAR_3)
{
 struct ucs1002_info *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 129:
  return FUNC_1(VAR_4, VAR_3->intval);
 case 128:
  return FUNC_2(VAR_4, VAR_3->intval);
 default:
  return -VAR_0;
 }
}
