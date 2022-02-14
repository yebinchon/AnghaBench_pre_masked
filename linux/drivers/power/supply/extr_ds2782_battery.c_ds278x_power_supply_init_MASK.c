
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_desc {int * external_power_changed; int get_property; int num_properties; int properties; int type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct power_supply_desc *VAR_3)
{
 VAR_3->type = VAR_0;
 VAR_3->properties = VAR_2;
 VAR_3->num_properties = FUNC_0(VAR_2);
 VAR_3->get_property = VAR_1;
 VAR_3->external_power_changed = ((void*)0);
}
