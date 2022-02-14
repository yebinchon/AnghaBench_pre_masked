
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct ext4_sb_info {TYPE_1__* s_es; } ;
struct ext4_group_desc {int bg_flags; } ;
struct buffer_head {int b_end_io; int b_data; } ;
typedef scalar_t__ ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_first_data_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct buffer_head* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct super_block*) ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_7 (struct super_block*,char*,...) ;
 struct ext4_group_desc* FUNC_8 (struct super_block*,scalar_t__,int *) ;
 scalar_t__ FUNC_9 (struct super_block*) ;
 scalar_t__ FUNC_10 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_11 (struct super_block*,scalar_t__) ;
 int FUNC_12 (int,int,int ) ;
 int FUNC_13 (struct super_block*,scalar_t__,int ) ;
 int FUNC_14 (struct super_block*,scalar_t__) ;
 int FUNC_15 (struct super_block*,struct ext4_group_desc*,scalar_t__,struct buffer_head*) ;
 int FUNC_16 (struct super_block*,char*,scalar_t__,scalar_t__) ;
 int FUNC_17 (struct buffer_head*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (int ,int ,int) ;
 int FUNC_21 (struct buffer_head*) ;
 struct buffer_head* FUNC_22 (struct super_block*,scalar_t__) ;
 int FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (struct buffer_head*) ;
 int FUNC_26 (int ,int,struct buffer_head*) ;
 int FUNC_27 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_28 (int) ;
 int FUNC_29 (struct buffer_head*) ;
 int FUNC_30 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *
FUNC_31(struct super_block *VAR_9, ext4_group_t VAR_10)
{
 struct ext4_group_desc *VAR_11;
 struct ext4_sb_info *VAR_12 = FUNC_2(VAR_9);
 struct buffer_head *VAR_13 = ((void*)0);
 ext4_fsblk_t VAR_14;
 int VAR_15;

 VAR_11 = FUNC_8(VAR_9, VAR_10, ((void*)0));
 if (!VAR_11)
  return FUNC_0(-VAR_0);

 VAR_14 = FUNC_10(VAR_9, VAR_11);
 if ((VAR_14 <= FUNC_18(VAR_12->s_es->s_first_data_block)) ||
     (VAR_14 >= FUNC_6(VAR_12->s_es))) {
  FUNC_7(VAR_9, "Invalid inode bitmap blk %llu in "
      "block_group %u", VAR_14, VAR_10);
  FUNC_13(VAR_9, VAR_10,
     VAR_4);
  return FUNC_0(-VAR_0);
 }
 VAR_13 = FUNC_22(VAR_9, VAR_14);
 if (FUNC_28(!VAR_13)) {
  FUNC_16(VAR_9, "Cannot read inode bitmap - "
        "block_group = %u, inode_bitmap = %llu",
        VAR_10, VAR_14);
  return FUNC_0(-VAR_2);
 }
 if (FUNC_3(VAR_13))
  goto verify;

 FUNC_19(VAR_13);
 if (FUNC_3(VAR_13)) {
  FUNC_29(VAR_13);
  goto verify;
 }

 FUNC_11(VAR_9, VAR_10);
 if (FUNC_9(VAR_9) &&
     (VAR_11->bg_flags & FUNC_5(VAR_3))) {
  if (VAR_10 == 0) {
   FUNC_14(VAR_9, VAR_10);
   FUNC_29(VAR_13);
   FUNC_7(VAR_9, "Inode bitmap for bg 0 marked "
       "uninitialized");
   VAR_15 = -VAR_0;
   goto out;
  }
  FUNC_20(VAR_13->b_data, 0, (FUNC_1(VAR_9) + 7) / 8);
  FUNC_12(FUNC_1(VAR_9),
         VAR_9->s_blocksize * 8, VAR_13->b_data);
  FUNC_23(VAR_13);
  FUNC_24(VAR_13);
  FUNC_25(VAR_13);
  FUNC_14(VAR_9, VAR_10);
  FUNC_29(VAR_13);
  return VAR_13;
 }
 FUNC_14(VAR_9, VAR_10);

 if (FUNC_4(VAR_13)) {




  FUNC_23(VAR_13);
  FUNC_29(VAR_13);
  goto verify;
 }



 FUNC_27(VAR_9, VAR_10);
 VAR_13->b_end_io = VAR_8;
 FUNC_17(VAR_13);
 FUNC_26(VAR_6, VAR_5 | VAR_7, VAR_13);
 FUNC_30(VAR_13);
 if (!FUNC_4(VAR_13)) {
  FUNC_21(VAR_13);
  FUNC_7(VAR_9, "Cannot read inode bitmap - "
      "block_group = %u, inode_bitmap = %llu",
      VAR_10, VAR_14);
  FUNC_13(VAR_9, VAR_10,
    VAR_4);
  return FUNC_0(-VAR_1);
 }

verify:
 VAR_15 = FUNC_15(VAR_9, VAR_11, VAR_10, VAR_13);
 if (VAR_15)
  goto out;
 return VAR_13;
out:
 FUNC_21(VAR_13);
 return FUNC_0(VAR_15);
}
