
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xhci_input_control_ctx {int dummy; } ;
struct xhci_hcd {int num_active_eps; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xhci_hcd*,struct xhci_input_control_ctx*) ;
 int FUNC_1 (struct xhci_hcd*,int ,char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_1,
  struct xhci_input_control_ctx *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_1->num_active_eps -= VAR_3;
 FUNC_1(VAR_1, VAR_0,
   "Removing %u failed ep ctxs, %u now active.",
   VAR_3,
   VAR_1->num_active_eps);
}
