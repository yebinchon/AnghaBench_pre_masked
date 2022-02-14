
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct gb_power_supply_prop {int val; } ;
struct gb_power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 struct gb_power_supply_prop* FUNC_0 (struct gb_power_supply*,int) ;

__attribute__((used)) static int FUNC_1(struct gb_power_supply *VAR_1,
       enum power_supply_property VAR_2,
       union power_supply_propval *VAR_3)
{
 struct gb_power_supply_prop *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->intval = VAR_4->val;
 return 0;
}
