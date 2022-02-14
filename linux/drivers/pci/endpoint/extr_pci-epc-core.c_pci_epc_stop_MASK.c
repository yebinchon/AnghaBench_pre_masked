
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_epc {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop ) (struct pci_epc*) ;} ;


 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pci_epc*) ;

void FUNC_4(struct pci_epc *VAR_0)
{
 unsigned long VAR_1;

 if (FUNC_0(VAR_0) || !VAR_0->ops->stop)
  return;

 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_0->ops->stop(VAR_0);
 FUNC_2(&VAR_0->lock, VAR_1);
}
