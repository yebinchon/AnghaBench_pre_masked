
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list; int * pkt; struct _adapter* adapter; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
struct __queue {int lock; int queue; } ;
struct recv_priv {int free_recvframe_cnt; struct __queue free_recv_queue; } ;
struct _adapter {struct recv_priv recvpriv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(union recv_frame *VAR_0,
     struct __queue *VAR_1)
{
 unsigned long VAR_2;
 struct _adapter *VAR_3 = VAR_0->u.hdr.adapter;
 struct recv_priv *VAR_4 = &VAR_3->recvpriv;

 if (VAR_0->u.hdr.pkt) {
  FUNC_0(VAR_0->u.hdr.pkt);
  VAR_0->u.hdr.pkt = ((void*)0);
 }
 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_2(&(VAR_0->u.hdr.list));
 FUNC_1(&(VAR_0->u.hdr.list), &VAR_1->queue);
 if (VAR_3) {
  if (VAR_1 == &VAR_4->free_recv_queue)
   VAR_4->free_recvframe_cnt++;
 }
 FUNC_4(&VAR_1->lock, VAR_2);
}
