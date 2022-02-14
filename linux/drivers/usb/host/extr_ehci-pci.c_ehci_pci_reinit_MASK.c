
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ehci_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int intel_quark_x1000_insnreg01; } ;


 int VAR_0 ;
 int FUNC_0 (struct ehci_hcd*,char*) ;
 int FUNC_1 (struct ehci_hcd*,int ,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct ehci_hcd *VAR_1, struct pci_dev *VAR_2)
{
 int VAR_3;






 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  FUNC_0(VAR_1, "MWI active\n");


 if (FUNC_2(VAR_2)) {




  FUNC_1(VAR_1, VAR_0,
   VAR_1->regs->intel_quark_x1000_insnreg01);
 }

 return 0;
}
