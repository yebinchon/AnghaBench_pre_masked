
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlog {TYPE_1__* l_cilp; } ;
struct TYPE_2__ {int xc_cil; struct TYPE_2__* xc_ctx; scalar_t__ ticket; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(
 struct xlog *VAR_0)
{
 if (VAR_0->l_cilp->xc_ctx) {
  if (VAR_0->l_cilp->xc_ctx->ticket)
   FUNC_3(VAR_0->l_cilp->xc_ctx->ticket);
  FUNC_1(VAR_0->l_cilp->xc_ctx);
 }

 FUNC_0(FUNC_2(&VAR_0->l_cilp->xc_cil));
 FUNC_1(VAR_0->l_cilp);
}
