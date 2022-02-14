
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_wqs {int num_pages; int free_blocks; struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hinic_wqs*) ;
 int FUNC_2 (struct hinic_wqs*,int) ;

void FUNC_3(struct hinic_wqs *VAR_0)
{
 struct hinic_hwif *VAR_1 = VAR_0->hwif;
 struct pci_dev *VAR_2 = VAR_1->pdev;
 int VAR_3;

 FUNC_0(&VAR_2->dev, VAR_0->free_blocks);

 for (VAR_3 = 0; VAR_3 < VAR_0->num_pages; VAR_3++)
  FUNC_2(VAR_0, VAR_3);

 FUNC_1(VAR_0);
}
