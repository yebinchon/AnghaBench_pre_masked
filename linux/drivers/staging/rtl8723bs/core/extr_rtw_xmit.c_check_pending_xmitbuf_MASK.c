
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __queue {int lock; int queue; } ;
struct xmit_priv {struct __queue pending_xmitbuf_queue; } ;
typedef int sint ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

sint FUNC_3(
 struct xmit_priv *VAR_0)
{
 struct __queue *VAR_1;
 sint VAR_2 = 0;

 VAR_1 = &VAR_0->pending_xmitbuf_queue;

 FUNC_1(&VAR_1->lock);

 if (!FUNC_0(&VAR_1->queue))
  VAR_2 = 1;

 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
