
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mwifiex_private {TYPE_1__* adapter; } ;
struct mwifiex_ds_11n_tx_cfg {scalar_t__ misc_config; scalar_t__ tx_htinfo; scalar_t__ tx_htcap; } ;
struct host_cmd_ds_11n_cfg {void* misc_config; void* ht_tx_info; void* ht_tx_cap; void* action; } ;
struct TYPE_4__ {struct host_cmd_ds_11n_cfg htcfg; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_2__ params; } ;
struct TYPE_3__ {scalar_t__ is_hw_11ac_capable; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

int FUNC_1(struct mwifiex_private *VAR_2,
   struct host_cmd_ds_command *VAR_3, u16 VAR_4,
   struct mwifiex_ds_11n_tx_cfg *VAR_5)
{
 struct host_cmd_ds_11n_cfg *VAR_6 = &VAR_3->params.htcfg;

 VAR_3->command = FUNC_0(VAR_0);
 VAR_3->size = FUNC_0(sizeof(struct host_cmd_ds_11n_cfg) + VAR_1);
 VAR_6->action = FUNC_0(VAR_4);
 VAR_6->ht_tx_cap = FUNC_0(VAR_5->tx_htcap);
 VAR_6->ht_tx_info = FUNC_0(VAR_5->tx_htinfo);

 if (VAR_2->adapter->is_hw_11ac_capable)
  VAR_6->misc_config = FUNC_0(VAR_5->misc_config);

 return 0;
}
