
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {scalar_t__ s_desc_size; int s_csum_seed; } ;
struct ext4_group_desc {int bg_block_bitmap_csum_hi; int bg_block_bitmap_csum_lo; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext4_group_t ;
typedef int __u8 ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct ext4_sb_info*,int ,int *,int) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct super_block *VAR_1, ext4_group_t VAR_2,
      struct ext4_group_desc *VAR_3,
      struct buffer_head *VAR_4)
{
 __u32 VAR_5;
 __u32 VAR_6, VAR_7;
 struct ext4_sb_info *VAR_8 = FUNC_1(VAR_1);
 int VAR_9 = FUNC_0(VAR_1) / 8;

 if (!FUNC_3(VAR_1))
  return 1;

 VAR_6 = FUNC_4(VAR_3->bg_block_bitmap_csum_lo);
 VAR_7 = FUNC_2(VAR_8, VAR_8->s_csum_seed, (__u8 *)VAR_4->b_data, VAR_9);
 if (VAR_8->s_desc_size >= VAR_0) {
  VAR_5 = FUNC_4(VAR_3->bg_block_bitmap_csum_hi);
  VAR_6 |= (VAR_5 << 16);
 } else
  VAR_7 &= 0xFFFF;

 if (VAR_6 == VAR_7)
  return 1;

 return 0;
}
