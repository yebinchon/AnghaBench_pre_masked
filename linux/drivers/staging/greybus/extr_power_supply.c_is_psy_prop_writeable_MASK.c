
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply_prop {scalar_t__ is_writeable; } ;
struct gb_power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 struct gb_power_supply_prop* FUNC_0 (struct gb_power_supply*,int) ;

__attribute__((used)) static int FUNC_1(struct gb_power_supply *VAR_1,
         enum power_supply_property VAR_2)
{
 struct gb_power_supply_prop *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;
 return VAR_3->is_writeable ? 1 : 0;
}
