
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __queue {int lock; int queue; } ;
struct xmit_priv {int free_xmitframe_cnt; struct _adapter* adapter; struct __queue free_xmit_queue; } ;
struct xmit_frame {int list; int * pkt; } ;
struct _adapter {int pnetdev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct xmit_priv *VAR_0,
     struct xmit_frame *VAR_1)
{
 unsigned long VAR_2;
 struct __queue *VAR_3 = &VAR_0->free_xmit_queue;
 struct _adapter *VAR_4 = VAR_0->adapter;

 if (VAR_1 == ((void*)0))
  return;
 FUNC_4(&VAR_3->lock, VAR_2);
 FUNC_1(&VAR_1->list);
 if (VAR_1->pkt)
  VAR_1->pkt = ((void*)0);
 FUNC_0(&VAR_1->list, &VAR_3->queue);
 VAR_0->free_xmitframe_cnt++;
 FUNC_5(&VAR_3->lock, VAR_2);
 if (FUNC_2(VAR_4->pnetdev))
  FUNC_3(VAR_4->pnetdev);
}
