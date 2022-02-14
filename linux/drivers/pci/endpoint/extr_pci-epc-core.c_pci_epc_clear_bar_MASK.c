
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_epf_bar {scalar_t__ barno; int flags; } ;
struct pci_epc {scalar_t__ max_functions; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* clear_bar ) (struct pci_epc*,scalar_t__,struct pci_epf_bar*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pci_epc*,scalar_t__,struct pci_epf_bar*) ;

void FUNC_4(struct pci_epc *VAR_2, u8 VAR_3,
         struct pci_epf_bar *VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_0(VAR_2) || VAR_3 >= VAR_2->max_functions ||
     (VAR_4->barno == VAR_0 &&
      VAR_4->flags & VAR_1))
  return;

 if (!VAR_2->ops->clear_bar)
  return;

 FUNC_1(&VAR_2->lock, VAR_5);
 VAR_2->ops->clear_bar(VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_2->lock, VAR_5);
}
