
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_cmdq_pages {int shadow_page_vaddr; scalar_t__ page_paddr; int page_vaddr; struct hinic_hwif* hwif; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hinic_cmdq_pages *VAR_1)
{
 struct hinic_hwif *VAR_2 = VAR_1->hwif;
 struct pci_dev *VAR_3 = VAR_2->pdev;

 FUNC_0(&VAR_3->dev, VAR_0,
     VAR_1->page_vaddr,
     (dma_addr_t)VAR_1->page_paddr);
 FUNC_1(VAR_1->shadow_page_vaddr);
}
