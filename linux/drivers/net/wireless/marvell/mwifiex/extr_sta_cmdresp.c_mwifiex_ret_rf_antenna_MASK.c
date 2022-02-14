
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {void* rx_ant; void* tx_ant; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {scalar_t__ hw_dev_mcs_support; } ;
struct host_cmd_ds_rf_ant_siso {int ant_mode; int action; } ;
struct host_cmd_ds_rf_ant_mimo {int rx_ant_mode; int action_rx; int tx_ant_mode; int action_tx; } ;
struct TYPE_2__ {struct host_cmd_ds_rf_ant_siso ant_siso; struct host_cmd_ds_rf_ant_mimo ant_mimo; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,void*,void*,...) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_2,
      struct host_cmd_ds_command *VAR_3)
{
 struct host_cmd_ds_rf_ant_mimo *VAR_4 = &VAR_3->params.ant_mimo;
 struct host_cmd_ds_rf_ant_siso *VAR_5 = &VAR_3->params.ant_siso;
 struct mwifiex_adapter *VAR_6 = VAR_2->adapter;

 if (VAR_6->hw_dev_mcs_support == VAR_0) {
  VAR_2->tx_ant = FUNC_0(VAR_4->tx_ant_mode);
  VAR_2->rx_ant = FUNC_0(VAR_4->rx_ant_mode);
  FUNC_1(VAR_6, VAR_1,
       "RF_ANT_RESP: Tx action = 0x%x, Tx Mode = 0x%04x\t"
       "Rx action = 0x%x, Rx Mode = 0x%04x\n",
       FUNC_0(VAR_4->action_tx),
       FUNC_0(VAR_4->tx_ant_mode),
       FUNC_0(VAR_4->action_rx),
       FUNC_0(VAR_4->rx_ant_mode));
 } else {
  VAR_2->tx_ant = FUNC_0(VAR_5->ant_mode);
  VAR_2->rx_ant = FUNC_0(VAR_5->ant_mode);
  FUNC_1(VAR_6, VAR_1,
       "RF_ANT_RESP: action = 0x%x, Mode = 0x%04x\n",
       FUNC_0(VAR_5->action),
       FUNC_0(VAR_5->ant_mode));
 }
 return 0;
}
