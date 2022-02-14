
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_txq {scalar_t__ txq_id; int list; } ;
struct iwl_mvm {int add_stream_wk; int add_stream_txqs; } ;
struct ieee80211_txq {scalar_t__ sta; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_txq*) ;
 struct iwl_mvm_txq* FUNC_2 (struct ieee80211_txq*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_1,
          struct ieee80211_txq *VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_0(VAR_1);
 struct iwl_mvm_txq *VAR_4 = FUNC_2(VAR_2);
 if (!VAR_2->sta || VAR_4->txq_id != VAR_0) {





  if (FUNC_6(VAR_2->sta && !FUNC_4(&VAR_4->list)))
   return;

  FUNC_1(VAR_1, VAR_2);
  return;
 }


 if (!FUNC_4(&VAR_4->list))
  return;

 FUNC_3(&VAR_4->list, &VAR_3->add_stream_txqs);
 FUNC_5(&VAR_3->add_stream_wk);
}
