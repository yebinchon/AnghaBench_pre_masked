
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_instance {int num_hrrq; scalar_t__ interrupt_mode; int * hrrq_vector; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static
void FUNC_3(struct pmcraid_instance *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_hrrq; VAR_2++)
  FUNC_0(FUNC_2(VAR_1, VAR_2), &VAR_0->hrrq_vector[VAR_2]);

 VAR_0->interrupt_mode = 0;
 FUNC_1(VAR_1);
}
