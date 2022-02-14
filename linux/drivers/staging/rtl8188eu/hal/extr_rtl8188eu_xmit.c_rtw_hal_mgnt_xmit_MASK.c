
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int frag_len; } ;
struct xmit_frame {int dummy; } ;
struct adapter {int pmondev; struct xmit_priv xmitpriv; } ;
typedef int s32 ;


 int FUNC_0 (int ,struct xmit_frame*,int ) ;
 int FUNC_1 (struct adapter*,struct xmit_frame*) ;

s32 FUNC_2(struct adapter *VAR_0, struct xmit_frame *VAR_1)
{
 struct xmit_priv *VAR_2 = &VAR_0->xmitpriv;

 FUNC_0(VAR_0->pmondev, VAR_1, VAR_2->frag_len);
 return FUNC_1(VAR_0, VAR_1);
}
