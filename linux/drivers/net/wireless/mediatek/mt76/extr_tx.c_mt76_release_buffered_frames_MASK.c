
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct mt76_txq {scalar_t__ aggr; } ;
struct mt76_queue {int lock; } ;
struct mt76_dev {TYPE_2__* queue_ops; TYPE_1__* q_tx; } ;
struct ieee80211_txq {scalar_t__ drv_priv; } ;
struct ieee80211_sta {struct ieee80211_txq** txq; } ;
struct ieee80211_hw {struct mt76_dev* priv; } ;
typedef enum ieee80211_frame_release_type { ____Placeholder_ieee80211_frame_release_type } ieee80211_frame_release_type ;
struct TYPE_4__ {int (* kick ) (struct mt76_dev*,struct mt76_queue*) ;} ;
struct TYPE_3__ {struct mt76_queue* q; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ieee80211_sta*) ;
 int FUNC_1 (struct mt76_txq*,struct sk_buff*) ;
 int FUNC_2 (struct mt76_dev*,struct ieee80211_sta*,struct sk_buff*,int) ;
 struct sk_buff* FUNC_3 (struct mt76_dev*,struct mt76_txq*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mt76_dev*,struct mt76_queue*) ;

void
FUNC_7(struct ieee80211_hw *VAR_1, struct ieee80211_sta *VAR_2,
        u16 VAR_3, int VAR_4,
        enum ieee80211_frame_release_type VAR_5,
        bool VAR_6)
{
 struct mt76_dev *VAR_7 = VAR_1->priv;
 struct sk_buff *VAR_8 = ((void*)0);
 struct mt76_queue *VAR_9 = VAR_7->q_tx[VAR_0].q;
 int VAR_10;

 FUNC_4(&VAR_9->lock);
 for (VAR_10 = 0; VAR_3 && VAR_4; VAR_10++, VAR_3 >>= 1) {
  struct ieee80211_txq *VAR_11 = VAR_2->txq[VAR_10];
  struct mt76_txq *VAR_12 = (struct mt76_txq *)VAR_11->drv_priv;
  struct sk_buff *VAR_13;

  if (!(VAR_3 & 1))
   continue;

  do {
   VAR_13 = FUNC_3(VAR_7, VAR_12, 1);
   if (!VAR_13)
    break;

   if (VAR_12->aggr)
    FUNC_1(VAR_12, VAR_13);

   VAR_4--;
   if (VAR_8)
    FUNC_2(VAR_7, VAR_2, VAR_8, 0);

   VAR_8 = VAR_13;
  } while (VAR_4);
 }

 if (VAR_8) {
  FUNC_2(VAR_7, VAR_2, VAR_8, 1);
  VAR_7->queue_ops->kick(VAR_7, VAR_9);
 } else {
  FUNC_0(VAR_2);
 }

 FUNC_5(&VAR_9->lock);
}
