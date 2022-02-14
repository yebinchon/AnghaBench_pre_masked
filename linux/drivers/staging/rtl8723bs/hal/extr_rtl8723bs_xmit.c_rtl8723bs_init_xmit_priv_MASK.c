
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int SdioXmitTerminate; int SdioXmitStart; } ;
struct hal_com_data {int SdioTxFIFOFreePageLock; } ;
struct adapter {struct xmit_priv xmitpriv; } ;
typedef int s32 ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

s32 FUNC_3(struct adapter *VAR_1)
{
 struct xmit_priv *VAR_2 = &VAR_1->xmitpriv;
 struct hal_com_data *VAR_3;


 VAR_3 = FUNC_0(VAR_1);

 FUNC_2(&VAR_3->SdioTxFIFOFreePageLock);
 FUNC_1(&VAR_2->SdioXmitStart);
 FUNC_1(&VAR_2->SdioXmitTerminate);

 return VAR_0;
}
