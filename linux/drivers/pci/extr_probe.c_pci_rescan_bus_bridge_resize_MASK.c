
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {struct pci_bus* subordinate; } ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_bus*) ;
 unsigned int FUNC_2 (struct pci_bus*) ;

unsigned int FUNC_3(struct pci_dev *VAR_0)
{
 unsigned int VAR_1;
 struct pci_bus *VAR_2 = VAR_0->subordinate;

 VAR_1 = FUNC_2(VAR_2);

 FUNC_0(VAR_0);

 FUNC_1(VAR_2);

 return VAR_1;
}
