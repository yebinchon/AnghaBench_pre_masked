
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct skb_hold_q {int is_amsdu; int seq_no; struct sk_buff* skb; } ;
struct sk_buff {int dummy; } ;
struct rxtid_stats {int num_mpdu; int num_amsdu; int num_dups; int num_oow; int num_into_aggr; } ;
struct rxtid {int seq_next; int hold_q_sz; int timer_mon; int lock; struct skb_hold_q* hold_q; int q; int aggr; } ;
struct aggr_info_conn {int timer_scheduled; int timer; int dev; int aggr_info; struct rxtid_stats* stat; struct rxtid* rx_tid; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct aggr_info_conn*,size_t,int,int) ;
 int FUNC_2 (int ,struct rxtid*,struct sk_buff*) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *,scalar_t__) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bool FUNC_9(struct aggr_info_conn *VAR_4, u8 VAR_5,
      u16 VAR_6,
      bool VAR_7, struct sk_buff *VAR_8)
{
 struct rxtid *VAR_9;
 struct rxtid_stats *VAR_10;
 struct sk_buff *VAR_11;
 struct skb_hold_q *VAR_12;
 u16 VAR_13, VAR_14, VAR_15, VAR_16;
 bool VAR_17 = 0;
 u16 VAR_18;

 VAR_9 = &VAR_4->rx_tid[VAR_5];
 VAR_10 = &VAR_4->stat[VAR_5];

 VAR_10->num_into_aggr++;

 if (!VAR_9->aggr) {
  if (VAR_7) {
   FUNC_2(VAR_4->aggr_info, VAR_9, VAR_8);
   VAR_17 = 1;
   VAR_10->num_amsdu++;
   while ((VAR_11 = FUNC_6(&VAR_9->q)))
    FUNC_3(VAR_4->dev,
          VAR_11);
  }
  return VAR_17;
 }


 VAR_14 = VAR_9->seq_next;
 VAR_15 = VAR_6;
 VAR_16 = (VAR_14 + VAR_9->hold_q_sz-1) & VAR_1;

 if (((VAR_14 < VAR_16) && (VAR_15 < VAR_14 || VAR_15 > VAR_16)) ||
     ((VAR_14 > VAR_16) && (VAR_15 > VAR_16) && (VAR_15 < VAR_14))) {
  VAR_18 = (VAR_16 + VAR_9->hold_q_sz - 1) &
   VAR_1;

  if (((VAR_16 < VAR_18) &&
       (VAR_15 < VAR_16 || VAR_15 > VAR_18)) ||
      ((VAR_16 > VAR_18) && (VAR_15 > VAR_18) &&
       (VAR_15 < VAR_16))) {
   FUNC_1(VAR_4, VAR_5, 0, 0);
   FUNC_7(&VAR_9->lock);
   if (VAR_15 >= VAR_9->hold_q_sz - 1)
    VAR_9->seq_next = VAR_15 - (VAR_9->hold_q_sz - 1);
   else
    VAR_9->seq_next = VAR_1 -
        (VAR_9->hold_q_sz - 2 - VAR_15);
   FUNC_8(&VAR_9->lock);
  } else {




   if (VAR_15 >= VAR_9->hold_q_sz - 1)
    VAR_14 = VAR_15 - (VAR_9->hold_q_sz - 1);
   else
    VAR_14 = VAR_1 -
     (VAR_9->hold_q_sz - 2 - VAR_15);

   FUNC_1(VAR_4, VAR_5, VAR_14, 0);
  }

  VAR_10->num_oow++;
 }

 VAR_13 = FUNC_0(VAR_6, VAR_9->hold_q_sz);

 VAR_12 = &VAR_9->hold_q[VAR_13];

 FUNC_7(&VAR_9->lock);
 FUNC_4(VAR_12->skb);
 VAR_10->num_dups++;

 VAR_12->skb = VAR_8;
 VAR_17 = 1;
 VAR_12->is_amsdu = VAR_7;
 VAR_12->seq_no = VAR_6;

 if (VAR_12->is_amsdu)
  VAR_10->num_amsdu++;
 else
  VAR_10->num_mpdu++;

 FUNC_8(&VAR_9->lock);

 FUNC_1(VAR_4, VAR_5, 0, 1);

 if (VAR_4->timer_scheduled)
  return VAR_17;

 FUNC_7(&VAR_9->lock);
 for (VAR_13 = 0; VAR_13 < VAR_9->hold_q_sz; VAR_13++) {
  if (VAR_9->hold_q[VAR_13].skb) {






   VAR_4->timer_scheduled = 1;
   FUNC_5(&VAR_4->timer,
      (VAR_3 + (VAR_2 * VAR_0) / 1000));
   VAR_9->timer_mon = 1;
   break;
  }
 }
 FUNC_8(&VAR_9->lock);

 return VAR_17;
}
