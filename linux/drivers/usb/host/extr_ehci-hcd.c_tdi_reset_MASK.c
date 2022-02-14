
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int usbmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ehci_hcd*) ;
 int FUNC_1 (struct ehci_hcd*,int *) ;
 int FUNC_2 (struct ehci_hcd*,int ,int *) ;

__attribute__((used)) static void FUNC_3 (struct ehci_hcd *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2, &VAR_2->regs->usbmode);
 VAR_3 |= VAR_1;




 if (FUNC_0(VAR_2))
  VAR_3 |= VAR_0;
 FUNC_2(VAR_2, VAR_3, &VAR_2->regs->usbmode);
}
