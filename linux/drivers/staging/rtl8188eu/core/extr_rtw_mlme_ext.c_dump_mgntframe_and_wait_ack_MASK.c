
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xmit_priv {int ack_tx; int ack_tx_mutex; } ;
struct xmit_frame {int ack_report; } ;
struct adapter {scalar_t__ bDriverStopped; scalar_t__ bSurpriseRemoved; struct xmit_priv xmitpriv; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xmit_priv*,int) ;
 scalar_t__ FUNC_3 (struct adapter*,struct xmit_frame*) ;

__attribute__((used)) static s32 FUNC_4(struct adapter *VAR_2,
           struct xmit_frame *VAR_3)
{
 s32 VAR_4 = VAR_0;
 u32 VAR_5 = 500;
 struct xmit_priv *VAR_6 = &VAR_2->xmitpriv;

 if (VAR_2->bSurpriseRemoved || VAR_2->bDriverStopped)
  return -1;

 if (FUNC_0(&VAR_6->ack_tx_mutex))
  return VAR_0;
 VAR_6->ack_tx = 1;

 VAR_3->ack_report = 1;
 if (FUNC_3(VAR_2, VAR_3) == VAR_1)
  VAR_4 = FUNC_2(VAR_6, VAR_5);

 VAR_6->ack_tx = 0;
 FUNC_1(&VAR_6->ack_tx_mutex);

 return VAR_4;
}
