
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_scan_req_lmac {void* scan_prio; void* suspend_time; void* max_out_time; int extended_dwell; int fragmented_dwell; int passive_dwell; int active_dwell; } ;
struct iwl_mvm_scan_params {size_t type; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {int suspend_time; int max_out_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_1(struct iwl_mvm *VAR_6,
        struct iwl_scan_req_lmac *VAR_7,
        struct iwl_mvm_scan_params *VAR_8)
{
 VAR_7->active_dwell = VAR_0;
 VAR_7->passive_dwell = VAR_3;
 VAR_7->fragmented_dwell = VAR_2;
 VAR_7->extended_dwell = VAR_1;
 VAR_7->max_out_time = FUNC_0(VAR_5[VAR_8->type].max_out_time);
 VAR_7->suspend_time = FUNC_0(VAR_5[VAR_8->type].suspend_time);
 VAR_7->scan_prio = FUNC_0(VAR_4);
}
