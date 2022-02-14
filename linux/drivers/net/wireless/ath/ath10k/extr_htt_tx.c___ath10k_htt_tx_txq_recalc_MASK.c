
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_txq {size_t tid; TYPE_2__* sta; TYPE_1__* vif; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k_vif {int peer_id; } ;
struct ath10k_sta {int peer_id; } ;
struct TYPE_9__ {scalar_t__ mode; int num_peers; size_t num_tids; TYPE_3__* vaddr; int enabled; } ;
struct TYPE_10__ {TYPE_4__ tx_q_state; int tx_lock; } ;
struct ath10k {TYPE_5__ htt; } ;
struct TYPE_8__ {size_t** count; int ** map; } ;
struct TYPE_7__ {scalar_t__ drv_priv; } ;
struct TYPE_6__ {scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ath10k*,int ,char*,int,size_t,size_t) ;
 size_t FUNC_2 (unsigned long) ;
 int FUNC_3 (struct ath10k*,char*,int,size_t) ;
 int FUNC_4 (struct ieee80211_txq*,unsigned long*,unsigned long*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_2,
           struct ieee80211_txq *VAR_3)
{
 struct ath10k *VAR_4 = VAR_2->priv;
 struct ath10k_sta *VAR_5;
 struct ath10k_vif *VAR_6 = (void *)VAR_3->vif->drv_priv;
 unsigned long VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 u32 VAR_10;
 u16 VAR_11;
 u8 VAR_12;
 u8 VAR_13;

 FUNC_5(&VAR_4->htt.tx_lock);

 if (!VAR_4->htt.tx_q_state.enabled)
  return;

 if (VAR_4->htt.tx_q_state.mode != VAR_1)
  return;

 if (VAR_3->sta) {
  VAR_5 = (void *)VAR_3->sta->drv_priv;
  VAR_11 = VAR_5->peer_id;
 } else {
  VAR_11 = VAR_6->peer_id;
 }

 VAR_12 = VAR_3->tid;
 VAR_10 = FUNC_0(VAR_11 % 32);
 VAR_9 = VAR_11 / 32;

 FUNC_4(VAR_3, &VAR_7, &VAR_8);
 VAR_13 = FUNC_2(VAR_8);

 if (FUNC_6(VAR_11 >= VAR_4->htt.tx_q_state.num_peers) ||
     FUNC_6(VAR_12 >= VAR_4->htt.tx_q_state.num_tids)) {
  FUNC_3(VAR_4, "refusing to update txq for peer_id %hu tid %hhu due to out of bounds\n",
       VAR_11, VAR_12);
  return;
 }

 VAR_4->htt.tx_q_state.vaddr->count[VAR_12][VAR_11] = VAR_13;
 VAR_4->htt.tx_q_state.vaddr->map[VAR_12][VAR_9] &= ~VAR_10;
 VAR_4->htt.tx_q_state.vaddr->map[VAR_12][VAR_9] |= VAR_13 ? VAR_10 : 0;

 FUNC_1(VAR_4, VAR_0, "htt tx txq state update peer_id %hu tid %hhu count %hhu\n",
     VAR_11, VAR_12, VAR_13);
}
