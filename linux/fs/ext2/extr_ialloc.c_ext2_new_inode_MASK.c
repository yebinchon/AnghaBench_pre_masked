
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int s_flags; } ;
struct qstr {int dummy; } ;
struct inode {int i_flags; scalar_t__ i_ino; scalar_t__ i_generation; int i_ctime; int i_atime; int i_mtime; scalar_t__ i_blocks; int i_gid; int i_uid; int i_mode; struct super_block* i_sb; } ;
struct ext2_super_block {int s_inodes_count; } ;
struct ext2_sb_info {int s_groups_count; int* s_debts; int s_next_gen_lock; int s_next_generation; int s_dirs_counter; int s_freeinodes_counter; struct ext2_super_block* s_es; } ;
struct ext2_inode_info {int i_flags; int i_block_group; int i_state; scalar_t__ i_dir_start_lookup; int * i_block_alloc_info; scalar_t__ i_dtime; scalar_t__ i_dir_acl; scalar_t__ i_file_acl; scalar_t__ i_frag_size; scalar_t__ i_frag_no; scalar_t__ i_faddr; int i_data; } ;
struct ext2_group_desc {int bg_used_dirs_count; int bg_free_inodes_count; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 struct ext2_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct super_block*) ;
 struct ext2_sb_info* FUNC_4 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (char*,scalar_t__) ;
 int FUNC_16 (struct super_block*,char*,char*,unsigned long,...) ;
 scalar_t__ FUNC_17 (unsigned long*,int,scalar_t__) ;
 struct ext2_group_desc* FUNC_18 (struct super_block*,int,struct buffer_head**) ;
 int FUNC_19 (struct inode*,struct inode*) ;
 int FUNC_20 (struct inode*,struct inode*,struct qstr const*) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (struct inode*) ;
 scalar_t__ FUNC_23 (int *,scalar_t__,scalar_t__) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (struct super_block*,struct inode*) ;
 int FUNC_26 (struct super_block*,struct inode*) ;
 int FUNC_27 (struct super_block*,struct inode*) ;
 int FUNC_28 (struct inode*,struct inode*,int ) ;
 scalar_t__ FUNC_29 (struct inode*) ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (int *,int) ;
 scalar_t__ FUNC_32 (int ) ;
 int FUNC_33 (struct inode*) ;
 int FUNC_34 (struct buffer_head*) ;
 int FUNC_35 (struct inode*) ;
 int FUNC_36 (int ,int ,int) ;
 struct inode* FUNC_37 (struct super_block*) ;
 int FUNC_38 (int *,int) ;
 int FUNC_39 (int *) ;
 struct buffer_head* FUNC_40 (struct super_block*,int) ;
 int * FUNC_41 (struct ext2_sb_info*,int) ;
 int FUNC_42 (int *) ;
 int FUNC_43 (int *) ;
 int FUNC_44 (struct buffer_head*) ;
 scalar_t__ FUNC_45 (struct super_block*,int ) ;

struct inode *FUNC_46(struct inode *VAR_9, umode_t VAR_10,
        const struct qstr *VAR_11)
{
 struct super_block *VAR_12;
 struct buffer_head *VAR_13 = ((void*)0);
 struct buffer_head *VAR_14;
 int VAR_15, VAR_16;
 ino_t VAR_17 = 0;
 struct inode * VAR_18;
 struct ext2_group_desc *VAR_19;
 struct ext2_super_block *VAR_20;
 struct ext2_inode_info *VAR_21;
 struct ext2_sb_info *VAR_22;
 int VAR_23;

 VAR_12 = VAR_9->i_sb;
 VAR_18 = FUNC_37(VAR_12);
 if (!VAR_18)
  return FUNC_0(-VAR_1);

 VAR_21 = FUNC_2(VAR_18);
 VAR_22 = FUNC_4(VAR_12);
 VAR_20 = VAR_22->s_es;
 if (FUNC_5(VAR_10)) {
  if (FUNC_45(VAR_12, VAR_6))
   VAR_15 = FUNC_25(VAR_12, VAR_9);
  else
   VAR_15 = FUNC_26(VAR_12, VAR_9);
 } else
  VAR_15 = FUNC_27(VAR_12, VAR_9);

 if (VAR_15 == -1) {
  VAR_23 = -VAR_2;
  goto fail;
 }

 for (VAR_16 = 0; VAR_16 < VAR_22->s_groups_count; VAR_16++) {
  VAR_19 = FUNC_18(VAR_12, VAR_15, &VAR_14);
  if (!VAR_19) {
   if (++VAR_15 == VAR_22->s_groups_count)
    VAR_15 = 0;
   continue;
  }
  FUNC_6(VAR_13);
  VAR_13 = FUNC_40(VAR_12, VAR_15);
  if (!VAR_13) {
   VAR_23 = -VAR_0;
   goto fail;
  }
  VAR_17 = 0;

repeat_in_this_group:
  VAR_17 = FUNC_17((unsigned long *)VAR_13->b_data,
           FUNC_3(VAR_12), VAR_17);
  if (VAR_17 >= FUNC_3(VAR_12)) {
   if (++VAR_15 == VAR_22->s_groups_count)
    VAR_15 = 0;
   continue;
  }
  if (FUNC_23(FUNC_41(VAR_22, VAR_15),
      VAR_17, VAR_13->b_data)) {

   if (++VAR_17 >= FUNC_3(VAR_12)) {

    if (++VAR_15 == VAR_22->s_groups_count)
     VAR_15 = 0;
    continue;
   }

   goto repeat_in_this_group;
  }
  goto got;
 }




 FUNC_6(VAR_13);
 VAR_23 = -VAR_2;
 goto fail;
got:
 FUNC_34(VAR_13);
 if (VAR_12->s_flags & VAR_7)
  FUNC_44(VAR_13);
 FUNC_6(VAR_13);

 VAR_17 += VAR_15 * FUNC_3(VAR_12) + 1;
 if (VAR_17 < FUNC_1(VAR_12) || VAR_17 > FUNC_32(VAR_20->s_inodes_count)) {
  FUNC_16 (VAR_12, "ext2_new_inode",
       "reserved inode or inode > inodes count - "
       "block_group = %d,inode=%lu", VAR_15,
       (unsigned long) VAR_17);
  VAR_23 = -VAR_0;
  goto fail;
 }

 FUNC_38(&VAR_22->s_freeinodes_counter, -1);
 if (FUNC_5(VAR_10))
  FUNC_39(&VAR_22->s_dirs_counter);

 FUNC_42(FUNC_41(VAR_22, VAR_15));
 FUNC_31(&VAR_19->bg_free_inodes_count, -1);
 if (FUNC_5(VAR_10)) {
  if (VAR_22->s_debts[VAR_15] < 255)
   VAR_22->s_debts[VAR_15]++;
  FUNC_31(&VAR_19->bg_used_dirs_count, 1);
 } else {
  if (VAR_22->s_debts[VAR_15])
   VAR_22->s_debts[VAR_15]--;
 }
 FUNC_43(FUNC_41(VAR_22, VAR_15));

 FUNC_34(VAR_14);
 if (FUNC_45(VAR_12, VAR_5)) {
  VAR_18->i_mode = VAR_10;
  VAR_18->i_uid = FUNC_8();
  VAR_18->i_gid = VAR_9->i_gid;
 } else
  FUNC_28(VAR_18, VAR_9, VAR_10);

 VAR_18->i_ino = VAR_17;
 VAR_18->i_blocks = 0;
 VAR_18->i_mtime = VAR_18->i_atime = VAR_18->i_ctime = FUNC_9(VAR_18);
 FUNC_36(VAR_21->i_data, 0, sizeof(VAR_21->i_data));
 VAR_21->i_flags =
  FUNC_21(VAR_10, FUNC_2(VAR_9)->i_flags & VAR_3);
 VAR_21->i_faddr = 0;
 VAR_21->i_frag_no = 0;
 VAR_21->i_frag_size = 0;
 VAR_21->i_file_acl = 0;
 VAR_21->i_dir_acl = 0;
 VAR_21->i_dtime = 0;
 VAR_21->i_block_alloc_info = ((void*)0);
 VAR_21->i_block_group = VAR_15;
 VAR_21->i_dir_start_lookup = 0;
 VAR_21->i_state = VAR_4;
 FUNC_24(VAR_18);
 FUNC_42(&VAR_22->s_next_gen_lock);
 VAR_18->i_generation = VAR_22->s_next_generation++;
 FUNC_43(&VAR_22->s_next_gen_lock);
 if (FUNC_29(VAR_18) < 0) {
  FUNC_16(VAR_12, "ext2_new_inode",
      "inode number already in use - inode=%lu",
      (unsigned long) VAR_17);
  VAR_23 = -VAR_0;
  goto fail;
 }

 VAR_23 = FUNC_14(VAR_18);
 if (VAR_23)
  goto fail_drop;

 VAR_23 = FUNC_11(VAR_18);
 if (VAR_23)
  goto fail_drop;

 VAR_23 = FUNC_19(VAR_18, VAR_9);
 if (VAR_23)
  goto fail_free_drop;

 VAR_23 = FUNC_20(VAR_18, VAR_9, VAR_11);
 if (VAR_23)
  goto fail_free_drop;

 FUNC_35(VAR_18);
 FUNC_15("allocating inode %lu\n", VAR_18->i_ino);
 FUNC_22(VAR_18);
 return VAR_18;

fail_free_drop:
 FUNC_13(VAR_18);

fail_drop:
 FUNC_12(VAR_18);
 VAR_18->i_flags |= VAR_8;
 FUNC_7(VAR_18);
 FUNC_10(VAR_18);
 return FUNC_0(VAR_23);

fail:
 FUNC_33(VAR_18);
 FUNC_30(VAR_18);
 return FUNC_0(VAR_23);
}
