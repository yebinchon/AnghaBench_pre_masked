
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union power_supply_propval {int dummy; } power_supply_propval ;
struct power_supply {TYPE_1__* desc; int initialized; int use_cnt; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int (* get_property ) (struct power_supply*,int,union power_supply_propval*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct power_supply*,int,union power_supply_propval*) ;

int FUNC_2(struct power_supply *VAR_2,
       enum power_supply_property VAR_3,
       union power_supply_propval *VAR_4)
{
 if (FUNC_0(&VAR_2->use_cnt) <= 0) {
  if (!VAR_2->initialized)
   return -VAR_0;
  return -VAR_1;
 }

 return VAR_2->desc->get_property(VAR_2, VAR_3, VAR_4);
}
