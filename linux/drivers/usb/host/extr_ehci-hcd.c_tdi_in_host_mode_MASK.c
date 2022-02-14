
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int usbmode; } ;


 int VAR_0 ;
 int FUNC_0 (struct ehci_hcd*,int *) ;

__attribute__((used)) static int FUNC_1 (struct ehci_hcd *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_1->regs->usbmode);
 return (VAR_2 & 3) == VAR_0;
}
