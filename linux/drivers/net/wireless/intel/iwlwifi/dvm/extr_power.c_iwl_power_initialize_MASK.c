
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int debug_sleep_level_override; int sleep_cmd; int bus_pm; } ;
struct iwl_priv {TYPE_2__ power_data; TYPE_1__* trans; } ;
struct TYPE_3__ {int pm_support; } ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct iwl_priv *VAR_0)
{
 VAR_0->power_data.bus_pm = VAR_0->trans->pm_support;

 VAR_0->power_data.debug_sleep_level_override = -1;

 FUNC_0(&VAR_0->power_data.sleep_cmd, 0,
  sizeof(VAR_0->power_data.sleep_cmd));
}
