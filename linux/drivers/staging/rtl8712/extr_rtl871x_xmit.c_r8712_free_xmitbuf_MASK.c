
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __queue {int lock; int queue; } ;
struct xmit_priv {int free_xmitbuf_cnt; struct __queue free_xmitbuf_queue; } ;
struct xmit_buf {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct xmit_priv *VAR_0, struct xmit_buf *VAR_1)
{
 unsigned long VAR_2;
 struct __queue *VAR_3 = &VAR_0->free_xmitbuf_queue;

 if (VAR_1 == ((void*)0))
  return;
 FUNC_2(&VAR_3->lock, VAR_2);
 FUNC_1(&VAR_1->list);
 FUNC_0(&(VAR_1->list), &VAR_3->queue);
 VAR_0->free_xmitbuf_cnt++;
 FUNC_3(&VAR_3->lock, VAR_2);
}
