
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; } ;
struct pci_bus {struct device* bridge; } ;
struct device {int kobj; } ;


 struct pci_bus* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

struct device *FUNC_2(struct pci_dev *VAR_0)
{
 struct pci_bus *VAR_1 = FUNC_0(VAR_0->bus);
 struct device *VAR_2 = VAR_1->bridge;

 FUNC_1(&VAR_2->kobj);
 return VAR_2;
}
