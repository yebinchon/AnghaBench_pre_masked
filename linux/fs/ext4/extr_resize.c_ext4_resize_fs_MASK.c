
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ext4_super_block {int s_first_data_block; int s_reserved_gdt_blocks; } ;
struct ext4_sb_info {int s_log_groups_per_flex; int s_groups_count; scalar_t__ s_itb_per_group; scalar_t__ s_cluster_ratio; struct ext4_super_block* s_es; } ;
struct ext4_new_flex_group_data {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct ext4_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 unsigned long FUNC_3 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_4 (struct super_block*) ;
 int VAR_4 ;
 struct ext4_sb_info* FUNC_5 (struct super_block*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int VAR_6 ;
 int FUNC_7 (struct inode*) ;
 struct ext4_new_flex_group_data* FUNC_8 (int) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct super_block*,int) ;
 scalar_t__ FUNC_11 (struct super_block*,struct ext4_new_flex_group_data*,int) ;
 scalar_t__ FUNC_12 (struct ext4_super_block*) ;
 int FUNC_13 (struct super_block*,struct inode*) ;
 int FUNC_14 (struct super_block*,char*) ;
 int FUNC_15 (struct super_block*,struct inode*,struct ext4_new_flex_group_data*) ;
 int FUNC_16 (struct super_block*,scalar_t__,int*,scalar_t__*) ;
 int FUNC_17 (struct super_block*,scalar_t__) ;
 int FUNC_18 (struct super_block*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (struct super_block*,int) ;
 scalar_t__ FUNC_20 (struct super_block*,int) ;
 int FUNC_21 (struct super_block*) ;
 scalar_t__ FUNC_22 (struct super_block*) ;
 struct inode* FUNC_23 (struct super_block*,int ,int ) ;
 int FUNC_24 (struct super_block*,int) ;
 int FUNC_25 (struct super_block*,int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_26 (struct super_block*,struct ext4_new_flex_group_data*,scalar_t__,int) ;
 int FUNC_27 (struct super_block*,char*,...) ;
 int FUNC_28 (struct ext4_new_flex_group_data*) ;
 int FUNC_29 (struct inode*) ;
 unsigned long VAR_7 ;
 unsigned long FUNC_30 (int ) ;
 scalar_t__ FUNC_31 (int ) ;
 unsigned long FUNC_32 (struct super_block*,int) ;
 struct buffer_head* FUNC_33 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_34 (int) ;

int FUNC_35(struct super_block *VAR_8, ext4_fsblk_t VAR_9)
{
 struct ext4_new_flex_group_data *VAR_10 = ((void*)0);
 struct ext4_sb_info *VAR_11 = FUNC_5(VAR_8);
 struct ext4_super_block *VAR_12 = VAR_11->s_es;
 struct buffer_head *VAR_13;
 struct inode *VAR_14 = ((void*)0);
 ext4_grpblk_t VAR_15, VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;
 ext4_group_t VAR_19;
 ext4_group_t VAR_20;
 ext4_fsblk_t VAR_21;
 ext4_fsblk_t VAR_22 = 0;
 unsigned long VAR_23 = 0;
 int VAR_24 = 0, VAR_25 = 1 << VAR_11->s_log_groups_per_flex;
 int VAR_26;


 VAR_13 = FUNC_33(VAR_8, VAR_9 - 1);
 if (!VAR_13) {
  FUNC_27(VAR_8, "can't read last block, resize aborted");
  return -VAR_2;
 }
 FUNC_9(VAR_13);

retry:
 VAR_21 = FUNC_12(VAR_12);

 FUNC_25(VAR_8, VAR_6, "resizing filesystem from %llu "
   "to %llu blocks", VAR_21, VAR_9);

 if (VAR_9 < VAR_21) {

  FUNC_27(VAR_8, "can't shrink FS - resize aborted");
  return -VAR_0;
 }

 if (VAR_9 == VAR_21)

  return 0;

 VAR_20 = FUNC_17(VAR_8, VAR_9 - 1);
 if (VAR_20 >= (0xFFFFFFFFUL / FUNC_4(VAR_8))) {
  FUNC_27(VAR_8, "resize would cause inodes_count overflow");
  return -VAR_0;
 }
 FUNC_16(VAR_8, VAR_21 - 1, &VAR_19, &VAR_16);

 VAR_17 = FUNC_32(VAR_8, VAR_20 + 1);
 VAR_18 = FUNC_32(VAR_8, VAR_11->s_groups_count);

 VAR_26 = FUNC_21(VAR_8);

 if (FUNC_22(VAR_8)) {
  if (VAR_26) {
   FUNC_14(VAR_8, "resize_inode and meta_bg enabled "
       "simultaneously");
   return -VAR_0;
  }
  if (VAR_17 > VAR_18 +
      FUNC_30(VAR_12->s_reserved_gdt_blocks)) {
   VAR_22 = VAR_9;
   VAR_17 = VAR_18 +
    FUNC_30(VAR_12->s_reserved_gdt_blocks);
   VAR_20 = VAR_17 * FUNC_3(VAR_8);
   VAR_9 = (ext4_fsblk_t)VAR_20 *
    FUNC_0(VAR_8) +
    FUNC_31(VAR_12->s_first_data_block);
   VAR_20--;
  }

  if (!VAR_14)
   VAR_14 = FUNC_23(VAR_8, VAR_4,
       VAR_3);
  if (FUNC_6(VAR_14)) {
   FUNC_27(VAR_8, "Error opening resize inode");
   return FUNC_7(VAR_14);
  }
 }

 if ((!VAR_14 && !VAR_26) || VAR_9 == VAR_21) {
  VAR_24 = FUNC_13(VAR_8, VAR_14);
  if (VAR_24)
   goto out;
  if (VAR_14) {
   FUNC_29(VAR_14);
   VAR_14 = ((void*)0);
  }
  if (VAR_22) {
   VAR_9 = VAR_22;
   VAR_22 = 0;
   goto retry;
  }
 }
 if ((FUNC_19(VAR_8, VAR_20) +
      FUNC_20(VAR_8, VAR_20) + 2 +
      VAR_11->s_itb_per_group + VAR_11->s_cluster_ratio) >= VAR_9) {
  VAR_9 = FUNC_19(VAR_8, VAR_20);
  VAR_20--;
  VAR_22 = 0;
  if (VAR_14) {
   FUNC_29(VAR_14);
   VAR_14 = ((void*)0);
  }
  goto retry;
 }


 if (VAR_20 == VAR_19)
  VAR_15 = VAR_9 - VAR_21;
 else
  VAR_15 = FUNC_1(VAR_11, FUNC_2(VAR_8) - (VAR_16 + 1));
 if (VAR_15 > 0) {
  VAR_24 = FUNC_18(VAR_8, VAR_21, VAR_15);
  if (VAR_24)
   goto out;
 }

 if (FUNC_12(VAR_12) == VAR_9)
  goto out;

 VAR_24 = FUNC_10(VAR_8, VAR_20 + 1);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_24(VAR_8, VAR_20 + 1);
 if (VAR_24)
  goto out;

 VAR_10 = FUNC_8(VAR_25);
 if (VAR_10 == ((void*)0)) {
  VAR_24 = -VAR_1;
  goto out;
 }




 while (FUNC_26(VAR_8, VAR_10, VAR_9,
           VAR_25)) {
  if (VAR_7 - VAR_23 > VAR_5 * 10) {
   if (VAR_23)
    FUNC_25(VAR_8, VAR_6,
      "resized to %llu blocks",
      FUNC_12(VAR_12));
   VAR_23 = VAR_7;
  }
  if (FUNC_11(VAR_8, VAR_10, VAR_25) != 0)
   break;
  VAR_24 = FUNC_15(VAR_8, VAR_14, VAR_10);
  if (FUNC_34(VAR_24))
   break;
 }

 if (!VAR_24 && VAR_22) {
  VAR_9 = VAR_22;
  VAR_22 = 0;
  FUNC_28(VAR_10);
  VAR_10 = ((void*)0);
  if (VAR_14) {
   FUNC_29(VAR_14);
   VAR_14 = ((void*)0);
  }
  goto retry;
 }

out:
 if (VAR_10)
  FUNC_28(VAR_10);
 if (VAR_14 != ((void*)0))
  FUNC_29(VAR_14);
 if (VAR_24)
  FUNC_27(VAR_8, "error (%d) occurred during "
        "file system resize", VAR_24);
 FUNC_25(VAR_8, VAR_6, "resized filesystem to %llu",
   FUNC_12(VAR_12));
 return VAR_24;
}
