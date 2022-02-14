
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_frame {int pxmitbuf; } ;
struct adapter {int xmitpriv; scalar_t__ bDriverStopped; scalar_t__ bSurpriseRemoved; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct xmit_frame*) ;
 int FUNC_2 (struct adapter*,struct xmit_frame*) ;

void FUNC_3(struct adapter *VAR_0, struct xmit_frame *VAR_1)
{
 if (VAR_0->bSurpriseRemoved ||
  VAR_0->bDriverStopped) {
  FUNC_0(&VAR_0->xmitpriv, VAR_1->pxmitbuf);
  FUNC_1(&VAR_0->xmitpriv, VAR_1);
  return;
 }

 FUNC_2(VAR_0, VAR_1);
}
