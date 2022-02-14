
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct __queue {int lock; } ;
struct xmit_priv {struct __queue pending_xmitbuf_queue; struct adapter* adapter; } ;
struct xmit_buf {int list; } ;
struct TYPE_2__ {int xmit_comp; } ;
struct adapter {TYPE_1__ xmitpriv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct __queue*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(
 struct xmit_priv *VAR_0,
 struct xmit_buf *VAR_1)
{
 struct __queue *VAR_2;
 struct adapter *VAR_3 = VAR_0->adapter;

 VAR_2 = &VAR_0->pending_xmitbuf_queue;

 FUNC_4(&VAR_2->lock);
 FUNC_3(&VAR_1->list);
 FUNC_2(&VAR_1->list, FUNC_1(VAR_2));
 FUNC_5(&VAR_2->lock);

 FUNC_0(&(VAR_3->xmitpriv.xmit_comp));
}
