
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct pci_epc {scalar_t__ max_functions; int lock; TYPE_1__* ops; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int (* map_addr ) (struct pci_epc*,scalar_t__,int ,int ,size_t) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pci_epc*,scalar_t__,int ,int ,size_t) ;

int FUNC_4(struct pci_epc *VAR_1, u8 VAR_2,
       phys_addr_t VAR_3, u64 VAR_4, size_t VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 if (FUNC_0(VAR_1) || VAR_2 >= VAR_1->max_functions)
  return -VAR_0;

 if (!VAR_1->ops->map_addr)
  return 0;

 FUNC_1(&VAR_1->lock, VAR_7);
 VAR_6 = VAR_1->ops->map_addr(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2(&VAR_1->lock, VAR_7);

 return VAR_6;
}
