
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {int iaa_in_progress; TYPE_2__* regs; TYPE_1__* async; scalar_t__ has_synopsys_hc_bug; } ;
struct TYPE_4__ {int async_next; } ;
struct TYPE_3__ {scalar_t__ qh_dma; } ;


 int FUNC_0 (struct ehci_hcd*,int ,int *) ;
 int FUNC_1 (struct ehci_hcd*) ;

__attribute__((used)) static void FUNC_2(struct ehci_hcd *VAR_0)
{
 if (VAR_0->has_synopsys_hc_bug)
  FUNC_0(VAR_0, (u32) VAR_0->async->qh_dma,
       &VAR_0->regs->async_next);


 VAR_0->iaa_in_progress = 0;

 FUNC_1(VAR_0);
}
