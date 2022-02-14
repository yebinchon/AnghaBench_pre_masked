
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xmit_priv {int ack_tx; int ack_tx_mutex; scalar_t__ seq_no; } ;
struct xmit_frame {int ack_report; int pxmitbuf; } ;
struct adapter {struct xmit_priv xmitpriv; scalar_t__ bDriverStopped; scalar_t__ bSurpriseRemoved; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xmit_priv*,int) ;
 int FUNC_3 (struct xmit_priv*,int ) ;
 int FUNC_4 (struct xmit_priv*,struct xmit_frame*) ;
 scalar_t__ FUNC_5 (struct adapter*,struct xmit_frame*) ;

s32 FUNC_6(struct adapter *VAR_2, struct xmit_frame *VAR_3)
{
 static u8 VAR_4;
 s32 VAR_5 = VAR_0;
 u32 VAR_6 = 500;
 struct xmit_priv *VAR_7 = &VAR_2->xmitpriv;

 if (VAR_2->bSurpriseRemoved ||
  VAR_2->bDriverStopped) {
  FUNC_3(&VAR_2->xmitpriv, VAR_3->pxmitbuf);
  FUNC_4(&VAR_2->xmitpriv, VAR_3);
  return -1;
 }

 if (FUNC_0(&VAR_7->ack_tx_mutex) == 0) {
  VAR_7->ack_tx = 1;
  VAR_7->seq_no = VAR_4++;
  VAR_3->ack_report = 1;
  if (FUNC_5(VAR_2, VAR_3) == VAR_1)
   VAR_5 = FUNC_2(VAR_7, VAR_6);

  VAR_7->ack_tx = 0;
  FUNC_1(&VAR_7->ack_tx_mutex);
 }

 return VAR_5;
}
