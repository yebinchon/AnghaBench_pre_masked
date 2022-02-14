
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev {int dev; } ;
struct hinic_wqs {struct hinic_hwif* hwif; } ;
struct hinic_wq {int block_idx; int page_idx; scalar_t__ mask; int delta; int prod_idx; int cons_idx; int block_paddr; int shadow_block_vaddr; int block_vaddr; scalar_t__ wqebb_size_shift; void* wqebbs_per_page_shift; scalar_t__ num_wqebbs_per_page; scalar_t__ max_wqe_size; scalar_t__ q_depth; scalar_t__ wq_page_size; scalar_t__ wqebb_size; struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct hinic_wqs*,struct hinic_wq*) ;
 int FUNC_2 (struct hinic_wqs*,struct hinic_wq*) ;
 int FUNC_3 (struct hinic_wqs*,struct hinic_wq*) ;
 int VAR_1 ;
 int FUNC_4 (struct hinic_wq*,struct hinic_hwif*,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct hinic_wqs*,int *,int *) ;
 int FUNC_10 (struct hinic_wqs*,int ,int ) ;

int FUNC_11(struct hinic_wqs *VAR_2, struct hinic_wq *VAR_3,
        u16 VAR_4, u16 VAR_5, u16 VAR_6,
        u16 VAR_7)
{
 struct hinic_hwif *VAR_8 = VAR_2->hwif;
 struct pci_dev *VAR_9 = VAR_8->pdev;
 u16 VAR_10;
 u16 VAR_11;
 int VAR_12;

 if (!FUNC_8(VAR_4)) {
  FUNC_6(&VAR_9->dev, "wqebb_size must be power of 2\n");
  return -VAR_0;
 }

 if (VAR_5 == 0) {
  FUNC_6(&VAR_9->dev, "wq_page_size must be > 0\n");
  return -VAR_0;
 }

 if (VAR_6 & (VAR_6 - 1)) {
  FUNC_6(&VAR_9->dev, "WQ q_depth must be power of 2\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_7(VAR_4);
 VAR_10 = FUNC_0(VAR_5, VAR_4)
    >> VAR_11;

 if (!FUNC_8(VAR_10)) {
  FUNC_6(&VAR_9->dev, "num wqebbs per page must be power of 2\n");
  return -VAR_0;
 }

 VAR_3->hwif = VAR_8;

 VAR_12 = FUNC_9(VAR_2, &VAR_3->page_idx, &VAR_3->block_idx);
 if (VAR_12) {
  FUNC_6(&VAR_9->dev, "Failed to get free wqs next block\n");
  return VAR_12;
 }

 VAR_3->wqebb_size = VAR_4;
 VAR_3->wq_page_size = VAR_5;
 VAR_3->q_depth = VAR_6;
 VAR_3->max_wqe_size = VAR_7;
 VAR_3->num_wqebbs_per_page = VAR_10;
 VAR_3->wqebbs_per_page_shift = FUNC_7(VAR_10);
 VAR_3->wqebb_size_shift = VAR_11;
 VAR_3->block_vaddr = FUNC_3(VAR_2, VAR_3);
 VAR_3->shadow_block_vaddr = FUNC_1(VAR_2, VAR_3);
 VAR_3->block_paddr = FUNC_2(VAR_2, VAR_3);

 VAR_12 = FUNC_4(VAR_3, VAR_2->hwif, VAR_1);
 if (VAR_12) {
  FUNC_6(&VAR_9->dev, "Failed to allocate wq pages\n");
  goto err_alloc_wq_pages;
 }

 FUNC_5(&VAR_3->cons_idx, 0);
 FUNC_5(&VAR_3->prod_idx, 0);
 FUNC_5(&VAR_3->delta, VAR_6);
 VAR_3->mask = VAR_6 - 1;

 return 0;

err_alloc_wq_pages:
 FUNC_10(VAR_2, VAR_3->page_idx, VAR_3->block_idx);
 return VAR_12;
}
