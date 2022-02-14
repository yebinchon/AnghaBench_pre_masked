
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int lock; int xmit_tasklet; } ;
struct adapter {struct xmit_priv xmitpriv; } ;


 scalar_t__ FUNC_0 (struct adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct adapter *VAR_0)
{
 struct xmit_priv *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = &VAR_0->xmitpriv;

 FUNC_1(&VAR_1->lock);

 if (FUNC_0(VAR_0))
  FUNC_3(&VAR_1->xmit_tasklet);

 FUNC_2(&VAR_1->lock);
}
