
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int * SdioXmitThread; int SdioXmitTerminate; int SdioXmitStart; } ;
struct adapter {struct xmit_priv xmitpriv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct adapter *VAR_0)
{

 struct xmit_priv *VAR_1 = &VAR_0->xmitpriv;


 if (VAR_1->SdioXmitThread) {
  FUNC_0(&VAR_1->SdioXmitStart);
  FUNC_1(&VAR_1->SdioXmitTerminate);
  VAR_1->SdioXmitThread = ((void*)0);
 }

}
