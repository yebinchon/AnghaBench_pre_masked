
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {int vol_id; int state; int info_sector; int root_cluster; int length; } ;
struct TYPE_3__ {int vol_id; int state; } ;
struct fat_boot_sector {int sec_per_clus; scalar_t__ media; TYPE_2__ fat32; TYPE_1__ fat16; int total_sect; int fat_length; int sectors; int dir_entries; int fats; int reserved; int sector_size; } ;
struct fat_bios_param_block {int fat_sector_size; int fat_sec_per_clus; int fat_fats; void* fat_reserved; void* fat32_vol_id; int fat32_state; void* fat32_info_sector; void* fat32_root_cluster; void* fat32_length; void* fat16_vol_id; int fat16_state; void* fat_total_sect; void* fat_fat_length; void* fat_sectors; void* fat_dir_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,int ,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct fat_bios_param_block*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_2, struct fat_boot_sector *VAR_3,
 int VAR_4, struct fat_bios_param_block *VAR_5)
{
 int VAR_6 = -VAR_0;


 FUNC_7(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->fat_sector_size = FUNC_2(&VAR_3->sector_size);
 VAR_5->fat_sec_per_clus = VAR_3->sec_per_clus;
 VAR_5->fat_reserved = FUNC_5(VAR_3->reserved);
 VAR_5->fat_fats = VAR_3->fats;
 VAR_5->fat_dir_entries = FUNC_2(&VAR_3->dir_entries);
 VAR_5->fat_sectors = FUNC_2(&VAR_3->sectors);
 VAR_5->fat_fat_length = FUNC_5(VAR_3->fat_length);
 VAR_5->fat_total_sect = FUNC_6(VAR_3->total_sect);

 VAR_5->fat16_state = VAR_3->fat16.state;
 VAR_5->fat16_vol_id = FUNC_3(VAR_3->fat16.vol_id);

 VAR_5->fat32_length = FUNC_6(VAR_3->fat32.length);
 VAR_5->fat32_root_cluster = FUNC_6(VAR_3->fat32.root_cluster);
 VAR_5->fat32_info_sector = FUNC_5(VAR_3->fat32.info_sector);
 VAR_5->fat32_state = VAR_3->fat32.state;
 VAR_5->fat32_vol_id = FUNC_3(VAR_3->fat32.vol_id);


 if (!VAR_5->fat_reserved) {
  if (!VAR_4)
   FUNC_0(VAR_2, VAR_1,
    "bogus number of reserved sectors");
  goto out;
 }
 if (!VAR_5->fat_fats) {
  if (!VAR_4)
   FUNC_0(VAR_2, VAR_1, "bogus number of FAT structure");
  goto out;
 }






 if (!FUNC_1(VAR_3->media)) {
  if (!VAR_4)
   FUNC_0(VAR_2, VAR_1, "invalid media value (0x%02x)",
    (unsigned)VAR_3->media);
  goto out;
 }

 if (!FUNC_4(VAR_5->fat_sector_size)
     || (VAR_5->fat_sector_size < 512)
     || (VAR_5->fat_sector_size > 4096)) {
  if (!VAR_4)
   FUNC_0(VAR_2, VAR_1, "bogus logical sector size %u",
          (unsigned)VAR_5->fat_sector_size);
  goto out;
 }

 if (!FUNC_4(VAR_5->fat_sec_per_clus)) {
  if (!VAR_4)
   FUNC_0(VAR_2, VAR_1, "bogus sectors per cluster %u",
    (unsigned)VAR_5->fat_sec_per_clus);
  goto out;
 }

 VAR_6 = 0;

out:
 return VAR_6;
}
