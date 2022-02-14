
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {scalar_t__ s_desc_size; int s_csum_seed; } ;
struct ext4_group_desc {int bg_inode_bitmap_csum_hi; int bg_inode_bitmap_csum_lo; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext4_group_t ;
typedef int __u8 ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct ext4_sb_info*,int ,int *,int) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct super_block *VAR_1, ext4_group_t VAR_2,
      struct ext4_group_desc *VAR_3,
      struct buffer_head *VAR_4, int VAR_5)
{
 __u32 VAR_6;
 __u32 VAR_7, VAR_8;
 struct ext4_sb_info *VAR_9 = FUNC_0(VAR_1);

 if (!FUNC_2(VAR_1))
  return 1;

 VAR_7 = FUNC_3(VAR_3->bg_inode_bitmap_csum_lo);
 VAR_8 = FUNC_1(VAR_9, VAR_9->s_csum_seed, (__u8 *)VAR_4->b_data, VAR_5);
 if (VAR_9->s_desc_size >= VAR_0) {
  VAR_6 = FUNC_3(VAR_3->bg_inode_bitmap_csum_hi);
  VAR_7 |= (VAR_6 << 16);
 } else
  VAR_8 &= 0xFFFF;

 return VAR_7 == VAR_8;
}
