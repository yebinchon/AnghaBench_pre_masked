
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_wqs {int num_pages; void* page_paddr; void* page_vaddr; void* shadow_page_vaddr; struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int *,size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct hinic_wqs *VAR_2)
{
 struct hinic_hwif *VAR_3 = VAR_2->hwif;
 struct pci_dev *VAR_4 = VAR_3->pdev;
 size_t VAR_5;

 VAR_5 = VAR_2->num_pages * sizeof(*VAR_2->page_paddr);
 VAR_2->page_paddr = FUNC_1(&VAR_4->dev, VAR_5, VAR_1);
 if (!VAR_2->page_paddr)
  return -VAR_0;

 VAR_5 = VAR_2->num_pages * sizeof(*VAR_2->page_vaddr);
 VAR_2->page_vaddr = FUNC_1(&VAR_4->dev, VAR_5, VAR_1);
 if (!VAR_2->page_vaddr)
  goto err_page_vaddr;

 VAR_5 = VAR_2->num_pages * sizeof(*VAR_2->shadow_page_vaddr);
 VAR_2->shadow_page_vaddr = FUNC_1(&VAR_4->dev, VAR_5, VAR_1);
 if (!VAR_2->shadow_page_vaddr)
  goto err_page_shadow_vaddr;

 return 0;

err_page_shadow_vaddr:
 FUNC_0(&VAR_4->dev, VAR_2->page_vaddr);

err_page_vaddr:
 FUNC_0(&VAR_4->dev, VAR_2->page_paddr);
 return -VAR_0;
}
