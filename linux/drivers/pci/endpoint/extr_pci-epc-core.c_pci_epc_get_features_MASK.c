
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_epc_features {int dummy; } ;
struct pci_epc {scalar_t__ max_functions; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {struct pci_epc_features* (* get_features ) (struct pci_epc*,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct pci_epc_features* FUNC_3 (struct pci_epc*,scalar_t__) ;

const struct pci_epc_features *FUNC_4(struct pci_epc *VAR_0,
          u8 VAR_1)
{
 const struct pci_epc_features *VAR_2;
 unsigned long VAR_3;

 if (FUNC_0(VAR_0) || VAR_1 >= VAR_0->max_functions)
  return ((void*)0);

 if (!VAR_0->ops->get_features)
  return ((void*)0);

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_2 = VAR_0->ops->get_features(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_3);

 return VAR_2;
}
