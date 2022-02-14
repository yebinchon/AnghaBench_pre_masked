
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_txq {int send_bar; scalar_t__ aggr; TYPE_1__* swq; } ;
struct mt76_queue {int lock; } ;
struct mt76_dev {int dummy; } ;
struct ieee80211_txq {scalar_t__ drv_priv; } ;
struct ieee80211_sta {struct ieee80211_txq** txq; } ;
struct TYPE_2__ {struct mt76_queue* q; } ;


 int FUNC_0 (struct ieee80211_txq**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mt76_dev *VAR_0, struct ieee80211_sta *VAR_1,
    bool VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->txq); VAR_3++) {
  struct ieee80211_txq *VAR_4 = VAR_1->txq[VAR_3];
  struct mt76_queue *VAR_5;
  struct mt76_txq *VAR_6;

  if (!VAR_4)
   continue;

  VAR_6 = (struct mt76_txq *)VAR_4->drv_priv;
  VAR_5 = VAR_6->swq->q;

  FUNC_1(&VAR_5->lock);
  VAR_6->send_bar = VAR_6->aggr && VAR_2;
  FUNC_2(&VAR_5->lock);
 }
}
