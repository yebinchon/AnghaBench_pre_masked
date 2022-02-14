
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {struct hw_xmit* hwxmits; } ;
struct hw_xmit {int dummy; } ;
struct adapter {struct xmit_priv xmitpriv; } ;


 int FUNC_0 (struct hw_xmit*) ;

void FUNC_1(struct adapter *VAR_0)
{
 struct hw_xmit *VAR_1;
 struct xmit_priv *VAR_2 = &VAR_0->xmitpriv;

 VAR_1 = VAR_2->hwxmits;
 FUNC_0(VAR_1);
}
