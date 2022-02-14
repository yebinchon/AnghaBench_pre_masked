
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; } ;
struct pci_controller {int * ops; } ;


 int VAR_0 ;
 struct pci_controller* FUNC_0 (int ) ;

bool FUNC_1(struct pci_dev *VAR_1)
{
 struct pci_controller *VAR_2;

 VAR_2 = FUNC_0(VAR_1->bus);

 return (VAR_2->ops == &VAR_0);
}
