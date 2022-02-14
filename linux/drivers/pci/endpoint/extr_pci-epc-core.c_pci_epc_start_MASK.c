
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_epc {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* start ) (struct pci_epc*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pci_epc*) ;

int FUNC_4(struct pci_epc *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 if (FUNC_0(VAR_1))
  return -VAR_0;

 if (!VAR_1->ops->start)
  return 0;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_2 = VAR_1->ops->start(VAR_1);
 FUNC_2(&VAR_1->lock, VAR_3);

 return VAR_2;
}
