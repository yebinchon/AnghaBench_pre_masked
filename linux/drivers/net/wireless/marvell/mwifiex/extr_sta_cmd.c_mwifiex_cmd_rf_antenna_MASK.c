
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mwifiex_private {TYPE_2__* adapter; } ;
struct mwifiex_ds_ant_cfg {int tx_ant; int rx_ant; } ;
struct host_cmd_ds_rf_ant_siso {void* action; void* ant_mode; } ;
struct host_cmd_ds_rf_ant_mimo {void* action_rx; void* action_tx; void* rx_ant_mode; void* tx_ant_mode; } ;
struct TYPE_3__ {struct host_cmd_ds_rf_ant_siso ant_siso; struct host_cmd_ds_rf_ant_mimo ant_mimo; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;
struct TYPE_4__ {int hw_dev_mcs_support; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_9,
      struct host_cmd_ds_command *VAR_10,
      u16 VAR_11,
      struct mwifiex_ds_ant_cfg *VAR_12)
{
 struct host_cmd_ds_rf_ant_mimo *VAR_13 = &VAR_10->params.ant_mimo;
 struct host_cmd_ds_rf_ant_siso *VAR_14 = &VAR_10->params.ant_siso;

 VAR_10->command = FUNC_0(VAR_7);

 switch (VAR_11) {
 case 128:
  if (VAR_9->adapter->hw_dev_mcs_support == VAR_0) {
   VAR_10->size = FUNC_0(sizeof(struct
      host_cmd_ds_rf_ant_mimo)
      + VAR_8);
   VAR_13->action_tx = FUNC_0(VAR_6);
   VAR_13->tx_ant_mode = FUNC_0((u16)VAR_12->
           tx_ant);
   VAR_13->action_rx = FUNC_0(VAR_5);
   VAR_13->rx_ant_mode = FUNC_0((u16)VAR_12->
           rx_ant);
  } else {
   VAR_10->size = FUNC_0(sizeof(struct
      host_cmd_ds_rf_ant_siso) +
      VAR_8);
   VAR_14->action = FUNC_0(VAR_4);
   VAR_14->ant_mode = FUNC_0((u16)VAR_12->tx_ant);
  }
  break;
 case 129:
  if (VAR_9->adapter->hw_dev_mcs_support == VAR_0) {
   VAR_10->size = FUNC_0(sizeof(struct
      host_cmd_ds_rf_ant_mimo) +
      VAR_8);
   VAR_13->action_tx = FUNC_0(VAR_3);
   VAR_13->action_rx = FUNC_0(VAR_2);
  } else {
   VAR_10->size = FUNC_0(sizeof(struct
      host_cmd_ds_rf_ant_siso) +
      VAR_8);
   VAR_14->action = FUNC_0(VAR_1);
  }
  break;
 }
 return 0;
}
