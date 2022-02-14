
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_epc {scalar_t__ max_functions; int lock; TYPE_1__* ops; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int (* unmap_addr ) (struct pci_epc*,scalar_t__,int ) ;} ;


 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pci_epc*,scalar_t__,int ) ;

void FUNC_4(struct pci_epc *VAR_0, u8 VAR_1,
   phys_addr_t VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_0(VAR_0) || VAR_1 >= VAR_0->max_functions)
  return;

 if (!VAR_0->ops->unmap_addr)
  return;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_0->ops->unmap_addr(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock, VAR_3);
}
