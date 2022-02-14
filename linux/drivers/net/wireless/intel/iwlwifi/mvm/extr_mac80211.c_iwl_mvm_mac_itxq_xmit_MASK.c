
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_mvm_txq {int stopped; int tx_request; } ;
struct iwl_mvm {TYPE_1__* trans; } ;
struct ieee80211_txq {TYPE_2__* sta; int tid; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {scalar_t__ system_pm_mode; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int ,int ) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 struct sk_buff* FUNC_4 (struct ieee80211_hw*,struct ieee80211_txq*) ;
 int FUNC_5 (struct iwl_mvm*,struct sk_buff*,TYPE_2__*) ;
 int FUNC_6 (struct iwl_mvm*,struct sk_buff*) ;
 struct iwl_mvm_txq* FUNC_7 (struct ieee80211_txq*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(struct ieee80211_hw *VAR_1, struct ieee80211_txq *VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_1(VAR_1);
 struct iwl_mvm_txq *VAR_4 = FUNC_7(VAR_2);
 struct sk_buff *VAR_5 = ((void*)0);
 if (FUNC_3(&VAR_4->tx_request, 1, 2))
  return;

 FUNC_9();
 do {
  while (FUNC_8(!VAR_4->stopped &&
         (VAR_3->trans->system_pm_mode ==
          VAR_0))) {
   VAR_5 = FUNC_4(VAR_1, VAR_2);

   if (!VAR_5) {
    if (VAR_2->sta)
     FUNC_0(VAR_3,
           "TXQ of sta %pM tid %d is now empty\n",
           VAR_2->sta->addr,
           VAR_2->tid);
    break;
   }

   if (!VAR_2->sta)
    FUNC_6(VAR_3, VAR_5);
   else
    FUNC_5(VAR_3, VAR_5, VAR_2->sta);
  }
 } while (FUNC_2(&VAR_4->tx_request));
 FUNC_10();
}
