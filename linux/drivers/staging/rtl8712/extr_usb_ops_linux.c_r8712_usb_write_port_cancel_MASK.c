
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xmit_buf {scalar_t__* pxmit_urb; } ;
struct TYPE_2__ {scalar_t__ pxmitbuf; } ;
struct _adapter {TYPE_1__ xmitpriv; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct _adapter *VAR_1)
{
 int VAR_2, VAR_3;
 struct xmit_buf *VAR_4 = (struct xmit_buf *)
         VAR_1->xmitpriv.pxmitbuf;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   if (VAR_4->pxmit_urb[VAR_3])
    FUNC_0(VAR_4->pxmit_urb[VAR_3]);
  }
  VAR_4++;
 }
}
