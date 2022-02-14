
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_eq {int num_pages; int * dma_addr; int * virt_addr; int page_size; struct hinic_hwif* hwif; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hinic_eq *VAR_0)
{
 struct hinic_hwif *VAR_1 = VAR_0->hwif;
 struct pci_dev *VAR_2 = VAR_1->pdev;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_pages; VAR_3++)
  FUNC_1(&VAR_2->dev, VAR_0->page_size,
      VAR_0->virt_addr[VAR_3],
      VAR_0->dma_addr[VAR_3]);

 FUNC_0(&VAR_2->dev, VAR_0->virt_addr);
 FUNC_0(&VAR_2->dev, VAR_0->dma_addr);
}
