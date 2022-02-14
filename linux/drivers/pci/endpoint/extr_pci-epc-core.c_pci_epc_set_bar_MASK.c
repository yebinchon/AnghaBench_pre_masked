
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_epf_bar {int flags; scalar_t__ barno; int size; } ;
struct pci_epc {scalar_t__ max_functions; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_bar ) (struct pci_epc*,scalar_t__,struct pci_epf_bar*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pci_epc*,scalar_t__,struct pci_epf_bar*) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct pci_epc *VAR_5, u8 VAR_6,
      struct pci_epf_bar *VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;
 int VAR_10 = VAR_7->flags;

 if (FUNC_0(VAR_5) || VAR_6 >= VAR_5->max_functions ||
     (VAR_7->barno == VAR_0 &&
      VAR_10 & VAR_3) ||
     (VAR_10 & VAR_4 &&
      VAR_10 & VAR_2) ||
     (FUNC_4(VAR_7->size) &&
      !(VAR_10 & VAR_3)))
  return -VAR_1;

 if (!VAR_5->ops->set_bar)
  return 0;

 FUNC_1(&VAR_5->lock, VAR_9);
 VAR_8 = VAR_5->ops->set_bar(VAR_5, VAR_6, VAR_7);
 FUNC_2(&VAR_5->lock, VAR_9);

 return VAR_8;
}
