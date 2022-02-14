
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply {int* props_raw; int properties_count_str; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int* FUNC_0 (int*,int,int ) ;
 int FUNC_1 (struct gb_power_supply*) ;

__attribute__((used)) static void FUNC_2(struct gb_power_supply *VAR_1,
   enum power_supply_property VAR_2)
{
 enum power_supply_property *VAR_3;

 VAR_1->properties_count_str++;
 VAR_3 = FUNC_0(VAR_1->props_raw, FUNC_1(VAR_1) *
     sizeof(enum power_supply_property),
     VAR_0);
 if (!VAR_3)
  return;
 VAR_1->props_raw = VAR_3;
 VAR_1->props_raw[FUNC_1(VAR_1) - 1] = VAR_2;
}
