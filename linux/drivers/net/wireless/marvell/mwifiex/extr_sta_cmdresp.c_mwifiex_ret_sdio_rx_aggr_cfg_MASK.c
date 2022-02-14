
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int sdio_rx_block_size; int sdio_rx_aggr_enable; } ;
struct host_cmd_sdio_sp_rx_aggr_cfg {int block_size; int enable; } ;
struct TYPE_2__ {struct host_cmd_sdio_sp_rx_aggr_cfg sdio_rx_aggr_cfg; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_0,
     struct host_cmd_ds_command *VAR_1)
{
 struct mwifiex_adapter *VAR_2 = VAR_0->adapter;
 struct host_cmd_sdio_sp_rx_aggr_cfg *VAR_3 =
    &VAR_1->params.sdio_rx_aggr_cfg;

 VAR_2->sdio_rx_aggr_enable = VAR_3->enable;
 VAR_2->sdio_rx_block_size = FUNC_0(VAR_3->block_size);

 return 0;
}
