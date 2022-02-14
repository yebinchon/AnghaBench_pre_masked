
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_epf_header {int dummy; } ;
struct pci_epc {scalar_t__ max_functions; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_header ) (struct pci_epc*,scalar_t__,struct pci_epf_header*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pci_epc*,scalar_t__,struct pci_epf_header*) ;

int FUNC_4(struct pci_epc *VAR_1, u8 VAR_2,
    struct pci_epf_header *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 if (FUNC_0(VAR_1) || VAR_2 >= VAR_1->max_functions)
  return -VAR_0;

 if (!VAR_1->ops->write_header)
  return 0;

 FUNC_1(&VAR_1->lock, VAR_5);
 VAR_4 = VAR_1->ops->write_header(VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_1->lock, VAR_5);

 return VAR_4;
}
