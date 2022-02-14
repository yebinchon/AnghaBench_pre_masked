
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int xmit_tasklet; } ;
struct _adapter {int pnetdev; scalar_t__ surprise_removed; scalar_t__ driver_stopped; struct xmit_priv xmitpriv; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct _adapter*,struct xmit_priv*,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void *VAR_0)
{
 int VAR_1 = 0;
 struct _adapter *VAR_2 = VAR_0;
 struct xmit_priv *VAR_3 = &VAR_2->xmitpriv;

 if (VAR_2->driver_stopped ||
     VAR_2->surprise_removed) {
  FUNC_0(VAR_2->pnetdev, "xmit_bh => driver_stopped or surprise_removed\n");
  return;
 }
 VAR_1 = FUNC_1(VAR_2, VAR_3, ((void*)0));
 if (!VAR_1)
  return;
 FUNC_2(&VAR_3->xmit_tasklet);
}
