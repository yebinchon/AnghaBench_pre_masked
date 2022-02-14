
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_epc {scalar_t__ max_functions; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_msi ) (struct pci_epc*,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_epc*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct pci_epc*,scalar_t__,scalar_t__) ;

int FUNC_5(struct pci_epc *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 unsigned long VAR_6;

 if (FUNC_0(VAR_1) || VAR_2 >= VAR_1->max_functions ||
     VAR_3 > 32)
  return -VAR_0;

 if (!VAR_1->ops->set_msi)
  return 0;

 VAR_5 = FUNC_1(VAR_3);

 FUNC_2(&VAR_1->lock, VAR_6);
 VAR_4 = VAR_1->ops->set_msi(VAR_1, VAR_2, VAR_5);
 FUNC_3(&VAR_1->lock, VAR_6);

 return VAR_4;
}
