
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_wqs {int * shadow_page_vaddr; scalar_t__* page_paddr; int * page_vaddr; struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hinic_wqs *VAR_1, int VAR_2)
{
 struct hinic_hwif *VAR_3 = VAR_1->hwif;
 struct pci_dev *VAR_4 = VAR_3->pdev;

 FUNC_0(&VAR_4->dev, VAR_0,
     VAR_1->page_vaddr[VAR_2],
     (dma_addr_t)VAR_1->page_paddr[VAR_2]);
 FUNC_1(VAR_1->shadow_page_vaddr[VAR_2]);
}
