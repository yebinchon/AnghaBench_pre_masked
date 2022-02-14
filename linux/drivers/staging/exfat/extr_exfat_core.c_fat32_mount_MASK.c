
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct pbr_sector_t {scalar_t__ bpb; } ;
struct fs_info_t {int sectors_per_clu_bits; int cluster_size_bits; int cluster_size; int num_FAT_sectors; int FAT1_start_sector; int PBR_sector; int FAT2_start_sector; int root_start_sector; int data_start_sector; int num_sectors; int num_clusters; int dentries_per_clu; int clu_srch_ptr; int * fs_func; int used_clusters; int vol_flag; scalar_t__ dentries_in_root; void* root_dir; void* vol_id; int vol_type; int sectors_per_clu; } ;
struct bpb32_t {int num_fats; int root_cluster; int vol_serial; int num_huge_sectors; int num_reserved; int num_fat32_sectors; int sectors_per_clu; } ;
struct bd_info_t {int sector_size_bits; } ;
typedef int s32 ;
struct TYPE_2__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;

s32 FUNC_4(struct super_block *VAR_7, struct pbr_sector_t *VAR_8)
{
 s32 VAR_9;
 struct bpb32_t *VAR_10 = (struct bpb32_t *)VAR_8->bpb;
 struct fs_info_t *VAR_11 = &(FUNC_0(VAR_7)->fs_info);
 struct bd_info_t *VAR_12 = &(FUNC_0(VAR_7)->bd_info);

 if (VAR_10->num_fats == 0)
  return VAR_2;

 VAR_11->sectors_per_clu = VAR_10->sectors_per_clu;
 VAR_11->sectors_per_clu_bits = FUNC_3(VAR_10->sectors_per_clu);
 VAR_11->cluster_size_bits = VAR_11->sectors_per_clu_bits +
      VAR_12->sector_size_bits;
 VAR_11->cluster_size = 1 << VAR_11->cluster_size_bits;

 VAR_11->num_FAT_sectors = FUNC_2(VAR_10->num_fat32_sectors);

 VAR_11->FAT1_start_sector = VAR_11->PBR_sector + FUNC_1(VAR_10->num_reserved);
 if (VAR_10->num_fats == 1)
  VAR_11->FAT2_start_sector = VAR_11->FAT1_start_sector;
 else
  VAR_11->FAT2_start_sector = VAR_11->FAT1_start_sector +
       VAR_11->num_FAT_sectors;

 VAR_11->root_start_sector = VAR_11->FAT2_start_sector +
      VAR_11->num_FAT_sectors;
 VAR_11->data_start_sector = VAR_11->root_start_sector;

 VAR_11->num_sectors = FUNC_2(VAR_10->num_huge_sectors);
 VAR_9 = VAR_11->data_start_sector - VAR_11->PBR_sector;

 VAR_11->num_clusters = ((VAR_11->num_sectors - VAR_9) >>
         VAR_11->sectors_per_clu_bits) + 2;


 VAR_11->vol_type = VAR_1;
 VAR_11->vol_id = FUNC_2(VAR_10->vol_serial);

 VAR_11->root_dir = FUNC_2(VAR_10->root_cluster);
 VAR_11->dentries_in_root = 0;
 VAR_11->dentries_per_clu = 1 << (VAR_11->cluster_size_bits -
           VAR_0);

 VAR_11->vol_flag = VAR_5;
 VAR_11->clu_srch_ptr = 2;
 VAR_11->used_clusters = VAR_4;

 VAR_11->fs_func = &VAR_6;

 return VAR_3;
}
