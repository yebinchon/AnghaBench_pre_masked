
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {int nvectors; int * hrrq; struct pci_dev* pdev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct ipr_ioa_cfg *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nvectors; VAR_2++)
  FUNC_0(FUNC_2(VAR_1, VAR_2), &VAR_0->hrrq[VAR_2]);
 FUNC_1(VAR_1);
}
