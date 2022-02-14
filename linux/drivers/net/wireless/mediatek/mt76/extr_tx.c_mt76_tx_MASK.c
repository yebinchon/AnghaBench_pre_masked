
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {size_t priority; scalar_t__ data; } ;
struct mt76_wcid {int tx_info; } ;
struct mt76_txq {scalar_t__ aggr; } ;
struct mt76_queue {int queued; int ndesc; int stopped; int lock; } ;
struct mt76_dev {int hw; TYPE_3__* queue_ops; TYPE_2__* q_tx; } ;
struct ieee80211_txq {scalar_t__ drv_priv; } ;
struct TYPE_4__ {int rates; int vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_sta {struct ieee80211_txq** txq; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_6__ {int (* kick ) (struct mt76_dev*,struct mt76_queue*) ;int (* tx_queue_skb ) (struct mt76_dev*,int,struct sk_buff*,struct mt76_wcid*,struct ieee80211_sta*) ;} ;
struct TYPE_5__ {struct mt76_queue* q; } ;


 size_t VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct ieee80211_sta*,struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct mt76_txq*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mt76_dev*,int,struct sk_buff*,struct mt76_wcid*,struct ieee80211_sta*) ;
 int FUNC_11 (struct mt76_dev*,struct mt76_queue*) ;

void
FUNC_12(struct mt76_dev *VAR_4, struct ieee80211_sta *VAR_5,
 struct mt76_wcid *VAR_6, struct sk_buff *VAR_7)
{
 struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_7);
 struct ieee80211_hdr *VAR_9 = (struct ieee80211_hdr *)VAR_7->data;
 struct mt76_queue *VAR_10;
 int VAR_11 = FUNC_6(VAR_7);

 if (FUNC_1(VAR_11 >= VAR_2)) {
  VAR_11 = VAR_1;
  FUNC_7(VAR_7, VAR_11);
 }

 if (!(VAR_6->tx_info & VAR_3))
  FUNC_2(VAR_8->control.vif, VAR_5, VAR_7,
           VAR_8->control.rates, 1);

 if (VAR_5 && FUNC_3(VAR_9->frame_control)) {
  struct ieee80211_txq *VAR_12;
  struct mt76_txq *VAR_13;
  u8 VAR_14;

  VAR_14 = VAR_7->priority & VAR_0;
  VAR_12 = VAR_5->txq[VAR_14];
  VAR_13 = (struct mt76_txq *)VAR_12->drv_priv;

  if (VAR_13->aggr)
   FUNC_5(VAR_13, VAR_7);
 }

 VAR_10 = VAR_4->q_tx[VAR_11].q;

 FUNC_8(&VAR_10->lock);
 VAR_4->queue_ops->tx_queue_skb(VAR_4, VAR_11, VAR_7, VAR_6, VAR_5);
 VAR_4->queue_ops->kick(VAR_4, VAR_10);

 if (VAR_10->queued > VAR_10->ndesc - 8 && !VAR_10->stopped) {
  FUNC_4(VAR_4->hw, FUNC_6(VAR_7));
  VAR_10->stopped = 1;
 }

 FUNC_9(&VAR_10->lock);
}
