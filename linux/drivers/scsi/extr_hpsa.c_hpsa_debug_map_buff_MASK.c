
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct raid_map_disk_data {int * xor_mult; int ioaccel_handle; } ;
struct raid_map_data {int metadata_disks_per_row; int data_disks_per_row; int row_cnt; int layout_map_count; int dekindex; int flags; int disk_blk_cnt; int disk_starting_blk; int strip_size; int parity_rotation_shift; int phys_blk_shift; int volume_blk_cnt; int volume_blk_size; int structure_size; struct raid_map_disk_data* data; } ;
struct ctlr_info {int raid_offload_debug; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ctlr_info *VAR_1, int VAR_2,
    struct raid_map_data *VAR_3)
{
 struct raid_map_disk_data *VAR_4 = &VAR_3->data[0];
 int VAR_5, VAR_6, VAR_7;
 u16 VAR_8, VAR_9, VAR_10;

 if (VAR_2 != 0)
  return;


 if (VAR_1->raid_offload_debug < 2)
  return;

 FUNC_0(&VAR_1->pdev->dev, "structure_size = %u\n",
    FUNC_2(VAR_3->structure_size));
 FUNC_0(&VAR_1->pdev->dev, "volume_blk_size = %u\n",
   FUNC_2(VAR_3->volume_blk_size));
 FUNC_0(&VAR_1->pdev->dev, "volume_blk_cnt = 0x%llx\n",
   FUNC_3(VAR_3->volume_blk_cnt));
 FUNC_0(&VAR_1->pdev->dev, "physicalBlockShift = %u\n",
   VAR_3->phys_blk_shift);
 FUNC_0(&VAR_1->pdev->dev, "parity_rotation_shift = %u\n",
   VAR_3->parity_rotation_shift);
 FUNC_0(&VAR_1->pdev->dev, "strip_size = %u\n",
   FUNC_1(VAR_3->strip_size));
 FUNC_0(&VAR_1->pdev->dev, "disk_starting_blk = 0x%llx\n",
   FUNC_3(VAR_3->disk_starting_blk));
 FUNC_0(&VAR_1->pdev->dev, "disk_blk_cnt = 0x%llx\n",
   FUNC_3(VAR_3->disk_blk_cnt));
 FUNC_0(&VAR_1->pdev->dev, "data_disks_per_row = %u\n",
   FUNC_1(VAR_3->data_disks_per_row));
 FUNC_0(&VAR_1->pdev->dev, "metadata_disks_per_row = %u\n",
   FUNC_1(VAR_3->metadata_disks_per_row));
 FUNC_0(&VAR_1->pdev->dev, "row_cnt = %u\n",
   FUNC_1(VAR_3->row_cnt));
 FUNC_0(&VAR_1->pdev->dev, "layout_map_count = %u\n",
   FUNC_1(VAR_3->layout_map_count));
 FUNC_0(&VAR_1->pdev->dev, "flags = 0x%x\n",
   FUNC_1(VAR_3->flags));
 FUNC_0(&VAR_1->pdev->dev, "encryption = %s\n",
   FUNC_1(VAR_3->flags) &
   VAR_0 ? "ON" : "OFF");
 FUNC_0(&VAR_1->pdev->dev, "dekindex = %u\n",
   FUNC_1(VAR_3->dekindex));
 VAR_8 = FUNC_1(VAR_3->layout_map_count);
 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  FUNC_0(&VAR_1->pdev->dev, "Map%u:\n", VAR_5);
  VAR_9 = FUNC_1(VAR_3->row_cnt);
  for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
   FUNC_0(&VAR_1->pdev->dev, "  Row%u:\n", VAR_6);
   VAR_10 =
    FUNC_1(VAR_3->data_disks_per_row);
   for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++, VAR_4++)
    FUNC_0(&VAR_1->pdev->dev,
     "    D%02u: h=0x%04x xor=%u,%u\n",
     VAR_7, VAR_4->ioaccel_handle,
     VAR_4->xor_mult[0], VAR_4->xor_mult[1]);
   VAR_10 =
    FUNC_1(VAR_3->metadata_disks_per_row);
   for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++, VAR_4++)
    FUNC_0(&VAR_1->pdev->dev,
     "    M%02u: h=0x%04x xor=%u,%u\n",
     VAR_7, VAR_4->ioaccel_handle,
     VAR_4->xor_mult[0], VAR_4->xor_mult[1]);
  }
 }
}
