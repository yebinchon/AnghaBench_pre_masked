
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int pme_support; struct pci_bus* bus; } ;
struct pci_bus {int * bridge; struct pci_bus* parent; struct pci_dev* self; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int) ;

bool FUNC_3(struct pci_dev *VAR_0)
{
 struct pci_bus *VAR_1 = VAR_0->bus;

 if (!VAR_0->pme_support)
  return 0;


 if (!FUNC_1(VAR_0, FUNC_2(VAR_0, 1)))
  return 0;

 if (FUNC_0(&VAR_0->dev))
  return 1;

 while (VAR_1->parent) {
  struct pci_dev *VAR_2 = VAR_1->self;

  if (FUNC_0(&VAR_2->dev))
   return 1;

  VAR_1 = VAR_1->parent;
 }


 if (VAR_1->bridge)
  return FUNC_0(VAR_1->bridge);

 return 0;
}
