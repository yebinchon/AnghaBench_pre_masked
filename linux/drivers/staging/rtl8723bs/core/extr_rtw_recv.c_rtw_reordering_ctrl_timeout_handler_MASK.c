
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct __queue {int lock; } ;
struct recv_reorder_ctrl {int reordering_ctrl_timer; struct __queue pending_recvframe_queue; struct adapter* padapter; } ;
struct adapter {scalar_t__ bSurpriseRemoved; scalar_t__ bDriverStopped; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct recv_reorder_ctrl* FUNC_1 (int ,struct timer_list*,int ) ;
 struct recv_reorder_ctrl* VAR_1 ;
 int FUNC_2 (struct adapter*,struct recv_reorder_ctrl*,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct timer_list *VAR_3)
{
 struct recv_reorder_ctrl *VAR_4 =
  FUNC_1(VAR_4, VAR_3, VAR_2);
 struct adapter *VAR_5 = VAR_4->padapter;
 struct __queue *VAR_6 = &VAR_4->pending_recvframe_queue;


 if (VAR_5->bDriverStopped || VAR_5->bSurpriseRemoved)
  return;



 FUNC_3(&VAR_6->lock);

 if (FUNC_2(VAR_5, VAR_4, 1) == 1)
  FUNC_0(&VAR_4->reordering_ctrl_timer, VAR_0);

 FUNC_4(&VAR_6->lock);

}
