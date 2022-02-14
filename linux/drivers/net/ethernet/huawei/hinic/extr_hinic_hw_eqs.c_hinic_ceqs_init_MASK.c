
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct msix_entry {int dummy; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_ceqs {int num_ceqs; int * ceq; struct hinic_hwif* hwif; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hinic_hwif*,int ,int,int ,int ,struct msix_entry) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct hinic_ceqs *VAR_1, struct hinic_hwif *VAR_2,
      int VAR_3, u32 VAR_4, u32 VAR_5,
      struct msix_entry *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_2->pdev;
 int VAR_8, VAR_9, VAR_10;

 VAR_1->hwif = VAR_2;
 VAR_1->num_ceqs = VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_10 = FUNC_1(&VAR_1->ceq[VAR_9], VAR_2, VAR_0, VAR_9, VAR_4,
         VAR_5, VAR_6[VAR_9]);
  if (VAR_10) {
   FUNC_0(&VAR_7->dev, "Failed to init ceq %d\n", VAR_9);
   goto err_init_ceq;
  }
 }

 return 0;

err_init_ceq:
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  FUNC_2(&VAR_1->ceq[VAR_8]);

 return VAR_10;
}
