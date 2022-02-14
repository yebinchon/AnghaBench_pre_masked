
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_devdata {int regs_claim; int regs; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 struct sm501_devdata* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sm501_devdata*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct sm501_devdata *VAR_1 = FUNC_3(VAR_0);

 FUNC_5(VAR_1);
 FUNC_0(VAR_1->regs);

 FUNC_4(VAR_1->regs_claim);
 FUNC_1(VAR_1->regs_claim);

 FUNC_2(VAR_0);
}
