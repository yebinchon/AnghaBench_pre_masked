
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xmit_priv {int ack_tx_mutex; int pallocated_xmit_extbuf; scalar_t__ pxmit_extbuf; int pallocated_xmitbuf; int pallocated_frame_buf; scalar_t__ pxmit_frame_buf; scalar_t__ pxmitbuf; struct adapter* adapter; } ;
struct xmit_frame {int dummy; } ;
struct xmit_buf {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,struct xmit_frame*) ;
 int FUNC_3 (struct xmit_buf*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct xmit_priv *VAR_3)
{
 int VAR_4;
 struct adapter *VAR_5 = VAR_3->adapter;
 struct xmit_frame *VAR_6 = (struct xmit_frame *)VAR_3->pxmit_frame_buf;
 struct xmit_buf *VAR_7 = (struct xmit_buf *)VAR_3->pxmitbuf;
 u32 VAR_8 = VAR_2;

 if (!VAR_3->pxmit_frame_buf)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_2(VAR_5, VAR_6);

  VAR_6++;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_3(VAR_7);
  VAR_7++;
 }

 FUNC_4(VAR_3->pallocated_frame_buf);
 FUNC_4(VAR_3->pallocated_xmitbuf);


 VAR_7 = (struct xmit_buf *)VAR_3->pxmit_extbuf;
 for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++) {
  FUNC_3(VAR_7);
  VAR_7++;
 }

 FUNC_4(VAR_3->pallocated_xmit_extbuf);

 FUNC_1(VAR_5);

 FUNC_0(&VAR_3->ack_tx_mutex);
}
