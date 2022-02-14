
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct ieee80211_txq {int dummy; } ;
struct ath10k_peer {TYPE_2__* vif; TYPE_1__* sta; scalar_t__ removed; } ;
struct ath10k {struct ath10k_peer** peer_map; int data_lock; } ;
struct TYPE_4__ {struct ieee80211_txq* txq; } ;
struct TYPE_3__ {struct ieee80211_txq** txq; } ;


 int FUNC_0 (int *) ;

struct ieee80211_txq *FUNC_1(struct ath10k *VAR_0,
         u16 VAR_1,
         u8 VAR_2)
{
 struct ath10k_peer *VAR_3;

 FUNC_0(&VAR_0->data_lock);

 VAR_3 = VAR_0->peer_map[VAR_1];
 if (!VAR_3)
  return ((void*)0);

 if (VAR_3->removed)
  return ((void*)0);

 if (VAR_3->sta)
  return VAR_3->sta->txq[VAR_2];
 else if (VAR_3->vif)
  return VAR_3->vif->txq;
 else
  return ((void*)0);
}
