
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int s_bdev; } ;
struct fs_info_t {int dev_ejected; } ;
struct bd_info_t {int sector_size_bits; int opened; } ;
struct exfat_sb_info {long debug_flags; struct fs_info_t fs_info; struct bd_info_t bd_info; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 long VAR_0 ;
 struct exfat_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 struct buffer_head* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (int ,int ,int) ;

int FUNC_5(struct super_block *VAR_2, sector_t VAR_3, struct buffer_head **VAR_4,
       u32 VAR_5, bool VAR_6)
{
 struct bd_info_t *VAR_7 = &(FUNC_0(VAR_2)->bd_info);
 struct fs_info_t *VAR_8 = &(FUNC_0(VAR_2)->fs_info);
 if (!VAR_7->opened)
  return VAR_1;

 if (*VAR_4)
  FUNC_3(*VAR_4);

 if (VAR_6)
  *VAR_4 = FUNC_2(VAR_2->s_bdev, VAR_3,
         VAR_5 << VAR_7->sector_size_bits);
 else
  *VAR_4 = FUNC_4(VAR_2->s_bdev, VAR_3,
          VAR_5 << VAR_7->sector_size_bits);

 if (*VAR_4)
  return 0;

 FUNC_1(!VAR_8->dev_ejected,
      "[EXFAT] No bh, device seems wrong or to be ejected.\n");

 return VAR_1;
}
