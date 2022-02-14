
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev {int dev; } ;
struct hinic_wq {int block_idx; int num_q_pages; scalar_t__ mask; int delta; int prod_idx; int cons_idx; int block_paddr; int shadow_block_vaddr; int block_vaddr; scalar_t__ wqebb_size_shift; scalar_t__ wqebbs_per_page_shift; scalar_t__ num_wqebbs_per_page; scalar_t__ max_wqe_size; scalar_t__ q_depth; scalar_t__ wq_page_size; scalar_t__ wqebb_size; scalar_t__ page_idx; struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_cmdq_pages {struct hinic_hwif* hwif; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct hinic_cmdq_pages*,struct hinic_wq*) ;
 int FUNC_2 (struct hinic_cmdq_pages*,struct hinic_wq*) ;
 int FUNC_3 (struct hinic_cmdq_pages*,struct hinic_wq*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct hinic_wq*,struct hinic_hwif*,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct hinic_cmdq_pages*) ;
 int FUNC_7 (struct hinic_cmdq_pages*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct hinic_wq*,struct hinic_hwif*,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

int FUNC_12(struct hinic_cmdq_pages *VAR_3,
    struct hinic_wq *VAR_4, struct hinic_hwif *VAR_5,
    int VAR_6, u16 VAR_7, u16 VAR_8,
    u16 VAR_9, u16 VAR_10)
{
 struct pci_dev *VAR_11 = VAR_5->pdev;
 u16 VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 int VAR_15, VAR_16, VAR_17 = -VAR_2;

 if (!FUNC_11(VAR_7)) {
  FUNC_8(&VAR_11->dev, "wqebb_size must be power of 2\n");
  return -VAR_1;
 }

 if (VAR_8 == 0) {
  FUNC_8(&VAR_11->dev, "wq_page_size must be > 0\n");
  return -VAR_1;
 }

 if (VAR_9 & (VAR_9 - 1)) {
  FUNC_8(&VAR_11->dev, "WQ q_depth must be power of 2\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_10(VAR_7);
 VAR_13 = FUNC_0(VAR_8, VAR_7)
    >> VAR_14;

 if (!FUNC_11(VAR_13)) {
  FUNC_8(&VAR_11->dev, "num wqebbs per page must be power of 2\n");
  return -VAR_1;
 }

 VAR_3->hwif = VAR_5;

 VAR_17 = FUNC_6(VAR_3);
 if (VAR_17) {
  FUNC_8(&VAR_11->dev, "Failed to allocate CMDQ page\n");
  return VAR_17;
 }
 VAR_12 = FUNC_10(VAR_13);

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  VAR_4[VAR_15].hwif = VAR_5;
  VAR_4[VAR_15].page_idx = 0;
  VAR_4[VAR_15].block_idx = VAR_15;

  VAR_4[VAR_15].wqebb_size = VAR_7;
  VAR_4[VAR_15].wq_page_size = VAR_8;
  VAR_4[VAR_15].q_depth = VAR_9;
  VAR_4[VAR_15].max_wqe_size = VAR_10;
  VAR_4[VAR_15].num_wqebbs_per_page = VAR_13;
  VAR_4[VAR_15].wqebbs_per_page_shift = VAR_12;
  VAR_4[VAR_15].wqebb_size_shift = VAR_14;
  VAR_4[VAR_15].block_vaddr = FUNC_3(VAR_3, &VAR_4[VAR_15]);
  VAR_4[VAR_15].shadow_block_vaddr = FUNC_1(VAR_3, &VAR_4[VAR_15]);
  VAR_4[VAR_15].block_paddr = FUNC_2(VAR_3, &VAR_4[VAR_15]);

  VAR_17 = FUNC_4(&VAR_4[VAR_15], VAR_3->hwif,
         VAR_0);
  if (VAR_17) {
   FUNC_8(&VAR_11->dev, "Failed to alloc CMDQ blocks\n");
   goto err_cmdq_block;
  }

  FUNC_5(&VAR_4[VAR_15].cons_idx, 0);
  FUNC_5(&VAR_4[VAR_15].prod_idx, 0);
  FUNC_5(&VAR_4[VAR_15].delta, VAR_9);
  VAR_4[VAR_15].mask = VAR_9 - 1;
 }

 return 0;

err_cmdq_block:
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
  FUNC_9(&VAR_4[VAR_16], VAR_3->hwif, VAR_4[VAR_16].num_q_pages);

 FUNC_7(VAR_3);
 return VAR_17;
}
