
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xhci_input_control_ctx {int dummy; } ;
struct xhci_hcd {scalar_t__ num_active_eps; scalar_t__ limit_active_eps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xhci_hcd*,struct xhci_input_control_ctx*) ;
 int FUNC_1 (struct xhci_hcd*,int ,char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static int FUNC_2(struct xhci_hcd *VAR_2,
  struct xhci_input_control_ctx *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_2->num_active_eps + VAR_4 > VAR_2->limit_active_eps) {
  FUNC_1(VAR_2, VAR_1,
    "Not enough ep ctxs: "
    "%u active, need to add %u, limit is %u.",
    VAR_2->num_active_eps, VAR_4,
    VAR_2->limit_active_eps);
  return -VAR_0;
 }
 VAR_2->num_active_eps += VAR_4;
 FUNC_1(VAR_2, VAR_1,
   "Adding %u ep ctxs, %u now active.", VAR_4,
   VAR_2->num_active_eps);
 return 0;
}
