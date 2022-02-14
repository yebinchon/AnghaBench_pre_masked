
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {int ucode_trace; int statistics_periodic; TYPE_1__* lib; int bt_runtime_config; int bt_full_concurrency; int tx_flush; int run_time_calib_work; int beacon_update; int restart; int workqueue; } ;
struct TYPE_2__ {scalar_t__ bt_params; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct iwl_priv *VAR_9)
{
 VAR_9->workqueue = FUNC_1(VAR_0, 0);

 FUNC_0(&VAR_9->restart, VAR_4);
 FUNC_0(&VAR_9->beacon_update, VAR_1);
 FUNC_0(&VAR_9->run_time_calib_work, VAR_5);
 FUNC_0(&VAR_9->tx_flush, VAR_7);
 FUNC_0(&VAR_9->bt_full_concurrency, VAR_2);
 FUNC_0(&VAR_9->bt_runtime_config, VAR_3);

 FUNC_2(VAR_9);

 if (VAR_9->lib->bt_params)
  FUNC_3(VAR_9);

 FUNC_4(&VAR_9->statistics_periodic, VAR_6, 0);

 FUNC_4(&VAR_9->ucode_trace, VAR_8, 0);
}
