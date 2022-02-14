
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_11ac_vht_cfg {int mcs_rx_set; int mcs_tx_set; int cap_info; int misc_config; int band_config; } ;
struct host_cmd_11ac_vht_cfg {void* mcs_rx_set; void* mcs_tx_set; void* cap_info; int misc_config; int band_config; void* action; } ;
struct TYPE_2__ {struct host_cmd_11ac_vht_cfg vht_cfg; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;

int FUNC_2(struct mwifiex_private *VAR_2,
    struct host_cmd_ds_command *VAR_3, u16 VAR_4,
    struct mwifiex_11ac_vht_cfg *VAR_5)
{
 struct host_cmd_11ac_vht_cfg *VAR_6 = &VAR_3->params.vht_cfg;

 VAR_3->command = FUNC_0(VAR_0);
 VAR_3->size = FUNC_0(sizeof(struct host_cmd_11ac_vht_cfg) +
    VAR_1);
 VAR_6->action = FUNC_0(VAR_4);
 VAR_6->band_config = VAR_5->band_config;
 VAR_6->misc_config = VAR_5->misc_config;
 VAR_6->cap_info = FUNC_1(VAR_5->cap_info);
 VAR_6->mcs_tx_set = FUNC_1(VAR_5->mcs_tx_set);
 VAR_6->mcs_rx_set = FUNC_1(VAR_5->mcs_rx_set);

 return 0;
}
