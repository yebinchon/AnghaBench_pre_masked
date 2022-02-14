
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_sb_info {TYPE_1__* s_es; } ;
struct ext4_group_desc {int bg_flags; } ;
struct buffer_head {int b_end_io; } ;
typedef scalar_t__ ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_first_data_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_7 (struct super_block*,char*,...) ;
 struct ext4_group_desc* FUNC_8 (struct super_block*,scalar_t__,int *) ;
 scalar_t__ FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*,struct buffer_head*,scalar_t__,struct ext4_group_desc*) ;
 int FUNC_11 (struct super_block*,scalar_t__) ;
 int FUNC_12 (struct super_block*,scalar_t__,int ) ;
 int FUNC_13 (struct super_block*,scalar_t__) ;
 int FUNC_14 (struct super_block*,struct ext4_group_desc*,scalar_t__,struct buffer_head*) ;
 int FUNC_15 (struct super_block*,char*,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct buffer_head*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (struct buffer_head*) ;
 struct buffer_head* FUNC_20 (struct super_block*,scalar_t__) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (int ,int,struct buffer_head*) ;
 int FUNC_26 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_27 (int) ;
 int FUNC_28 (struct buffer_head*) ;

struct buffer_head *
FUNC_29(struct super_block *VAR_8, ext4_group_t VAR_9)
{
 struct ext4_group_desc *VAR_10;
 struct ext4_sb_info *VAR_11 = FUNC_1(VAR_8);
 struct buffer_head *VAR_12;
 ext4_fsblk_t VAR_13;
 int VAR_14;

 VAR_10 = FUNC_8(VAR_8, VAR_9, ((void*)0));
 if (!VAR_10)
  return FUNC_0(-VAR_0);
 VAR_13 = FUNC_5(VAR_8, VAR_10);
 if ((VAR_13 <= FUNC_17(VAR_11->s_es->s_first_data_block)) ||
     (VAR_13 >= FUNC_6(VAR_11->s_es))) {
  FUNC_7(VAR_8, "Invalid block bitmap block %llu in "
      "block_group %u", VAR_13, VAR_9);
  FUNC_12(VAR_8, VAR_9,
     VAR_3);
  return FUNC_0(-VAR_0);
 }
 VAR_12 = FUNC_20(VAR_8, VAR_13);
 if (FUNC_27(!VAR_12)) {
  FUNC_15(VAR_8, "Cannot get buffer for block bitmap - "
        "block_group = %u, block_bitmap = %llu",
        VAR_9, VAR_13);
  return FUNC_0(-VAR_1);
 }

 if (FUNC_2(VAR_12))
  goto verify;

 FUNC_18(VAR_12);
 if (FUNC_2(VAR_12)) {
  FUNC_28(VAR_12);
  goto verify;
 }
 FUNC_11(VAR_8, VAR_9);
 if (FUNC_9(VAR_8) &&
     (VAR_10->bg_flags & FUNC_4(VAR_2))) {
  if (VAR_9 == 0) {
   FUNC_13(VAR_8, VAR_9);
   FUNC_28(VAR_12);
   FUNC_7(VAR_8, "Block bitmap for bg 0 marked "
       "uninitialized");
   VAR_14 = -VAR_0;
   goto out;
  }
  VAR_14 = FUNC_10(VAR_8, VAR_12, VAR_9, VAR_10);
  FUNC_21(VAR_12);
  FUNC_23(VAR_12);
  FUNC_24(VAR_12);
  FUNC_13(VAR_8, VAR_9);
  FUNC_28(VAR_12);
  if (VAR_14) {
   FUNC_7(VAR_8, "Failed to init block bitmap for group "
       "%u: %d", VAR_9, VAR_14);
   goto out;
  }
  goto verify;
 }
 FUNC_13(VAR_8, VAR_9);
 if (FUNC_3(VAR_12)) {




  FUNC_21(VAR_12);
  FUNC_28(VAR_12);
  goto verify;
 }



 FUNC_22(VAR_12);
 FUNC_26(VAR_8, VAR_9);
 VAR_12->b_end_io = VAR_7;
 FUNC_16(VAR_12);
 FUNC_25(VAR_5, VAR_4 | VAR_6, VAR_12);
 return VAR_12;
verify:
 VAR_14 = FUNC_14(VAR_8, VAR_10, VAR_9, VAR_12);
 if (VAR_14)
  goto out;
 return VAR_12;
out:
 FUNC_19(VAR_12);
 return FUNC_0(VAR_14);
}
