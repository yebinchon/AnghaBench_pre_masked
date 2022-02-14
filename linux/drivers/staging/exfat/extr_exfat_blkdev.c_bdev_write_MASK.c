
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int s_bdev; } ;
struct fs_info_t {int dev_ejected; } ;
struct bd_info_t {int sector_size_bits; int opened; } ;
struct exfat_sb_info {long debug_flags; struct fs_info_t fs_info; struct bd_info_t bd_info; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_data; } ;
typedef scalar_t__ sector_t ;
typedef int s32 ;


 long VAR_0 ;
 struct exfat_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;

int FUNC_10(struct super_block *VAR_2, sector_t VAR_3, struct buffer_head *VAR_4,
        u32 VAR_5, bool VAR_6)
{
 s32 VAR_7;
 struct buffer_head *VAR_8;
 struct bd_info_t *VAR_9 = &(FUNC_0(VAR_2)->bd_info);
 struct fs_info_t *VAR_10 = &(FUNC_0(VAR_2)->fs_info);
 if (!VAR_9->opened)
  return VAR_1;

 if (VAR_3 == VAR_4->b_blocknr) {
  FUNC_4(VAR_4);
  FUNC_7(VAR_4);
  FUNC_5(VAR_4);
  FUNC_9(VAR_4);
  if (VAR_6 && (FUNC_8(VAR_4) != 0))
   return VAR_1;
 } else {
  VAR_7 = VAR_5 << VAR_9->sector_size_bits;

  VAR_8 = FUNC_3(VAR_2->s_bdev, VAR_3, VAR_7);
  if (!VAR_8)
   goto no_bh;

  FUNC_4(VAR_8);
  FUNC_6(VAR_8->b_data, VAR_4->b_data, VAR_7);
  FUNC_7(VAR_8);
  FUNC_5(VAR_8);
  FUNC_9(VAR_8);
  if (VAR_6 && (FUNC_8(VAR_8) != 0)) {
   FUNC_2(VAR_8);
   goto no_bh;
  }
  FUNC_2(VAR_8);
 }

 return 0;

no_bh:
 FUNC_1(!VAR_10->dev_ejected,
      "[EXFAT] No bh, device seems wrong or to be ejected.\n");

 return VAR_1;
}
