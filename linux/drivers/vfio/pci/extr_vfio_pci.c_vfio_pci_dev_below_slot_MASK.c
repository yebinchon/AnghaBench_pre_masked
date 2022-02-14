
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_slot {TYPE_1__* bus; } ;
struct pci_dev {struct pci_slot* slot; TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;



__attribute__((used)) static bool FUNC_0(struct pci_dev *VAR_0, struct pci_slot *VAR_1)
{
 for (; VAR_0; VAR_0 = VAR_0->bus->self)
  if (VAR_0->bus == VAR_1->bus)
   return (VAR_0->slot == VAR_1);
 return 0;
}
