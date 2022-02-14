
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_opp_supply_data {scalar_t__ num_vdd_table; int * vdd_table; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
         struct ti_opp_supply_data *VAR_1)
{
 FUNC_0(VAR_1->vdd_table);
 VAR_1->vdd_table = ((void*)0);
 VAR_1->num_vdd_table = 0;
}
