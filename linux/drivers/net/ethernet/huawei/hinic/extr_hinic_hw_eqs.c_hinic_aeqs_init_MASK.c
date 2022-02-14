
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct msix_entry {int dummy; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_aeqs {int num_aeqs; int workq; int * aeq; struct hinic_hwif* hwif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,struct hinic_hwif*,int ,int,int ,int ,struct msix_entry) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct hinic_aeqs *VAR_3, struct hinic_hwif *VAR_4,
      int VAR_5, u32 VAR_6, u32 VAR_7,
      struct msix_entry *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_4->pdev;
 int VAR_10, VAR_11, VAR_12;

 VAR_3->workq = FUNC_0(VAR_2);
 if (!VAR_3->workq)
  return -VAR_0;

 VAR_3->hwif = VAR_4;
 VAR_3->num_aeqs = VAR_5;

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_10 = FUNC_3(&VAR_3->aeq[VAR_12], VAR_4, VAR_1, VAR_12, VAR_6,
         VAR_7, VAR_8[VAR_12]);
  if (VAR_10) {
   FUNC_2(&VAR_9->dev, "Failed to init aeq %d\n", VAR_12);
   goto err_init_aeq;
  }
 }

 return 0;

err_init_aeq:
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
  FUNC_4(&VAR_3->aeq[VAR_11]);

 FUNC_1(VAR_3->workq);
 return VAR_10;
}
