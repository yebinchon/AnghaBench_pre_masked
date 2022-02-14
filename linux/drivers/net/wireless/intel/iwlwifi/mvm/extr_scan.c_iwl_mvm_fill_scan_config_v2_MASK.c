
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_scan_config_v2 {int channel_array; int channel_flags; int bcast_sta_id; int mac_addr; int dwell; void** suspend_time; void** out_of_channel_time; int legacy_rates; void* rx_chains; void* tx_chains; void* flags; } ;
struct TYPE_5__ {int sta_id; } ;
struct iwl_mvm {TYPE_2__ aux_sta; TYPE_1__* addresses; } ;
typedef enum iwl_mvm_scan_type { ____Placeholder_iwl_mvm_scan_type } iwl_mvm_scan_type ;
struct TYPE_6__ {int suspend_time; int max_out_time; } ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*,int ,int ) ;
 int FUNC_2 (struct iwl_mvm*,int *) ;
 int FUNC_3 (struct iwl_mvm*,int *) ;
 int FUNC_4 (struct iwl_mvm*,int *,int ) ;
 int FUNC_5 (struct iwl_mvm*) ;
 scalar_t__ FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (int *,int *,int ) ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static void FUNC_10(struct iwl_mvm *VAR_6, void *VAR_7,
     u32 VAR_8, u8 VAR_9,
     u32 VAR_10)
{
 struct iwl_scan_config_v2 *VAR_11 = VAR_7;

 VAR_11->flags = FUNC_0(VAR_8);
 VAR_11->tx_chains = FUNC_0(FUNC_5(VAR_6));
 VAR_11->rx_chains = FUNC_0(FUNC_8(VAR_6));
 VAR_11->legacy_rates = FUNC_7(VAR_6);

 if (FUNC_6(VAR_6)) {
  enum iwl_mvm_scan_type VAR_12, VAR_13;

  VAR_12 = FUNC_4(VAR_6, ((void*)0),
           VAR_1);
  VAR_13 = FUNC_4(VAR_6, ((void*)0),
           VAR_2);

  VAR_11->out_of_channel_time[VAR_4] =
   FUNC_0(VAR_5[VAR_12].max_out_time);
  VAR_11->suspend_time[VAR_4] =
   FUNC_0(VAR_5[VAR_12].suspend_time);

  VAR_11->out_of_channel_time[VAR_3] =
   FUNC_0(VAR_5[VAR_13].max_out_time);
  VAR_11->suspend_time[VAR_3] =
   FUNC_0(VAR_5[VAR_13].suspend_time);
 } else {
  enum iwl_mvm_scan_type VAR_14 =
   FUNC_3(VAR_6, ((void*)0));

  VAR_11->out_of_channel_time[VAR_4] =
   FUNC_0(VAR_5[VAR_14].max_out_time);
  VAR_11->suspend_time[VAR_4] =
   FUNC_0(VAR_5[VAR_14].suspend_time);
 }

 FUNC_2(VAR_6, &VAR_11->dwell);

 FUNC_9(&VAR_11->mac_addr, &VAR_6->addresses[0].addr, VAR_0);

 VAR_11->bcast_sta_id = VAR_6->aux_sta.sta_id;
 VAR_11->channel_flags = VAR_9;

 FUNC_1(VAR_6, VAR_11->channel_array, VAR_10);
}
