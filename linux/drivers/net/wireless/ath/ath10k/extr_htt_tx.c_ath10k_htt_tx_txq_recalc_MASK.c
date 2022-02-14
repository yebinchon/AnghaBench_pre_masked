
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_txq {int dummy; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_2__ {int tx_lock; } ;
struct ath10k {TYPE_1__ htt; } ;


 int FUNC_0 (struct ieee80211_hw*,struct ieee80211_txq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ieee80211_hw *VAR_0,
         struct ieee80211_txq *VAR_1)
{
 struct ath10k *VAR_2 = VAR_0->priv;

 FUNC_1(&VAR_2->htt.tx_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->htt.tx_lock);
}
