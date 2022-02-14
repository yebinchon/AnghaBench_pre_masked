
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_epc {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int owner; } ;


 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct pci_epc *VAR_0)
{
 if (!VAR_0 || FUNC_0(VAR_0))
  return;

 FUNC_1(VAR_0->ops->owner);
 FUNC_2(&VAR_0->dev);
}
