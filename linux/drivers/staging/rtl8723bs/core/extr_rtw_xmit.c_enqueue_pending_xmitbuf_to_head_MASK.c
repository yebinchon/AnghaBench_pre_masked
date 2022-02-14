
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __queue {int lock; } ;
struct xmit_priv {struct __queue pending_xmitbuf_queue; } ;
struct xmit_buf {int list; } ;


 int FUNC_0 (struct __queue*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(
 struct xmit_priv *VAR_0,
 struct xmit_buf *VAR_1)
{
 struct __queue *VAR_2;

 VAR_2 = &VAR_0->pending_xmitbuf_queue;

 FUNC_3(&VAR_2->lock);
 FUNC_2(&VAR_1->list);
 FUNC_1(&VAR_1->list, FUNC_0(VAR_2));
 FUNC_4(&VAR_2->lock);
}
