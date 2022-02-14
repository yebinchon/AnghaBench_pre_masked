
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {TYPE_1__* desc; int use_cnt; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int (* property_is_writeable ) (struct power_supply*,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct power_supply*,int) ;

int FUNC_2(struct power_supply *VAR_1,
     enum power_supply_property VAR_2)
{
 if (FUNC_0(&VAR_1->use_cnt) <= 0 ||
   !VAR_1->desc->property_is_writeable)
  return -VAR_0;

 return VAR_1->desc->property_is_writeable(VAR_1, VAR_2);
}
