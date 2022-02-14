
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int hwxmits; } ;
struct _adapter {struct xmit_priv xmitpriv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct _adapter *VAR_0)
{
 struct xmit_priv *VAR_1 = &VAR_0->xmitpriv;

 FUNC_0(VAR_1->hwxmits);
}
