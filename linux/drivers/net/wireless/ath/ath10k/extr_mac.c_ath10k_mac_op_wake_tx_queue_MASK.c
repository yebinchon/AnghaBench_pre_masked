
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_txq {int ac; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct TYPE_4__ {TYPE_1__ tx_q_state; } ;
struct ath10k {TYPE_2__ htt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,struct ieee80211_txq*) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,struct ieee80211_txq*) ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_txq*) ;
 struct ieee80211_txq* FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_txq*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int FUNC_6 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_1,
     struct ieee80211_txq *VAR_2)
{
 struct ath10k *VAR_3 = VAR_1->priv;
 int VAR_4;
 u8 VAR_5;

 FUNC_0(VAR_1, VAR_2);
 if (VAR_3->htt.tx_q_state.mode != VAR_0)
  return;

 VAR_5 = VAR_2->ac;
 FUNC_6(VAR_1, VAR_5);
 VAR_2 = FUNC_3(VAR_1, VAR_5);
 if (!VAR_2)
  goto out;

 while (FUNC_1(VAR_1, VAR_2)) {
  VAR_4 = FUNC_2(VAR_1, VAR_2);
  if (VAR_4 < 0)
   break;
 }
 FUNC_4(VAR_1, VAR_2, 0);
 FUNC_0(VAR_1, VAR_2);
out:
 FUNC_5(VAR_1, VAR_5);
}
