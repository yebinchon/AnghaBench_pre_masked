
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf {int func_no; int list; struct pci_epc* epc; } ;
struct pci_epc {int max_functions; int lock; int pci_epf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct pci_epc *VAR_2, struct pci_epf *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->epc)
  return -VAR_0;

 if (FUNC_0(VAR_2))
  return -VAR_1;

 if (VAR_3->func_no > VAR_2->max_functions - 1)
  return -VAR_1;

 VAR_3->epc = VAR_2;

 FUNC_2(&VAR_2->lock, VAR_4);
 FUNC_1(&VAR_3->list, &VAR_2->pci_epf);
 FUNC_3(&VAR_2->lock, VAR_4);

 return 0;
}
