
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_buf {scalar_t__* pxmit_urb; } ;
struct _adapter {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct _adapter *VAR_0,
         struct xmit_buf *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  if (VAR_1->pxmit_urb[VAR_2]) {
   FUNC_1(VAR_1->pxmit_urb[VAR_2]);
   FUNC_0(VAR_1->pxmit_urb[VAR_2]);
  }
 }
}
