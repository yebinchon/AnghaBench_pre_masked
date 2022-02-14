
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_wqs {int page_paddr; int page_vaddr; int shadow_page_vaddr; struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct hinic_wqs *VAR_0)
{
 struct hinic_hwif *VAR_1 = VAR_0->hwif;
 struct pci_dev *VAR_2 = VAR_1->pdev;

 FUNC_0(&VAR_2->dev, VAR_0->shadow_page_vaddr);
 FUNC_0(&VAR_2->dev, VAR_0->page_vaddr);
 FUNC_0(&VAR_2->dev, VAR_0->page_paddr);
}
