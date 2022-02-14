
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_frame {int buf_addr; int * pxmit_urb; struct xmit_buf* pxmitbuf; } ;
struct xmit_buf {struct xmit_frame* priv_data; int pbuf; int * pxmit_urb; } ;



void FUNC_0(struct xmit_frame *VAR_0,
   struct xmit_buf *VAR_1)
{

 VAR_0->pxmitbuf = VAR_1;

 VAR_0->pxmit_urb[0] = VAR_1->pxmit_urb[0];

 VAR_0->buf_addr = VAR_1->pbuf;

 VAR_1->priv_data = VAR_0;
}
