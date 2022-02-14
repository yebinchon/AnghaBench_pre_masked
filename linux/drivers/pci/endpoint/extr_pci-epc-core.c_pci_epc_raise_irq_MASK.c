
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_epc {scalar_t__ max_functions; int lock; TYPE_1__* ops; } ;
typedef enum pci_epc_irq_type { ____Placeholder_pci_epc_irq_type } pci_epc_irq_type ;
struct TYPE_2__ {int (* raise_irq ) (struct pci_epc*,scalar_t__,int,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pci_epc*,scalar_t__,int,int ) ;

int FUNC_4(struct pci_epc *VAR_1, u8 VAR_2,
        enum pci_epc_irq_type VAR_3, u16 VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 if (FUNC_0(VAR_1) || VAR_2 >= VAR_1->max_functions)
  return -VAR_0;

 if (!VAR_1->ops->raise_irq)
  return 0;

 FUNC_1(&VAR_1->lock, VAR_6);
 VAR_5 = VAR_1->ops->raise_irq(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_1->lock, VAR_6);

 return VAR_5;
}
