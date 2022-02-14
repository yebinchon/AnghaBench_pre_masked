
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int ignore_hotplug; TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;



void FUNC_0(struct pci_dev *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->bus->self;

 VAR_0->ignore_hotplug = 1;

 if (VAR_1)
  VAR_1->ignore_hotplug = 1;
}
