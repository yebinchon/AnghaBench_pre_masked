
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; } ;
struct msi_desc {int dummy; } ;
struct TYPE_2__ {void* sysdata; } ;


 struct pci_dev* FUNC_0 (struct msi_desc*) ;

void *FUNC_1(struct msi_desc *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->bus->sysdata;
}
