
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devres {int pinned; int enabled; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int) ;
 struct pci_devres* FUNC_1 (struct pci_dev*) ;

void FUNC_2(struct pci_dev *VAR_0)
{
 struct pci_devres *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(!VAR_1 || !VAR_1->enabled);
 if (VAR_1)
  VAR_1->pinned = 1;
}
