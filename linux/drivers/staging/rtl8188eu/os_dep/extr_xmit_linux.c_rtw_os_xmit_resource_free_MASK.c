
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_buf {int pallocated_buf; int * pxmit_urb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct xmit_buf *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
  FUNC_1(VAR_0->pxmit_urb[VAR_1]);

 FUNC_0(VAR_0->pallocated_buf);
}
