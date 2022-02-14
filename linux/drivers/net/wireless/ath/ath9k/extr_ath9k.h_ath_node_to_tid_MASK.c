
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ieee80211_vif {struct ieee80211_txq* txq; } ;
struct ieee80211_txq {scalar_t__ drv_priv; } ;
struct ieee80211_sta {struct ieee80211_txq** txq; } ;
struct ath_node {struct ieee80211_vif* vif; struct ieee80211_sta* sta; } ;
struct ath_atx_tid {int dummy; } ;


 size_t FUNC_0 (struct ieee80211_txq**) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline struct ath_atx_tid *
FUNC_2(struct ath_node *VAR_0, u8 VAR_1)
{
 struct ieee80211_sta *VAR_2 = VAR_0->sta;
 struct ieee80211_vif *VAR_3 = VAR_0->vif;
 struct ieee80211_txq *VAR_4;

 FUNC_1(!VAR_3);
 if (VAR_2)
  VAR_4 = VAR_2->txq[VAR_1 % FUNC_0(VAR_2->txq)];
 else
  VAR_4 = VAR_3->txq;

 return (struct ath_atx_tid *) VAR_4->drv_priv;
}
