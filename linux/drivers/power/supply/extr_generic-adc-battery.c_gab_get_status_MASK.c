
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_info {scalar_t__ charge_full_design; } ;
struct gab_platform_data {struct power_supply_info battery_info; } ;
struct gab {scalar_t__ level; int status; struct gab_platform_data* pdata; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct gab *VAR_1)
{
 struct gab_platform_data *VAR_2 = VAR_1->pdata;
 struct power_supply_info *VAR_3;

 VAR_3 = &VAR_2->battery_info;
 if (VAR_1->level == VAR_3->charge_full_design)
  return VAR_0;
 return VAR_1->status;
}
