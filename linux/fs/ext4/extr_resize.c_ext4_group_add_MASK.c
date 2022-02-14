
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ext4_super_block {int s_reserved_gdt_blocks; int s_inodes_count; } ;
struct ext4_sb_info {struct ext4_super_block* s_es; } ;
struct ext4_new_group_data {int group; scalar_t__ blocks_count; } ;
struct ext4_new_flex_group_data {int count; int * bg_flags; struct ext4_new_group_data* groups; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct super_block*,int) ;
 scalar_t__ FUNC_6 (struct super_block*,int) ;
 scalar_t__ FUNC_7 (struct ext4_super_block*) ;
 int FUNC_8 (struct super_block*,struct inode*,struct ext4_new_flex_group_data*) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*) ;
 struct inode* FUNC_11 (struct super_block*,int ,int ) ;
 int FUNC_12 (struct super_block*,int) ;
 int FUNC_13 (struct super_block*,char*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct super_block*,struct ext4_new_group_data*) ;

int FUNC_18(struct super_block *VAR_4, struct ext4_new_group_data *VAR_5)
{
 struct ext4_new_flex_group_data VAR_6;
 struct ext4_sb_info *VAR_7 = FUNC_2(VAR_4);
 struct ext4_super_block *VAR_8 = VAR_7->s_es;
 int VAR_9 = FUNC_6(VAR_4, VAR_5->group) ?
  FUNC_15(VAR_8->s_reserved_gdt_blocks) : 0;
 struct inode *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12;
 __u16 VAR_13 = 0;

 VAR_11 = VAR_5->group % FUNC_0(VAR_4);

 if (VAR_11 == 0 && !FUNC_10(VAR_4)) {
  FUNC_13(VAR_4, "Can't resize non-sparse filesystem further");
  return -VAR_1;
 }

 if (FUNC_7(VAR_8) + VAR_5->blocks_count <
     FUNC_7(VAR_8)) {
  FUNC_13(VAR_4, "blocks_count overflow");
  return -VAR_0;
 }

 if (FUNC_16(VAR_8->s_inodes_count) + FUNC_1(VAR_4) <
     FUNC_16(VAR_8->s_inodes_count)) {
  FUNC_13(VAR_4, "inodes_count overflow");
  return -VAR_0;
 }

 if (VAR_9 || VAR_11 == 0) {
  if (!FUNC_9(VAR_4) ||
      !FUNC_15(VAR_8->s_reserved_gdt_blocks)) {
   FUNC_13(VAR_4,
         "No reserved GDT blocks, can't resize");
   return -VAR_1;
  }
  VAR_10 = FUNC_11(VAR_4, VAR_3, VAR_2);
  if (FUNC_3(VAR_10)) {
   FUNC_13(VAR_4, "Error opening resize inode");
   return FUNC_4(VAR_10);
  }
 }


 VAR_12 = FUNC_17(VAR_4, VAR_5);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_5(VAR_4, VAR_5->group + 1);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_12(VAR_4, VAR_5->group + 1);
 if (VAR_12)
  goto out;

 VAR_6.count = 1;
 VAR_6.groups = VAR_5;
 VAR_6.bg_flags = &VAR_13;
 VAR_12 = FUNC_8(VAR_4, VAR_10, &VAR_6);
out:
 FUNC_14(VAR_10);
 return VAR_12;
}
