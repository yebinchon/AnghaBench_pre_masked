
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_txq {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k_txq {scalar_t__ num_fw_queued; scalar_t__ num_push_allowed; } ;
struct TYPE_3__ {scalar_t__ mode; scalar_t__ num_push_allowed; } ;
struct TYPE_4__ {scalar_t__ num_pending_tx; TYPE_1__ tx_q_state; } ;
struct ath10k {TYPE_2__ htt; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ieee80211_hw *VAR_1,
       struct ieee80211_txq *VAR_2)
{
 struct ath10k *VAR_3 = VAR_1->priv;
 struct ath10k_txq *VAR_4 = (void *)VAR_2->drv_priv;


 if (VAR_3->htt.tx_q_state.mode == VAR_0)
  return 1;

 if (VAR_3->htt.num_pending_tx < VAR_3->htt.tx_q_state.num_push_allowed)
  return 1;

 if (VAR_4->num_fw_queued < VAR_4->num_push_allowed)
  return 1;

 return 0;
}
