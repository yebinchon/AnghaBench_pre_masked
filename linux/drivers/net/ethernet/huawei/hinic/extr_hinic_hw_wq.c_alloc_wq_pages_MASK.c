
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dev; } ;
struct hinic_wq {int wq_page_size; int num_q_pages; void** shadow_block_vaddr; int * block_vaddr; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hinic_wq*) ;
 int FUNC_2 (struct hinic_wq*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (struct hinic_wq*,struct hinic_hwif*,int) ;

__attribute__((used)) static int FUNC_7(struct hinic_wq *VAR_3, struct hinic_hwif *VAR_4,
     int VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->pdev;
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_0(FUNC_1(VAR_3), VAR_3->wq_page_size) / VAR_3->wq_page_size;
 if (VAR_9 > VAR_5) {
  FUNC_4(&VAR_6->dev, "Number wq pages exceeds the limit\n");
  return -VAR_0;
 }

 if (VAR_9 & (VAR_9 - 1)) {
  FUNC_4(&VAR_6->dev, "Number wq pages must be power of 2\n");
  return -VAR_0;
 }

 VAR_3->num_q_pages = VAR_9;

 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8) {
  FUNC_4(&VAR_6->dev, "Failed to allocate wqe shadow\n");
  return VAR_8;
 }

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  void **VAR_10 = &VAR_3->shadow_block_vaddr[VAR_7];
  u64 *VAR_11 = &VAR_3->block_vaddr[VAR_7];
  dma_addr_t VAR_12;

  *VAR_10 = FUNC_5(&VAR_6->dev, VAR_3->wq_page_size,
         &VAR_12, VAR_2);
  if (!*VAR_10) {
   FUNC_4(&VAR_6->dev, "Failed to allocate wq page\n");
   goto err_alloc_wq_pages;
  }


  *VAR_11 = FUNC_3(VAR_12);
 }

 return 0;

err_alloc_wq_pages:
 FUNC_6(VAR_3, VAR_4, VAR_7);
 return -VAR_1;
}
