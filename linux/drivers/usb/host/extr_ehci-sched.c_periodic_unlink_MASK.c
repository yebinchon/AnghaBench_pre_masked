
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ehci_shadow {void* ptr; } ;
struct ehci_hcd {scalar_t__* periodic; TYPE_1__* dummy; int use_dummy_qh; union ehci_shadow* pshadow; } ;
typedef scalar_t__ __hc32 ;
struct TYPE_2__ {int qh_dma; } ;


 scalar_t__ FUNC_0 (struct ehci_hcd*) ;
 int FUNC_1 (struct ehci_hcd*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ehci_hcd*,int ) ;
 union ehci_shadow* FUNC_3 (struct ehci_hcd*,union ehci_shadow*,int ) ;
 scalar_t__* FUNC_4 (struct ehci_hcd*,union ehci_shadow*,int ) ;

__attribute__((used)) static void FUNC_5(struct ehci_hcd *VAR_0, unsigned VAR_1, void *VAR_2)
{
 union ehci_shadow *VAR_3 = &VAR_0->pshadow[VAR_1];
 __hc32 *VAR_4 = &VAR_0->periodic[VAR_1];
 union ehci_shadow VAR_5 = *VAR_3;


 while (VAR_5.ptr && VAR_5.ptr != VAR_2) {
  VAR_3 = FUNC_3(VAR_0, VAR_3,
    FUNC_1(VAR_0, *VAR_4));
  VAR_4 = FUNC_4(VAR_0, &VAR_5,
    FUNC_1(VAR_0, *VAR_4));
  VAR_5 = *VAR_3;
 }

 if (!VAR_5.ptr)
  return;




 *VAR_3 = *FUNC_3(VAR_0, &VAR_5,
   FUNC_1(VAR_0, *VAR_4));

 if (!VAR_0->use_dummy_qh ||
     *FUNC_4(VAR_0, &VAR_5, FUNC_1(VAR_0, *VAR_4))
   != FUNC_0(VAR_0))
  *VAR_4 = *FUNC_4(VAR_0, &VAR_5,
    FUNC_1(VAR_0, *VAR_4));
 else
  *VAR_4 = FUNC_2(VAR_0, VAR_0->dummy->qh_dma);
}
