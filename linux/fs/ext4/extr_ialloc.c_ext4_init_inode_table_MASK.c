
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_bdev; } ;
struct ext4_sb_info {int s_itb_per_group; int s_inodes_per_block; } ;
struct ext4_group_info {int alloc_sem; } ;
struct ext4_group_desc {int bg_flags; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 struct ext4_sb_info* FUNC_4 (struct super_block*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,scalar_t__) ;
 int FUNC_11 (struct super_block*,char*,scalar_t__,int,scalar_t__) ;
 struct ext4_group_desc* FUNC_12 (struct super_block*,scalar_t__,struct buffer_head**) ;
 struct ext4_group_info* FUNC_13 (struct super_block*,scalar_t__) ;
 int FUNC_14 (struct super_block*,scalar_t__,struct ext4_group_desc*) ;
 int FUNC_15 (int *,int *,struct buffer_head*) ;
 scalar_t__ FUNC_16 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_17 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_18 (int *,struct buffer_head*) ;
 int * FUNC_19 (struct super_block*,int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct super_block*,scalar_t__) ;
 int FUNC_22 (struct super_block*,scalar_t__) ;
 int FUNC_23 (struct super_block*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_24 (struct super_block*) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (int *) ;

int FUNC_27(struct super_block *VAR_4, ext4_group_t VAR_5,
     int VAR_6)
{
 struct ext4_group_info *VAR_7 = FUNC_13(VAR_4, VAR_5);
 struct ext4_sb_info *VAR_8 = FUNC_4(VAR_4);
 struct ext4_group_desc *VAR_9 = ((void*)0);
 struct buffer_head *VAR_10;
 handle_t *VAR_11;
 ext4_fsblk_t VAR_12;
 int VAR_13, VAR_14 = 0, VAR_15 = 0;


 if (FUNC_24(VAR_4)) {
  VAR_14 = 1;
  goto out;
 }

 VAR_9 = FUNC_12(VAR_4, VAR_5, &VAR_10);
 if (!VAR_9)
  goto out;





 if (VAR_9->bg_flags & FUNC_8(VAR_1))
  goto out;

 VAR_11 = FUNC_19(VAR_4, VAR_2, 1);
 if (FUNC_5(VAR_11)) {
  VAR_14 = FUNC_6(VAR_11);
  goto out;
 }

 FUNC_9(&VAR_7->alloc_sem);





 if (!(VAR_9->bg_flags & FUNC_8(VAR_0)))
  VAR_15 = FUNC_1((FUNC_3(VAR_4) -
       FUNC_17(VAR_4, VAR_9)),
       VAR_8->s_inodes_per_block);

 if ((VAR_15 < 0) || (VAR_15 > VAR_8->s_itb_per_group) ||
     ((VAR_5 == 0) && ((FUNC_3(VAR_4) -
          FUNC_17(VAR_4, VAR_9)) <
         FUNC_2(VAR_4)))) {
  FUNC_11(VAR_4, "Something is wrong with group %u: "
      "used itable blocks: %d; "
      "itable unused count: %u",
      VAR_5, VAR_15,
      FUNC_17(VAR_4, VAR_9));
  VAR_14 = 1;
  goto err_out;
 }

 VAR_12 = FUNC_16(VAR_4, VAR_9) + VAR_15;
 VAR_13 = VAR_8->s_itb_per_group - VAR_15;

 FUNC_0(VAR_10, "get_write_access");
 VAR_14 = FUNC_18(VAR_11,
         VAR_10);
 if (VAR_14)
  goto err_out;






 if (FUNC_25(VAR_13 == 0))
  goto skip_zeroout;

 FUNC_10("going to zero out inode table in group %d\n",
     VAR_5);
 VAR_14 = FUNC_23(VAR_4, VAR_12, VAR_13, VAR_3);
 if (VAR_14 < 0)
  goto err_out;
 if (VAR_6)
  FUNC_7(VAR_4->s_bdev, VAR_3, ((void*)0));

skip_zeroout:
 FUNC_21(VAR_4, VAR_5);
 VAR_9->bg_flags |= FUNC_8(VAR_1);
 FUNC_14(VAR_4, VAR_5, VAR_9);
 FUNC_22(VAR_4, VAR_5);

 FUNC_0(VAR_10,
       "call ext4_handle_dirty_metadata");
 VAR_14 = FUNC_15(VAR_11, ((void*)0),
      VAR_10);

err_out:
 FUNC_26(&VAR_7->alloc_sem);
 FUNC_20(VAR_11);
out:
 return VAR_14;
}
