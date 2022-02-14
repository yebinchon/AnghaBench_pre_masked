
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply_prop {int prop; } ;
struct gb_power_supply {int properties_count; struct gb_power_supply_prop* props; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;



__attribute__((used)) static struct gb_power_supply_prop *FUNC_0(struct gb_power_supply *VAR_0,
       enum power_supply_property VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->properties_count; VAR_2++)
  if (VAR_0->props[VAR_2].prop == VAR_1)
   return &VAR_0->props[VAR_2];
 return ((void*)0);
}
