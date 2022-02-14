
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int current_state; } ;
typedef int pci_power_t ;



__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_0, void *VAR_1)
{
 pci_power_t VAR_2 = *(pci_power_t *)VAR_1;

 VAR_0->current_state = VAR_2;
 return 0;
}
