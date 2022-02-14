
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int dummy; } ;
struct adapter {scalar_t__ bWritePortCancel; scalar_t__ bSurpriseRemoved; scalar_t__ bDriverStopped; int mlmepriv; struct xmit_priv xmitpriv; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct adapter*,struct xmit_priv*) ;

void FUNC_3(void *VAR_1)
{
 struct adapter *VAR_2 = VAR_1;
 struct xmit_priv *VAR_3 = &VAR_2->xmitpriv;

 if (FUNC_1(&VAR_2->mlmepriv, VAR_0))
  return;

 while (1) {
  if ((VAR_2->bDriverStopped) ||
      (VAR_2->bSurpriseRemoved) ||
      (VAR_2->bWritePortCancel)) {
   FUNC_0("xmit_tasklet => bDriverStopped or bSurpriseRemoved or bWritePortCancel\n");
   break;
  }

  if (!FUNC_2(VAR_2, VAR_3))
   break;
 }
}
