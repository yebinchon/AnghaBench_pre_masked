
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm_tid_data {scalar_t__ state; scalar_t__ tx_count; scalar_t__ tx_count_last; scalar_t__ tpt_meas_start; } ;
struct iwl_mvm_sta {struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct iwl_mvm *VAR_5,
        struct iwl_mvm_sta *VAR_6,
        u8 VAR_7, int VAR_8)
{
 struct iwl_mvm_tid_data *VAR_9;

 if (VAR_7 >= VAR_2)
  return;

 VAR_9 = &VAR_6->tid_data[VAR_7];







 if (VAR_9->state != VAR_1)
  return;

 if (FUNC_0(VAR_9->tpt_meas_start + VAR_0) ||
     (VAR_9->tx_count >= VAR_3)) {
  VAR_9->tx_count_last = VAR_9->tx_count;
  VAR_9->tx_count = 0;
  VAR_9->tpt_meas_start = VAR_4;
 } else {
  VAR_9->tx_count += VAR_8;
 }
}
