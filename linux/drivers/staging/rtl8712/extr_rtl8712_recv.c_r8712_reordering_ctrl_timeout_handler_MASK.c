
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __queue {int lock; } ;
struct recv_reorder_ctrl {struct __queue pending_recvframe_queue; struct _adapter* padapter; } ;
struct _adapter {scalar_t__ surprise_removed; scalar_t__ driver_stopped; } ;


 int FUNC_0 (struct _adapter*,struct recv_reorder_ctrl*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(void *VAR_0)
{
 unsigned long VAR_1;
 struct recv_reorder_ctrl *VAR_2 = VAR_0;
 struct _adapter *VAR_3 = VAR_2->padapter;
 struct __queue *VAR_4 =
     &VAR_2->pending_recvframe_queue;

 if (VAR_3->driver_stopped || VAR_3->surprise_removed)
  return;
 FUNC_1(&VAR_4->lock, VAR_1);
 FUNC_0(VAR_3, VAR_2, 1);
 FUNC_2(&VAR_4->lock, VAR_1);
}
