
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_scan_config_v1 {int channel_array; int channel_flags; int bcast_sta_id; int mac_addr; int dwell; void* suspend_time; void* out_of_channel_time; int legacy_rates; void* rx_chains; void* tx_chains; void* flags; } ;
struct TYPE_5__ {int sta_id; } ;
struct iwl_mvm {TYPE_2__ aux_sta; TYPE_1__* addresses; } ;
typedef enum iwl_mvm_scan_type { ____Placeholder_iwl_mvm_scan_type } iwl_mvm_scan_type ;
struct TYPE_6__ {int suspend_time; int max_out_time; } ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*,int ,int ) ;
 int FUNC_2 (struct iwl_mvm*,int *) ;
 int FUNC_3 (struct iwl_mvm*,int *) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (int *,int *,int ) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_8(struct iwl_mvm *VAR_2, void *VAR_3,
     u32 VAR_4, u8 VAR_5,
     u32 VAR_6)
{
 enum iwl_mvm_scan_type VAR_7 = FUNC_3(VAR_2, ((void*)0));
 struct iwl_scan_config_v1 *VAR_8 = VAR_3;

 VAR_8->flags = FUNC_0(VAR_4);
 VAR_8->tx_chains = FUNC_0(FUNC_4(VAR_2));
 VAR_8->rx_chains = FUNC_0(FUNC_6(VAR_2));
 VAR_8->legacy_rates = FUNC_5(VAR_2);
 VAR_8->out_of_channel_time = FUNC_0(VAR_1[VAR_7].max_out_time);
 VAR_8->suspend_time = FUNC_0(VAR_1[VAR_7].suspend_time);

 FUNC_2(VAR_2, &VAR_8->dwell);

 FUNC_7(&VAR_8->mac_addr, &VAR_2->addresses[0].addr, VAR_0);

 VAR_8->bcast_sta_id = VAR_2->aux_sta.sta_id;
 VAR_8->channel_flags = VAR_5;

 FUNC_1(VAR_2, VAR_8->channel_array, VAR_6);
}
