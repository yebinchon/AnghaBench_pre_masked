
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mwifiex_private {int min_tx_power_level; int max_tx_power_level; void* tx_power_level; int adapter; } ;
struct host_cmd_ds_rf_tx_pwr {int min_power; int max_power; int cur_level; int action; } ;
struct TYPE_2__ {struct host_cmd_ds_rf_tx_pwr txp; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,void*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_2,
       struct host_cmd_ds_command *VAR_3)
{
 struct host_cmd_ds_rf_tx_pwr *VAR_4 = &VAR_3->params.txp;
 u16 VAR_5 = FUNC_0(VAR_4->action);

 VAR_2->tx_power_level = FUNC_0(VAR_4->cur_level);

 if (VAR_5 == VAR_0) {
  VAR_2->max_tx_power_level = VAR_4->max_power;
  VAR_2->min_tx_power_level = VAR_4->min_power;
 }

 FUNC_1(VAR_2->adapter, VAR_1,
      "Current TxPower Level=%d, Max Power=%d, Min Power=%d\n",
      VAR_2->tx_power_level, VAR_2->max_tx_power_level,
      VAR_2->min_tx_power_level);

 return 0;
}
