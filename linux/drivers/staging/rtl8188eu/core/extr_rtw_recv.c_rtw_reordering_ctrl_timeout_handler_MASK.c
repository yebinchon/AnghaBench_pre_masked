
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct __queue {int lock; } ;
struct recv_reorder_ctrl {int reordering_ctrl_timer; struct __queue pending_recvframe_queue; struct adapter* padapter; } ;
struct adapter {scalar_t__ bSurpriseRemoved; scalar_t__ bDriverStopped; } ;


 int VAR_0 ;
 struct recv_reorder_ctrl* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 struct recv_reorder_ctrl* VAR_2 ;
 scalar_t__ FUNC_3 (struct adapter*,struct recv_reorder_ctrl*,int) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct timer_list *VAR_4)
{
 struct recv_reorder_ctrl *VAR_5 = FUNC_0(VAR_5, VAR_4,
          VAR_3);
 struct adapter *VAR_6 = VAR_5->padapter;
 struct __queue *VAR_7 = &VAR_5->pending_recvframe_queue;

 if (VAR_6->bDriverStopped || VAR_6->bSurpriseRemoved)
  return;

 FUNC_4(&VAR_7->lock);

 if (FUNC_3(VAR_6, VAR_5, 1))
  FUNC_1(&VAR_5->reordering_ctrl_timer,
     VAR_1 + FUNC_2(VAR_0));

 FUNC_5(&VAR_7->lock);
}
