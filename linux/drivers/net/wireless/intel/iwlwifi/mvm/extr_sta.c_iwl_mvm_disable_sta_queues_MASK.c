
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm_txq {scalar_t__ txq_id; } ;
struct iwl_mvm_sta {TYPE_1__* tid_data; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {TYPE_1__* txq; } ;
struct TYPE_3__ {scalar_t__ txq_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_sta*,scalar_t__,int,int ) ;
 struct iwl_mvm_sta* FUNC_2 (struct ieee80211_sta*) ;
 struct iwl_mvm_txq* FUNC_3 (TYPE_1__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_1,
           struct ieee80211_vif *VAR_2,
           struct ieee80211_sta *VAR_3)
{
 struct iwl_mvm_sta *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 FUNC_4(&VAR_1->mutex);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->tid_data); VAR_5++) {
  if (VAR_4->tid_data[VAR_5].txq_id == VAR_0)
   continue;

  FUNC_1(VAR_1, VAR_3, VAR_4->tid_data[VAR_5].txq_id, VAR_5,
        0);
  VAR_4->tid_data[VAR_5].txq_id = VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->txq); VAR_5++) {
  struct iwl_mvm_txq *VAR_6 =
   FUNC_3(VAR_3->txq[VAR_5]);

  VAR_6->txq_id = VAR_0;
 }
}
