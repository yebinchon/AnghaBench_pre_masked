
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; scalar_t__ cb; } ;
struct mt76_wcid {int * aggr; } ;
struct mt76_rx_tid {int lock; } ;
struct mt76_rx_status {int tid; struct mt76_wcid* wcid; } ;
struct ieee80211_bar {int start_seq_num; int control; int frame_control; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mt76_rx_tid*,struct sk_buff_head*,int ) ;
 int FUNC_5 (struct mt76_rx_tid*,struct sk_buff_head*) ;
 struct mt76_rx_tid* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct sk_buff *VAR_0, struct sk_buff_head *VAR_1)
{
 struct mt76_rx_status *VAR_2 = (struct mt76_rx_status *)VAR_0->cb;
 struct ieee80211_bar *VAR_3 = (struct ieee80211_bar *)VAR_0->data;
 struct mt76_wcid *VAR_4 = VAR_2->wcid;
 struct mt76_rx_tid *VAR_5;
 u16 VAR_6;

 if (!FUNC_2(VAR_3->frame_control))
  return;

 if (!FUNC_1(VAR_3->frame_control))
  return;

 VAR_2->tid = FUNC_3(VAR_3->control) >> 12;
 VAR_6 = FUNC_0(FUNC_3(VAR_3->start_seq_num));
 VAR_5 = FUNC_6(VAR_4->aggr[VAR_2->tid]);
 if (!VAR_5)
  return;

 FUNC_7(&VAR_5->lock);
 FUNC_4(VAR_5, VAR_1, VAR_6);
 FUNC_5(VAR_5, VAR_1);
 FUNC_8(&VAR_5->lock);
}
