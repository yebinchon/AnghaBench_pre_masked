
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int current_state; } ;


 int FUNC_0 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

void FUNC_3(struct pci_dev *VAR_0)
{
 if (FUNC_1(VAR_0))
  FUNC_2(VAR_0);

 FUNC_0(VAR_0, VAR_0->current_state);
}
