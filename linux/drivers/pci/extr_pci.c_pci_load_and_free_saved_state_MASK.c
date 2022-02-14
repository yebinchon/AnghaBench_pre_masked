
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_saved_state {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_saved_state*) ;
 int FUNC_1 (struct pci_dev*,struct pci_saved_state*) ;

int FUNC_2(struct pci_dev *VAR_0,
      struct pci_saved_state **VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, *VAR_1);
 FUNC_0(*VAR_1);
 *VAR_1 = ((void*)0);
 return VAR_2;
}
