
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_wqs {int num_pages; int free_blocks; struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hinic_wqs*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct hinic_wqs*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct hinic_wqs*) ;
 int FUNC_6 (struct hinic_wqs*) ;
 int FUNC_7 (struct hinic_wqs*,int) ;
 int FUNC_8 (struct hinic_wqs*,int) ;

int FUNC_9(struct hinic_wqs *VAR_5, int VAR_6,
      struct hinic_hwif *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->pdev;
 int VAR_9, VAR_10, VAR_11;

 VAR_6 = FUNC_0(VAR_6, VAR_3);
 if (VAR_6 > VAR_4) {
  FUNC_3(&VAR_8->dev, "Invalid max_wqs = %d\n", VAR_6);
  return -VAR_0;
 }

 VAR_5->hwif = VAR_7;
 VAR_5->num_pages = VAR_6 / VAR_3;

 if (FUNC_2(VAR_5)) {
  FUNC_3(&VAR_8->dev,
   "Failed to allocate mem for page addresses\n");
  return -VAR_1;
 }

 for (VAR_11 = 0; VAR_11 < VAR_5->num_pages; VAR_11++) {
  VAR_9 = FUNC_7(VAR_5, VAR_11);
  if (VAR_9) {
   FUNC_3(&VAR_8->dev, "Failed wq page allocation\n");
   goto err_wq_allocate_page;
  }
 }

 VAR_5->free_blocks = FUNC_4(&VAR_8->dev, FUNC_1(VAR_5),
     VAR_2);
 if (!VAR_5->free_blocks) {
  VAR_9 = -VAR_1;
  goto err_alloc_blocks;
 }

 FUNC_6(VAR_5);
 return 0;

err_alloc_blocks:
err_wq_allocate_page:
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  FUNC_8(VAR_5, VAR_10);

 FUNC_5(VAR_5);
 return VAR_9;
}
