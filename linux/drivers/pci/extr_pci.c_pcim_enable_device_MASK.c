
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devres {int enabled; } ;
struct pci_dev {int is_managed; } ;


 int VAR_0 ;
 struct pci_devres* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct pci_dev *VAR_1)
{
 struct pci_devres *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 if (FUNC_2(!VAR_2))
  return -VAR_0;
 if (VAR_2->enabled)
  return 0;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3) {
  VAR_1->is_managed = 1;
  VAR_2->enabled = 1;
 }
 return VAR_3;
}
