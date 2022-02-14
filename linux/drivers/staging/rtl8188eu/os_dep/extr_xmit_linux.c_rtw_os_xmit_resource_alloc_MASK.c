
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xmit_buf {int * pxmit_urb; scalar_t__ dma_transfer_addr; int pallocated_buf; int pbuf; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct adapter *VAR_4,
          struct xmit_buf *VAR_5, u32 VAR_6)
{
 int VAR_7;

 VAR_5->pallocated_buf = FUNC_2(VAR_6, VAR_0);
 if (!VAR_5->pallocated_buf)
  return VAR_2;

 VAR_5->pbuf = FUNC_1(VAR_5->pallocated_buf, VAR_1);
 VAR_5->dma_transfer_addr = 0;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_5->pxmit_urb[VAR_7] = FUNC_3(0, VAR_0);
  if (!VAR_5->pxmit_urb[VAR_7]) {
   FUNC_0("pxmitbuf->pxmit_urb[i]==NULL");
   return VAR_2;
  }
 }
 return VAR_3;
}
