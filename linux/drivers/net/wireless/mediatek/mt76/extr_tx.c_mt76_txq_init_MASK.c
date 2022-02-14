
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_txq {int * swq; int retry_q; } ;
struct mt76_dev {int * q_tx; } ;
struct ieee80211_txq {scalar_t__ drv_priv; } ;


 size_t FUNC_0 (struct ieee80211_txq*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mt76_dev *VAR_0, struct ieee80211_txq *VAR_1)
{
 struct mt76_txq *VAR_2 = (struct mt76_txq *)VAR_1->drv_priv;

 FUNC_1(&VAR_2->retry_q);

 VAR_2->swq = &VAR_0->q_tx[FUNC_0(VAR_1)];
}
