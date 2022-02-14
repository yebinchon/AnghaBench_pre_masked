
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {scalar_t__ s_desc_size; int s_csum_seed; } ;
struct ext4_group_desc {void* bg_block_bitmap_csum_hi; void* bg_block_bitmap_csum_lo; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext4_group_t ;
typedef int __u8 ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ext4_sb_info*,int ,int *,int) ;
 int FUNC_4 (struct super_block*) ;

void FUNC_5(struct super_block *VAR_1, ext4_group_t VAR_2,
    struct ext4_group_desc *VAR_3,
    struct buffer_head *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_1) / 8;
 __u32 VAR_6;
 struct ext4_sb_info *VAR_7 = FUNC_1(VAR_1);

 if (!FUNC_4(VAR_1))
  return;

 VAR_6 = FUNC_3(VAR_7, VAR_7->s_csum_seed, (__u8 *)VAR_4->b_data, VAR_5);
 VAR_3->bg_block_bitmap_csum_lo = FUNC_2(VAR_6 & 0xFFFF);
 if (VAR_7->s_desc_size >= VAR_0)
  VAR_3->bg_block_bitmap_csum_hi = FUNC_2(VAR_6 >> 16);
}
