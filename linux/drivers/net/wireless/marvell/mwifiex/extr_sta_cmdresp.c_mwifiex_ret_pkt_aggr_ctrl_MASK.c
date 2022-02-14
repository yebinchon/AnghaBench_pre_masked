
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct TYPE_3__ {void* tx_aggr_align; void* tx_aggr_max_num; void* tx_aggr_max_size; int mode; void* enable; } ;
struct mwifiex_adapter {TYPE_1__ bus_aggr; int intf_hdr_len; } ;
struct host_cmd_ds_pkt_aggr_ctrl {int tx_aggr_align; int tx_aggr_max_num; int tx_aggr_max_size; int enable; } ;
struct TYPE_4__ {struct host_cmd_ds_pkt_aggr_ctrl pkt_aggr_ctrl; } ;
struct host_cmd_ds_command {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_2,
         struct host_cmd_ds_command *VAR_3)
{
 struct host_cmd_ds_pkt_aggr_ctrl *VAR_4 =
     &VAR_3->params.pkt_aggr_ctrl;
 struct mwifiex_adapter *VAR_5 = VAR_2->adapter;

 VAR_5->bus_aggr.enable = FUNC_0(VAR_4->enable);
 if (VAR_5->bus_aggr.enable)
  VAR_5->intf_hdr_len = VAR_0;
 VAR_5->bus_aggr.mode = VAR_1;
 VAR_5->bus_aggr.tx_aggr_max_size =
    FUNC_0(VAR_4->tx_aggr_max_size);
 VAR_5->bus_aggr.tx_aggr_max_num =
    FUNC_0(VAR_4->tx_aggr_max_num);
 VAR_5->bus_aggr.tx_aggr_align =
    FUNC_0(VAR_4->tx_aggr_align);

 return 0;
}
