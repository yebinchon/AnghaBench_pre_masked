
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf {int * epc; int list; } ;
struct pci_epc {int lock; } ;


 scalar_t__ FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct pci_epc *VAR_0, struct pci_epf *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_0 || FUNC_0(VAR_0) || !VAR_1)
  return;

 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_1(&VAR_1->list);
 VAR_1->epc = ((void*)0);
 FUNC_3(&VAR_0->lock, VAR_2);
}
