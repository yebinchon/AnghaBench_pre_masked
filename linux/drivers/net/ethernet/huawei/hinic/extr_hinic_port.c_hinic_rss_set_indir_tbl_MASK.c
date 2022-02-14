
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct pci_dev {int dev; } ;
struct hinic_rss_indirect_tbl {size_t* entry; void* size; void* offset; void* group_index; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_func_to_io {int cmdqs; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; struct hinic_func_to_io func_to_io; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
struct hinic_cmdq_buf {int size; struct hinic_rss_indirect_tbl* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct hinic_cmdq_buf*) ;
 int FUNC_3 (int *,int ,int ,struct hinic_cmdq_buf*,scalar_t__*) ;
 int FUNC_4 (int *,struct hinic_cmdq_buf*) ;
 int FUNC_5 (size_t*,size_t*,size_t) ;

int FUNC_6(struct hinic_dev *VAR_4, u32 VAR_5,
       const u32 *VAR_6)
{
 struct hinic_rss_indirect_tbl *VAR_7;
 struct hinic_func_to_io *VAR_8;
 struct hinic_cmdq_buf VAR_9;
 struct hinic_hwdev *VAR_10;
 struct hinic_hwif *VAR_11;
 struct pci_dev *VAR_12;
 u32 VAR_13;
 u64 VAR_14;
 int VAR_15, VAR_16;
 u32 *VAR_17;

 VAR_10 = VAR_4->hwdev;
 VAR_8 = &VAR_10->func_to_io;
 VAR_11 = VAR_10->hwif;
 VAR_12 = VAR_11->pdev;

 VAR_15 = FUNC_2(&VAR_8->cmdqs, &VAR_9);
 if (VAR_15) {
  FUNC_1(&VAR_12->dev, "Failed to allocate cmdq buf\n");
  return VAR_15;
 }

 VAR_9.size = sizeof(*VAR_7);

 VAR_7 = VAR_9.buf;
 VAR_7->group_index = FUNC_0(VAR_5);

 for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
  VAR_7->entry[VAR_16] = VAR_6[VAR_16];

  if (0x3 == (VAR_16 & 0x3)) {
   VAR_17 = (u32 *)&VAR_7->entry[VAR_16 - 3];
   *VAR_17 = FUNC_0(*VAR_17);
  }
 }


 VAR_13 = VAR_2 / 2;
 VAR_7->offset = 0;
 VAR_7->size = FUNC_0(VAR_13);

 VAR_15 = FUNC_3(&VAR_8->cmdqs, VAR_1,
         VAR_3,
         &VAR_9, &VAR_14);
 if (VAR_15 || VAR_14 != 0) {
  FUNC_1(&VAR_12->dev, "Failed to set rss indir table\n");
  VAR_15 = -VAR_0;
  goto free_buf;
 }

 VAR_7->offset = FUNC_0(VAR_13);
 VAR_7->size = FUNC_0(VAR_13);
 FUNC_5(&VAR_7->entry[0], &VAR_7->entry[VAR_13], VAR_13);

 VAR_15 = FUNC_3(&VAR_8->cmdqs, VAR_1,
         VAR_3,
         &VAR_9, &VAR_14);
 if (VAR_15 || VAR_14 != 0) {
  FUNC_1(&VAR_12->dev, "Failed to set rss indir table\n");
  VAR_15 = -VAR_0;
 }

free_buf:
 FUNC_4(&VAR_8->cmdqs, &VAR_9);

 return VAR_15;
}
