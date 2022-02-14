
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {TYPE_1__* desc; int use_cnt; } ;
struct TYPE_2__ {int (* external_power_changed ) (struct power_supply*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct power_supply*) ;

void FUNC_2(struct power_supply *VAR_0)
{
 if (FUNC_0(&VAR_0->use_cnt) <= 0 ||
   !VAR_0->desc->external_power_changed)
  return;

 VAR_0->desc->external_power_changed(VAR_0);
}
