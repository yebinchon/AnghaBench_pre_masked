
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; scalar_t__ cb; } ;
struct mt76_wcid {int * aggr; } ;
struct mt76_rx_tid {size_t head; size_t size; int started; int lock; int reorder_work; TYPE_1__* dev; scalar_t__ nframes; struct sk_buff** reorder_buf; scalar_t__ stopped; } ;
struct mt76_rx_status {size_t tid; size_t seqno; int reorder_time; int flag; int aggr; struct mt76_wcid* wcid; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int dummy; } ;
struct TYPE_2__ {int hw; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff*) ;
 size_t* FUNC_3 (struct ieee80211_hdr*) ;
 int FUNC_4 (int ,int *,int ) ;
 void* FUNC_5 (size_t) ;
 int FUNC_6 (size_t,size_t) ;
 size_t FUNC_7 (size_t,size_t) ;
 int VAR_5 ;
 int FUNC_8 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_9 (struct mt76_rx_tid*,struct sk_buff_head*,size_t) ;
 int FUNC_10 (struct mt76_rx_tid*,struct sk_buff_head*) ;
 struct mt76_rx_tid* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct ieee80211_sta* FUNC_14 (struct mt76_wcid*) ;

void FUNC_15(struct sk_buff *VAR_6, struct sk_buff_head *VAR_7)
{
 struct mt76_rx_status *VAR_8 = (struct mt76_rx_status *)VAR_6->cb;
 struct ieee80211_hdr *VAR_9 = (struct ieee80211_hdr *)VAR_6->data;
 struct mt76_wcid *VAR_10 = VAR_8->wcid;
 struct ieee80211_sta *VAR_11;
 struct mt76_rx_tid *VAR_12;
 bool VAR_13;
 u16 VAR_14, VAR_15, VAR_16;
 u8 VAR_17, VAR_18;

 FUNC_0(VAR_7, VAR_6);

 VAR_11 = FUNC_14(VAR_10);
 if (!VAR_11)
  return;

 if (!VAR_8->aggr) {
  FUNC_8(VAR_6, VAR_7);
  return;
 }


 VAR_17 = *FUNC_3(VAR_9) & VAR_1;
 if (VAR_17 != VAR_0 &&
     VAR_17 != VAR_2)
  return;

 VAR_12 = FUNC_11(VAR_10->aggr[VAR_8->tid]);
 if (!VAR_12)
  return;

 VAR_8->flag |= VAR_4;
 FUNC_12(&VAR_12->lock);

 if (VAR_12->stopped)
  goto out;

 VAR_15 = VAR_12->head;
 VAR_14 = VAR_8->seqno;
 VAR_16 = VAR_12->size;
 VAR_13 = FUNC_6(VAR_14, VAR_15);

 if (!VAR_12->started) {
  if (VAR_13)
   goto out;

  VAR_12->started = 1;
 }

 if (VAR_13) {
  FUNC_1(VAR_6, VAR_7);
  FUNC_2(VAR_6);
  goto out;
 }

 if (VAR_14 == VAR_15) {
  VAR_12->head = FUNC_5(VAR_15);
  if (VAR_12->nframes)
   FUNC_10(VAR_12, VAR_7);
  goto out;
 }

 FUNC_1(VAR_6, VAR_7);





 if (!FUNC_6(VAR_14, VAR_15 + VAR_16)) {
  VAR_15 = FUNC_5(FUNC_7(VAR_14, VAR_16));
  FUNC_9(VAR_12, VAR_7, VAR_15);
 }

 VAR_18 = VAR_14 % VAR_16;


 if (VAR_12->reorder_buf[VAR_18]) {
  FUNC_2(VAR_6);
  goto out;
 }

 VAR_8->reorder_time = VAR_5;
 VAR_12->reorder_buf[VAR_18] = VAR_6;
 VAR_12->nframes++;
 FUNC_10(VAR_12, VAR_7);

 FUNC_4(VAR_12->dev->hw, &VAR_12->reorder_work,
         VAR_3);

out:
 FUNC_13(&VAR_12->lock);
}
