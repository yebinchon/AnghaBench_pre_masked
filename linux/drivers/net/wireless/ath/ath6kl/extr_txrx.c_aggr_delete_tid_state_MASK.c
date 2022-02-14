
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rxtid_stats {int dummy; } ;
struct rxtid {int aggr; int timer_mon; int * hold_q; scalar_t__ hold_q_sz; scalar_t__ seq_next; scalar_t__ win_sz; } ;
struct aggr_info_conn {struct rxtid_stats* stat; struct rxtid* rx_tid; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct aggr_info_conn*,size_t,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rxtid_stats*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct aggr_info_conn *VAR_1, u8 VAR_2)
{
 struct rxtid *VAR_3;
 struct rxtid_stats *VAR_4;

 if (!VAR_1 || VAR_2 >= VAR_0)
  return;

 VAR_3 = &VAR_1->rx_tid[VAR_2];
 VAR_4 = &VAR_1->stat[VAR_2];

 if (VAR_3->aggr)
  FUNC_0(VAR_1, VAR_2, 0, 0);

 VAR_3->aggr = 0;
 VAR_3->timer_mon = 0;
 VAR_3->win_sz = 0;
 VAR_3->seq_next = 0;
 VAR_3->hold_q_sz = 0;

 FUNC_1(VAR_3->hold_q);
 VAR_3->hold_q = ((void*)0);

 FUNC_2(VAR_4, 0, sizeof(struct rxtid_stats));
}
