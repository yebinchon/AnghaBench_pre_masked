
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 unsigned int FUNC_0 (int ,int ) ;

unsigned int FUNC_1(struct pci_dev *VAR_0)
{
 return FUNC_0(VAR_0->bus->number, VAR_0->devfn);
}
