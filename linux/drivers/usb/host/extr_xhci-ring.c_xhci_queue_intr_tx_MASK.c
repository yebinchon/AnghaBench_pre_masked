
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd {TYPE_1__** devs; } ;
struct xhci_ep_ctx {int dummy; } ;
struct urb {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int out_ctx; } ;


 int FUNC_0 (struct xhci_hcd*,struct urb*,struct xhci_ep_ctx*) ;
 struct xhci_ep_ctx* FUNC_1 (struct xhci_hcd*,int ,unsigned int) ;
 int FUNC_2 (struct xhci_hcd*,int ,struct urb*,int,unsigned int) ;

int FUNC_3(struct xhci_hcd *VAR_0, gfp_t VAR_1,
  struct urb *VAR_2, int VAR_3, unsigned int VAR_4)
{
 struct xhci_ep_ctx *VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_0->devs[VAR_3]->out_ctx, VAR_4);
 FUNC_0(VAR_0, VAR_2, VAR_5);

 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
