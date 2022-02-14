
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct timer_list {int dummy; } ;
struct rxtid_stats {int num_timeouts; } ;
struct rxtid {int timer_mon; int seq_next; int hold_q_sz; int lock; TYPE_1__* hold_q; scalar_t__ aggr; } ;
struct aggr_info_conn {int timer_scheduled; int timer; struct rxtid* rx_tid; struct rxtid_stats* stat; } ;
struct TYPE_2__ {scalar_t__ skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct aggr_info_conn* VAR_4 ;
 int FUNC_0 (struct aggr_info_conn*,size_t,int ,int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 struct aggr_info_conn* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_7)
{
 u8 VAR_8, VAR_9;
 struct aggr_info_conn *VAR_10 = FUNC_2(VAR_10, VAR_7, VAR_6);
 struct rxtid *VAR_11;
 struct rxtid_stats *VAR_12;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_11 = &VAR_10->rx_tid[VAR_8];
  VAR_12 = &VAR_10->stat[VAR_8];

  if (!VAR_11->aggr || !VAR_11->timer_mon)
   continue;

  VAR_12->num_timeouts++;
  FUNC_1(VAR_1,
      "aggr timeout (st %d end %d)\n",
      VAR_11->seq_next,
      ((VAR_11->seq_next + VAR_11->hold_q_sz-1) &
       VAR_2));
  FUNC_0(VAR_10, VAR_8, 0, 0);
 }

 VAR_10->timer_scheduled = 0;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_11 = &VAR_10->rx_tid[VAR_8];

  if (VAR_11->aggr && VAR_11->hold_q) {
   FUNC_5(&VAR_11->lock);
   for (VAR_9 = 0; VAR_9 < VAR_11->hold_q_sz; VAR_9++) {
    if (VAR_11->hold_q[VAR_9].skb) {
     VAR_10->timer_scheduled = 1;
     VAR_11->timer_mon = 1;
     break;
    }
   }
   FUNC_6(&VAR_11->lock);

   if (VAR_9 >= VAR_11->hold_q_sz)
    VAR_11->timer_mon = 0;
  }
 }

 if (VAR_10->timer_scheduled)
  FUNC_3(&VAR_10->timer,
     VAR_5 + FUNC_4(VAR_0));
}
