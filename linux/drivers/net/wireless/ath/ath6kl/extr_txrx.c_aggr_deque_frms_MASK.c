
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u16 ;
struct skb_hold_q {int * skb; scalar_t__ is_amsdu; } ;
struct sk_buff {int dummy; } ;
struct rxtid_stats {int num_delivered; int num_hole; } ;
struct rxtid {size_t seq_next; int q; int lock; int hold_q_sz; struct skb_hold_q* hold_q; } ;
struct aggr_info_conn {int dev; int aggr_info; struct rxtid_stats* stat; struct rxtid* rx_tid; } ;


 size_t FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int ,struct rxtid*,int *) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct aggr_info_conn *VAR_0, u8 VAR_1,
       u16 VAR_2, u8 VAR_3)
{
 struct sk_buff *VAR_4;
 struct rxtid *VAR_5;
 struct skb_hold_q *VAR_6;
 u16 VAR_7, VAR_8, VAR_9;
 struct rxtid_stats *VAR_10;

 VAR_5 = &VAR_0->rx_tid[VAR_1];
 VAR_10 = &VAR_0->stat[VAR_1];

 FUNC_7(&VAR_5->lock);
 VAR_7 = FUNC_0(VAR_5->seq_next, VAR_5->hold_q_sz);
 VAR_9 = VAR_2 ? VAR_2 : VAR_5->seq_next;
 VAR_8 = FUNC_0(VAR_9, VAR_5->hold_q_sz);

 do {
  VAR_6 = &VAR_5->hold_q[VAR_7];
  if ((VAR_3 == 1) && (!VAR_6->skb))
   break;

  if (VAR_6->skb) {
   if (VAR_6->is_amsdu)
    FUNC_2(VAR_0->aggr_info, VAR_5,
       VAR_6->skb);
   else
    FUNC_6(&VAR_5->q, VAR_6->skb);
   VAR_6->skb = ((void*)0);
  } else {
   VAR_10->num_hole++;
  }

  VAR_5->seq_next = FUNC_1(VAR_5->seq_next);
  VAR_7 = FUNC_0(VAR_5->seq_next, VAR_5->hold_q_sz);
 } while (VAR_7 != VAR_8);

 FUNC_8(&VAR_5->lock);

 VAR_10->num_delivered += FUNC_5(&VAR_5->q);

 while ((VAR_4 = FUNC_4(&VAR_5->q)))
  FUNC_3(VAR_0->dev, VAR_4);
}
