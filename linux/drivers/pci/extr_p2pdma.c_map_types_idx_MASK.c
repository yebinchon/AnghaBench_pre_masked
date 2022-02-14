
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static unsigned long FUNC_1(struct pci_dev *VAR_0)
{
 return (FUNC_0(VAR_0->bus) << 16) |
  (VAR_0->bus->number << 8) | VAR_0->devfn;
}
