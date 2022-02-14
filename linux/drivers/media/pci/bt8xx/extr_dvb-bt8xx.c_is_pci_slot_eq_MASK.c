
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct pci_dev* VAR_0, struct pci_dev* VAR_1)
{
 if ((VAR_0->subsystem_vendor == VAR_1->subsystem_vendor) &&
  (VAR_0->subsystem_device == VAR_1->subsystem_device) &&
  (VAR_0->bus->number == VAR_1->bus->number) &&
  (FUNC_0(VAR_0->devfn) == FUNC_0(VAR_1->devfn)))
  return 1;
 return 0;
}
