
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct xhci_ep_ctx*) ;

__attribute__((used)) static int FUNC_1(struct xhci_hcd *VAR_4,
  struct xhci_ep_ctx *VAR_5,
  unsigned int VAR_6)
{

 if (VAR_6 == VAR_2 ||
   VAR_6 == VAR_0 ||
   VAR_6 == VAR_1)






  if (FUNC_0(VAR_5) == VAR_3)
   return 1;

 return 0;
}
