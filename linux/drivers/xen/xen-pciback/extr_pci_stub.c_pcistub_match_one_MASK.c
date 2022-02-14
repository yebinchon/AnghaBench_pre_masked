
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcistub_device_id {scalar_t__ domain; scalar_t__ bus; scalar_t__ devfn; } ;
struct pci_dev {scalar_t__ devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ number; struct pci_dev* self; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_0,
        struct pcistub_device_id *VAR_1)
{



 for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->bus->self) {
  if (FUNC_0(VAR_0->bus) == VAR_1->domain
      && VAR_0->bus->number == VAR_1->bus
      && VAR_0->devfn == VAR_1->devfn)
   return 1;


  if (VAR_0 == VAR_0->bus->self)
   break;
 }

 return 0;
}
