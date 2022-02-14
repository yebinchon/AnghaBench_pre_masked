
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct TYPE_4__ {int num_pending_tx; int max_num_pending_tx; TYPE_1__ tx_q_state; } ;
struct ath10k {TYPE_2__ htt; struct ieee80211_hw* hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_hw*,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct ath10k *VAR_3)
{
 struct ieee80211_hw *VAR_4 = VAR_3->hw;
 u32 VAR_5;

 if (VAR_3->htt.tx_q_state.mode != VAR_1)
  return;

 if (VAR_3->htt.num_pending_tx >= (VAR_3->htt.max_num_pending_tx / 2))
  return;

 FUNC_1();
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (FUNC_0(VAR_4, VAR_5) == -VAR_0)
   break;
 }
 FUNC_2();
}
