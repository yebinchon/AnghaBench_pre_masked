
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mt76_wcid {int tx_info; int flags; } ;
struct mt76_txq {int retry_q; struct mt76_wcid* wcid; } ;
struct mt76_sw_queue {int swq_queued; struct mt76_queue* q; } ;
struct mt76_queue {TYPE_2__* entry; } ;
struct mt76_dev {int q_tx; TYPE_3__* queue_ops; int state; } ;
struct ieee80211_txq {int sta; int vif; } ;
struct ieee80211_tx_rate {int dummy; } ;
struct TYPE_4__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
typedef enum mt76_txq_id { ____Placeholder_mt76_txq_id } mt76_txq_id ;
struct TYPE_6__ {int (* tx_queue_skb ) (struct mt76_dev*,int,struct sk_buff*,struct mt76_wcid*,int ) ;int (* kick ) (struct mt76_dev*,struct mt76_queue*) ;} ;
struct TYPE_5__ {int schedule; struct mt76_sw_queue* qid; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,struct sk_buff*,struct ieee80211_tx_rate*,int) ;
 int FUNC_2 (struct mt76_txq*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct mt76_dev*,struct mt76_txq*,int) ;
 int FUNC_4 (struct ieee80211_txq*) ;
 struct ieee80211_txq* FUNC_5 (struct mt76_txq*) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct mt76_dev*,int,struct sk_buff*,struct mt76_wcid*,int ) ;
 int FUNC_8 (struct mt76_dev*,int,struct sk_buff*,struct mt76_wcid*,int ) ;
 int FUNC_9 (struct mt76_dev*,struct mt76_queue*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int
FUNC_11(struct mt76_dev *VAR_6, struct mt76_sw_queue *VAR_7,
      struct mt76_txq *VAR_8, bool *VAR_9)
{
 struct ieee80211_txq *VAR_10 = FUNC_5(VAR_8);
 enum mt76_txq_id VAR_11 = FUNC_4(VAR_10);
 struct mt76_wcid *VAR_12 = VAR_8->wcid;
 struct mt76_queue *VAR_13 = VAR_7->q;
 struct ieee80211_tx_info *VAR_14;
 struct sk_buff *VAR_15;
 int VAR_16 = 1, VAR_17;
 struct ieee80211_tx_rate VAR_18;
 bool VAR_19;
 bool VAR_20;
 int VAR_21;

 if (FUNC_10(VAR_4, &VAR_12->flags)) {
  *VAR_9 = 1;
  return 0;
 }

 VAR_15 = FUNC_3(VAR_6, VAR_8, 0);
 if (!VAR_15) {
  *VAR_9 = 1;
  return 0;
 }

 VAR_14 = FUNC_0(VAR_15);
 if (!(VAR_12->tx_info & VAR_5))
  FUNC_1(VAR_10->vif, VAR_10->sta, VAR_15,
           VAR_14->control.rates, 1);
 VAR_18 = VAR_14->control.rates[0];

 VAR_20 = (VAR_14->flags & VAR_2);
 VAR_19 = FUNC_0(VAR_15)->flags & VAR_1;
 VAR_17 = VAR_19 ? 16 : 3;

 if (VAR_19)
  FUNC_2(VAR_8, VAR_15);

 VAR_21 = VAR_6->queue_ops->tx_queue_skb(VAR_6, VAR_11, VAR_15, VAR_12, VAR_10->sta);

 if (VAR_21 < 0)
  return VAR_21;

 do {
  bool VAR_22;

  if (VAR_20)
   break;

  if (FUNC_10(VAR_3, &VAR_6->state))
   return -VAR_0;

  VAR_15 = FUNC_3(VAR_6, VAR_8, 0);
  if (!VAR_15) {
   *VAR_9 = 1;
   break;
  }

  VAR_14 = FUNC_0(VAR_15);
  VAR_22 = VAR_14->flags & VAR_1;

  if (VAR_19 != VAR_22 ||
      (VAR_14->flags & VAR_2)) {
   FUNC_6(&VAR_8->retry_q, VAR_15);
   break;
  }

  VAR_14->control.rates[0] = VAR_18;

  if (VAR_22)
   FUNC_2(VAR_8, VAR_15);

  VAR_21 = VAR_6->queue_ops->tx_queue_skb(VAR_6, VAR_11, VAR_15, VAR_12,
         VAR_10->sta);
  if (VAR_21 < 0)
   return VAR_21;

  VAR_16++;
 } while (VAR_16 < VAR_17);

 if (!VAR_20) {
  VAR_13->entry[VAR_21].qid = VAR_7 - VAR_6->q_tx;
  VAR_13->entry[VAR_21].schedule = 1;
  VAR_7->swq_queued++;
 }

 VAR_6->queue_ops->kick(VAR_6, VAR_13);

 return VAR_16;
}
