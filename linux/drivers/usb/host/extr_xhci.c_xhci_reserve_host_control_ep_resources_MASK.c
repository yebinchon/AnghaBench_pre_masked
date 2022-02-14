
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {scalar_t__ num_active_eps; scalar_t__ limit_active_eps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xhci_hcd*,int ,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_1(struct xhci_hcd *VAR_2)
{
 if (VAR_2->num_active_eps + 1 > VAR_2->limit_active_eps) {
  FUNC_0(VAR_2, VAR_1,
    "Not enough ep ctxs: "
    "%u active, need to add 1, limit is %u.",
    VAR_2->num_active_eps, VAR_2->limit_active_eps);
  return -VAR_0;
 }
 VAR_2->num_active_eps += 1;
 FUNC_0(VAR_2, VAR_1,
   "Adding 1 ep ctx, %u now active.",
   VAR_2->num_active_eps);
 return 0;
}
