
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_pme_service_data {int noirq; int lock; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0,
           struct pcie_pme_service_data *VAR_1)
{
 FUNC_2(&VAR_1->lock);
 FUNC_1(VAR_0, 0);
 FUNC_0(VAR_0);
 VAR_1->noirq = 1;
 FUNC_3(&VAR_1->lock);
}
