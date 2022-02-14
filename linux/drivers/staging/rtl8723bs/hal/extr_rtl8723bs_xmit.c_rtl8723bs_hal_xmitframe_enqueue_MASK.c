
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int SdioXmitStart; int xmit_tasklet; int tx_drop; } ;
struct xmit_frame {int dummy; } ;
struct adapter {struct xmit_priv xmitpriv; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xmit_priv*,struct xmit_frame*) ;
 scalar_t__ FUNC_2 (struct adapter*,struct xmit_frame*) ;
 int FUNC_3 (int *) ;

s32 FUNC_4(
 struct adapter *VAR_1, struct xmit_frame *VAR_2
)
{
 struct xmit_priv *VAR_3 = &VAR_1->xmitpriv;
 s32 VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 != VAR_0) {
  FUNC_1(VAR_3, VAR_2);

  VAR_3->tx_drop++;
 } else {



  FUNC_0(&VAR_3->SdioXmitStart);

 }

 return VAR_4;

}
