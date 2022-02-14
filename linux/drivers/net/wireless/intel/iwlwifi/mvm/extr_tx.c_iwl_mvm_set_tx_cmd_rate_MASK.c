
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_tx_cmd {int rate_n_flags; int tx_flags; scalar_t__ initial_rate_index; int data_retry_limit; int rts_retry_limit; } ;
struct iwl_mvm_sta {scalar_t__ sta_state; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_tx_info*,struct ieee80211_sta*,int ) ;
 struct iwl_mvm_sta* FUNC_5 (struct ieee80211_sta*) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(struct iwl_mvm *VAR_8, struct iwl_tx_cmd *VAR_9,
       struct ieee80211_tx_info *VAR_10,
       struct ieee80211_sta *VAR_11, __le16 VAR_12)
{

 VAR_9->rts_retry_limit = VAR_4;


 if (FUNC_3(VAR_12)) {
  VAR_9->data_retry_limit = VAR_3;
  VAR_9->rts_retry_limit =
   FUNC_6(VAR_9->data_retry_limit, VAR_9->rts_retry_limit);
 } else if (FUNC_1(VAR_12)) {
  VAR_9->data_retry_limit = VAR_1;
 } else {
  VAR_9->data_retry_limit = VAR_2;
 }






 if (FUNC_2(VAR_12) && VAR_11) {
  struct iwl_mvm_sta *VAR_13 = FUNC_5(VAR_11);

  if (VAR_13->sta_state >= VAR_0) {
   VAR_9->initial_rate_index = 0;
   VAR_9->tx_flags |= FUNC_0(VAR_7);
   return;
  }
 } else if (FUNC_1(VAR_12)) {
  VAR_9->tx_flags |=
   FUNC_0(VAR_5 | VAR_6);
 }


 VAR_9->rate_n_flags =
  FUNC_0(FUNC_4(VAR_8, VAR_10, VAR_11, VAR_12));
}
