
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {int ucode_trace; int statistics_periodic; int bt_runtime_config; int bt_full_concurrency; int beacon_update; int run_time_calib_work; TYPE_1__* lib; } ;
struct TYPE_2__ {scalar_t__ bt_params; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*) ;

void FUNC_4(struct iwl_priv *VAR_0)
{
 if (VAR_0->lib->bt_params)
  FUNC_3(VAR_0);

 FUNC_0(&VAR_0->run_time_calib_work);
 FUNC_0(&VAR_0->beacon_update);

 FUNC_2(VAR_0);

 FUNC_0(&VAR_0->bt_full_concurrency);
 FUNC_0(&VAR_0->bt_runtime_config);

 FUNC_1(&VAR_0->statistics_periodic);
 FUNC_1(&VAR_0->ucode_trace);
}
