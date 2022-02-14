
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {TYPE_1__* eps; } ;
struct xhci_hcd {unsigned int num_active_eps; } ;
struct TYPE_2__ {scalar_t__ ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,int ,char*,unsigned int,unsigned int,unsigned int) ;

void FUNC_1(struct xhci_hcd *VAR_1,
 struct xhci_virt_device *VAR_2, bool VAR_3)
{
 int VAR_4;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;

 for (VAR_4 = (VAR_3 ? 0 : 1); VAR_4 < 31; VAR_4++) {
  if (VAR_2->eps[VAR_4].ring) {
   VAR_6 |= 1 << VAR_4;
   VAR_5++;
  }
 }
 VAR_1->num_active_eps -= VAR_5;
 if (VAR_5)
  FUNC_0(VAR_1, VAR_0,
    "Dropped %u ep ctxs, flags = 0x%x, "
    "%u now active.",
    VAR_5, VAR_6,
    VAR_1->num_active_eps);
}
