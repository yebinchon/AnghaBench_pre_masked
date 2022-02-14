
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dev; } ;
struct hinic_wq {void** shadow_block_vaddr; int wq_page_size; int * block_vaddr; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,void*,scalar_t__) ;
 int FUNC_2 (struct hinic_wq*) ;

__attribute__((used)) static void FUNC_3(struct hinic_wq *VAR_0, struct hinic_hwif *VAR_1,
     int VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pdev;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  void **VAR_5 = &VAR_0->shadow_block_vaddr[VAR_4];
  u64 *VAR_6 = &VAR_0->block_vaddr[VAR_4];
  dma_addr_t VAR_7;

  VAR_7 = (dma_addr_t)FUNC_0(*VAR_6);
  FUNC_1(&VAR_3->dev, VAR_0->wq_page_size, *VAR_5,
      VAR_7);
 }

 FUNC_2(VAR_0);
}
