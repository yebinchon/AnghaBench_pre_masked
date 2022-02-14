
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int ack_tx_mutex; struct xmit_buf* pcmd_xmitbuf; scalar_t__ pallocated_xmit_extbuf; scalar_t__ pxmit_extbuf; scalar_t__ xframe_ext_alloc_addr; scalar_t__ xframe_ext; scalar_t__ pallocated_xmitbuf; scalar_t__ pallocated_frame_buf; scalar_t__ pxmit_frame_buf; scalar_t__ pxmitbuf; struct adapter* adapter; } ;
struct xmit_frame {int dummy; } ;
struct xmit_buf {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,struct xmit_frame*) ;
 int FUNC_4 (struct adapter*,struct xmit_buf*,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct xmit_priv *VAR_8)
{
 int VAR_9;
 struct adapter *VAR_10 = VAR_8->adapter;
 struct xmit_frame *VAR_11 = (struct xmit_frame *) VAR_8->pxmit_frame_buf;
 struct xmit_buf *VAR_12 = (struct xmit_buf *)VAR_8->pxmitbuf;

 FUNC_2(VAR_10);

 if (!VAR_8->pxmit_frame_buf)
  return;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  FUNC_3(VAR_10, VAR_11);

  VAR_11++;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  FUNC_4(VAR_10, VAR_12, (VAR_2 + VAR_7), 1);

  VAR_12++;
 }

 if (VAR_8->pallocated_frame_buf)
  FUNC_5(VAR_8->pallocated_frame_buf);


 if (VAR_8->pallocated_xmitbuf)
  FUNC_5(VAR_8->pallocated_xmitbuf);


 VAR_11 = (struct xmit_frame *)VAR_8->xframe_ext;
 if (VAR_11) {
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
   FUNC_3(VAR_10, VAR_11);
   VAR_11++;
  }
 }
 if (VAR_8->xframe_ext_alloc_addr)
  FUNC_5(VAR_8->xframe_ext_alloc_addr);


 VAR_12 = (struct xmit_buf *)VAR_8->pxmit_extbuf;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  FUNC_4(VAR_10, VAR_12, (VAR_3 + VAR_7), 1);

  VAR_12++;
 }

 if (VAR_8->pallocated_xmit_extbuf) {
  FUNC_5(VAR_8->pallocated_xmit_extbuf);
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_12 = &VAR_8->pcmd_xmitbuf[VAR_9];
  if (VAR_12)
   FUNC_4(VAR_10, VAR_12, VAR_1+VAR_7, 1);
 }

 FUNC_1(VAR_10);

 FUNC_0(&VAR_8->ack_tx_mutex);
}
