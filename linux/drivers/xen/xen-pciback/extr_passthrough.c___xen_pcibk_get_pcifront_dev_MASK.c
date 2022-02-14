
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {int dummy; } ;
struct pci_dev {unsigned int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {unsigned int number; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_0,
     struct xen_pcibk_device *VAR_1,
     unsigned int *VAR_2, unsigned int *VAR_3,
     unsigned int *VAR_4)
{
 *VAR_2 = FUNC_0(VAR_0->bus);
 *VAR_3 = VAR_0->bus->number;
 *VAR_4 = VAR_0->devfn;
 return 1;
}
