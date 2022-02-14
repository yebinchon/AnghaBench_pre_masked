
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int * next; int prev; } ;
struct mt76_wcid {int dummy; } ;
struct mt76_tx_info {struct sk_buff* skb; } ;
struct mt76_queue {size_t tail; int queued; int ndesc; TYPE_3__* entry; int hw_idx; } ;
struct mt76_dev {TYPE_2__* drv; TYPE_1__* q_tx; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum mt76_txq_id { ____Placeholder_mt76_txq_id } mt76_txq_id ;
struct TYPE_6__ {struct sk_buff* skb; int urb; } ;
struct TYPE_5__ {int (* tx_prepare_skb ) (struct mt76_dev*,int *,int,struct mt76_wcid*,struct ieee80211_sta*,struct mt76_tx_info*) ;} ;
struct TYPE_4__ {struct mt76_queue* q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mt76_dev*,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_1 (struct mt76_dev*,struct sk_buff*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mt76_dev*,int *,int,struct mt76_wcid*,struct ieee80211_sta*,struct mt76_tx_info*) ;

__attribute__((used)) static int
FUNC_4(struct mt76_dev *VAR_3, enum mt76_txq_id VAR_4,
     struct sk_buff *VAR_5, struct mt76_wcid *VAR_6,
     struct ieee80211_sta *VAR_7)
{
 struct mt76_queue *VAR_8 = VAR_3->q_tx[VAR_4].q;
 struct mt76_tx_info VAR_9 = {
  .skb = VAR_5,
 };
 u16 VAR_10 = VAR_8->tail;
 int VAR_11;

 if (VAR_8->queued == VAR_8->ndesc)
  return -VAR_0;

 VAR_5->prev = *(VAR_5->next = ((void*)0));
 VAR_11 = VAR_3->drv->tx_prepare_skb(VAR_3, ((void*)0), VAR_4, VAR_6, VAR_7, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_3, VAR_9.skb, VAR_8->entry[VAR_10].urb);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_0(VAR_3, VAR_1, FUNC_2(VAR_8->hw_idx),
       VAR_8->entry[VAR_10].urb, VAR_2,
       &VAR_8->entry[VAR_10]);

 VAR_8->tail = (VAR_8->tail + 1) % VAR_8->ndesc;
 VAR_8->entry[VAR_10].skb = VAR_9.skb;
 VAR_8->queued++;

 return VAR_10;
}
