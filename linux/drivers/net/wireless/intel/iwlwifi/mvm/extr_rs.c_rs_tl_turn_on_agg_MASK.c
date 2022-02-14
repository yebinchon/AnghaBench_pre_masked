
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm_tid_data {scalar_t__ state; scalar_t__ tx_count_last; } ;
struct iwl_mvm_sta {scalar_t__ sta_state; struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int tx_agg_tid_en; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct iwl_mvm*,char*,size_t) ;
 int FUNC_2 (struct iwl_mvm*,char*,size_t,size_t) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*,struct iwl_lq_sta*,size_t,struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_5, struct iwl_mvm_sta *VAR_6,
         u8 VAR_7, struct iwl_lq_sta *VAR_8,
         struct ieee80211_sta *VAR_9)
{
 struct iwl_mvm_tid_data *VAR_10;





 if (FUNC_3(VAR_7 > VAR_3)) {
  FUNC_2(VAR_5, "tid exceeds max TID count: %d/%d\n",
   VAR_7, VAR_3);
  return;
 } else if (VAR_7 == VAR_3) {
  return;
 }

 VAR_10 = &VAR_6->tid_data[VAR_7];
 if (VAR_6->sta_state >= VAR_0 &&
     VAR_10->state == VAR_1 &&
     (VAR_8->tx_agg_tid_en & FUNC_0(VAR_7)) &&
     VAR_10->tx_count_last >= VAR_4) {
  FUNC_1(VAR_5, "try to aggregate tid %d\n", VAR_7);
  if (FUNC_4(VAR_5, VAR_8, VAR_7, VAR_9) == 0)
   VAR_10->state = VAR_2;
 }
}
