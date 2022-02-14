
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct pbr_sector_t {scalar_t__ bpb; } ;
struct fs_info_t {int sectors_per_clu_bits; int cluster_size_bits; int cluster_size; int num_FAT_sectors; int FAT1_start_sector; int PBR_sector; int FAT2_start_sector; int root_start_sector; int data_start_sector; int num_sectors; int num_clusters; int dentries_in_root; int dentries_per_clu; int clu_srch_ptr; int * fs_func; int used_clusters; int vol_flag; scalar_t__ root_dir; void* vol_id; int vol_type; int sectors_per_clu; } ;
struct bpb16_t {int num_fats; int num_root_entries; int vol_serial; int num_huge_sectors; int num_sectors; int num_reserved; int num_fat_sectors; int sectors_per_clu; } ;
struct bd_info_t {int sector_size_bits; } ;
typedef int s32 ;
struct TYPE_2__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;

s32 FUNC_4(struct super_block *VAR_9, struct pbr_sector_t *VAR_10)
{
 s32 VAR_11, VAR_12;
 struct bpb16_t *VAR_13 = (struct bpb16_t *)VAR_10->bpb;
 struct fs_info_t *VAR_14 = &(FUNC_0(VAR_9)->fs_info);
 struct bd_info_t *VAR_15 = &(FUNC_0(VAR_9)->bd_info);

 if (VAR_13->num_fats == 0)
  return VAR_4;

 VAR_12 = FUNC_1(VAR_13->num_root_entries) << VAR_0;
 VAR_12 = ((VAR_12 - 1) >>
       VAR_15->sector_size_bits) + 1;

 VAR_14->sectors_per_clu = VAR_13->sectors_per_clu;
 VAR_14->sectors_per_clu_bits = FUNC_3(VAR_13->sectors_per_clu);
 VAR_14->cluster_size_bits = VAR_14->sectors_per_clu_bits +
      VAR_15->sector_size_bits;
 VAR_14->cluster_size = 1 << VAR_14->cluster_size_bits;

 VAR_14->num_FAT_sectors = FUNC_1(VAR_13->num_fat_sectors);

 VAR_14->FAT1_start_sector = VAR_14->PBR_sector + FUNC_1(VAR_13->num_reserved);
 if (VAR_13->num_fats == 1)
  VAR_14->FAT2_start_sector = VAR_14->FAT1_start_sector;
 else
  VAR_14->FAT2_start_sector = VAR_14->FAT1_start_sector +
       VAR_14->num_FAT_sectors;

 VAR_14->root_start_sector = VAR_14->FAT2_start_sector +
      VAR_14->num_FAT_sectors;
 VAR_14->data_start_sector = VAR_14->root_start_sector + VAR_12;

 VAR_14->num_sectors = FUNC_1(VAR_13->num_sectors);
 if (VAR_14->num_sectors == 0)
  VAR_14->num_sectors = FUNC_2(VAR_13->num_huge_sectors);

 VAR_11 = VAR_14->data_start_sector - VAR_14->PBR_sector;
 VAR_14->num_clusters = ((VAR_14->num_sectors - VAR_11) >>
         VAR_14->sectors_per_clu_bits) + 2;


 if (VAR_14->num_clusters < VAR_2)
  VAR_14->vol_type = VAR_1;
 else
  VAR_14->vol_type = VAR_3;
 VAR_14->vol_id = FUNC_2(VAR_13->vol_serial);

 VAR_14->root_dir = 0;
 VAR_14->dentries_in_root = FUNC_1(VAR_13->num_root_entries);
 VAR_14->dentries_per_clu = 1 << (VAR_14->cluster_size_bits -
           VAR_0);

 VAR_14->vol_flag = VAR_7;
 VAR_14->clu_srch_ptr = 2;
 VAR_14->used_clusters = VAR_6;

 VAR_14->fs_func = &VAR_8;

 return VAR_5;
}
