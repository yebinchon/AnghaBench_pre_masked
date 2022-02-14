
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rxtid {int aggr; int timer_mon; int lock; int q; } ;
struct ath6kl_vif {int ndev; } ;
struct aggr_info_conn {int timer_scheduled; struct rxtid* rx_tid; struct aggr_info* aggr_info; int timer; int dev; int aggr_sz; } ;
struct aggr_info {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

void FUNC_3(struct ath6kl_vif *VAR_3, struct aggr_info *VAR_4,
      struct aggr_info_conn *VAR_5)
{
 struct rxtid *VAR_6;
 u8 VAR_7;

 VAR_5->aggr_sz = VAR_0;
 VAR_5->dev = VAR_3->ndev;
 FUNC_2(&VAR_5->timer, VAR_2, 0);
 VAR_5->aggr_info = VAR_4;

 VAR_5->timer_scheduled = 0;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = &VAR_5->rx_tid[VAR_7];
  VAR_6->aggr = 0;
  VAR_6->timer_mon = 0;
  FUNC_0(&VAR_6->q);
  FUNC_1(&VAR_6->lock);
 }
}
