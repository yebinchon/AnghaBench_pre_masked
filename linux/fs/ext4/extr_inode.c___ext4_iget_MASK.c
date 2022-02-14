
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uid_t ;
typedef int u64 ;
struct TYPE_6__ {void* t_tid; } ;
typedef TYPE_2__ transaction_t ;
typedef void* tid_t ;
struct super_block {int dummy; } ;
struct inode {int i_state; int i_mode; scalar_t__ i_nlink; unsigned long i_generation; char* i_link; struct super_block* i_sb; int * i_op; int i_size; int * i_fop; int i_blocks; int i_ino; } ;
struct ext4_sb_info {int s_mount_state; void* s_csum_seed; TYPE_1__* s_es; TYPE_3__* s_journal; } ;
struct ext4_inode_info {int i_extra_isize; unsigned long i_dtime; unsigned long i_flags; unsigned long i_file_acl; scalar_t__* i_data; void* i_datasync_tid; void* i_sync_tid; int i_orphan; int i_last_alloc_group; int i_block_group; scalar_t__ i_reserved_quota; int i_disksize; scalar_t__ i_dir_start_lookup; scalar_t__ i_inline_off; int i_projid; void* i_csum_seed; } ;
struct ext4_inode {scalar_t__ i_links_count; scalar_t__ i_mode; scalar_t__ i_extra_isize; scalar_t__ i_uid_low; scalar_t__ i_gid_low; scalar_t__ i_uid_high; scalar_t__ i_gid_high; scalar_t__ i_file_acl_high; scalar_t__* i_block; scalar_t__ i_version_hi; scalar_t__ i_disk_version; scalar_t__ i_generation; scalar_t__ i_file_acl_lo; scalar_t__ i_flags; scalar_t__ i_dtime; scalar_t__ i_projid; } ;
struct ext4_iloc {int * bh; int block_group; } ;
typedef scalar_t__ projid_t ;
typedef int loff_t ;
struct TYPE_7__ {int j_state_lock; void* j_commit_sequence; TYPE_2__* j_committing_transaction; TYPE_2__* j_running_transaction; } ;
typedef TYPE_3__ journal_t ;
typedef int inum ;
typedef int gid_t ;
typedef int gen ;
typedef int ext4_iget_flags ;
typedef int __u8 ;
typedef int __u64 ;
typedef void* __u32 ;
typedef scalar_t__ __le32 ;
struct TYPE_8__ {int comm; } ;
struct TYPE_5__ {scalar_t__ s_inodes_count; } ;


 int FUNC_0 (int) ;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 struct inode* FUNC_1 (long) ;
 long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,struct ext4_inode_info*,struct ext4_inode*) ;
 unsigned long FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (struct ext4_inode*,struct ext4_inode_info*,scalar_t__) ;
 int VAR_6 ;
 struct ext4_inode_info* FUNC_5 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,struct inode*,struct ext4_inode*) ;
 int FUNC_7 (struct super_block*) ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 struct ext4_sb_info* FUNC_8 (struct super_block*) ;
 int VAR_13 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct super_block*,char const*,unsigned int,char*,unsigned long,int ) ;
 long FUNC_22 (struct inode*,struct ext4_iloc*,int ) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int ) ;
 TYPE_4__* VAR_16 ;
 void* FUNC_25 (struct ext4_sb_info*,void*,int *,int) ;
 int FUNC_26 (struct ext4_inode_info*) ;
 int FUNC_27 (struct ext4_sb_info*,int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_28 (struct inode*,char const*,unsigned int,int ,char*,...) ;
 long FUNC_29 (struct inode*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_30 (struct super_block*) ;
 int FUNC_31 (struct super_block*) ;
 scalar_t__ FUNC_32 (struct super_block*) ;
 int FUNC_33 (struct inode*) ;
 scalar_t__ FUNC_34 (struct super_block*) ;
 long FUNC_35 (struct inode*,struct ext4_inode*,struct ext4_inode_info*) ;
 long FUNC_36 (struct inode*) ;
 int FUNC_37 (struct ext4_inode*,struct ext4_inode_info*) ;
 int FUNC_38 (struct inode*,struct ext4_inode*,struct ext4_inode_info*) ;
 scalar_t__ FUNC_39 (struct inode*) ;
 int FUNC_40 (struct inode*,int) ;
 int FUNC_41 (struct super_block*,struct ext4_inode*) ;
 struct ext4_inode* FUNC_42 (struct ext4_iloc*) ;
 int FUNC_43 (struct inode*) ;
 int FUNC_44 (struct inode*) ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_45 (struct inode*,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_46 (struct inode*,int) ;
 int VAR_28 ;
 int FUNC_47 (struct inode*) ;
 int FUNC_48 (struct inode*,int) ;
 scalar_t__ VAR_29 ;
 int FUNC_49 (struct inode*) ;
 struct inode* FUNC_50 (struct super_block*,unsigned long) ;
 int FUNC_51 (struct inode*,int,int ) ;
 int VAR_30 ;
 int FUNC_52 (struct inode*) ;
 int FUNC_53 (scalar_t__) ;
 unsigned long FUNC_54 (scalar_t__) ;
 scalar_t__ FUNC_55 (int) ;
 int FUNC_56 (struct inode*) ;
 int FUNC_57 (int *,scalar_t__) ;
 int FUNC_58 (scalar_t__*,int ,int) ;
 int FUNC_59 (unsigned long) ;
 int FUNC_60 (unsigned long) ;
 int FUNC_61 (int *) ;
 int FUNC_62 (int *) ;
 int FUNC_63 (struct inode*,int) ;
 int FUNC_64 (struct super_block*,int ) ;
 int FUNC_65 (struct super_block*,int ) ;
 int FUNC_66 (struct inode*) ;

struct inode *FUNC_67(struct super_block *VAR_31, unsigned long VAR_32,
     ext4_iget_flags VAR_33, const char *VAR_34,
     unsigned int VAR_35)
{
 struct ext4_iloc VAR_36;
 struct ext4_inode *VAR_37;
 struct ext4_inode_info *VAR_38;
 struct inode *VAR_39;
 journal_t *VAR_40 = FUNC_8(VAR_31)->s_journal;
 long VAR_41;
 loff_t VAR_42;
 int VAR_43;
 uid_t VAR_44;
 gid_t VAR_45;
 projid_t VAR_46;

 if ((!(VAR_33 & VAR_8) &&
      (VAR_32 < FUNC_3(VAR_31) && VAR_32 != VAR_12)) ||
     (VAR_32 < VAR_12) ||
     (VAR_32 > FUNC_54(FUNC_8(VAR_31)->s_es->s_inodes_count))) {
  if (VAR_33 & VAR_7)
   return FUNC_1(-VAR_3);
  FUNC_21(VAR_31, VAR_34, VAR_35,
        "inode #%lu: comm %s: iget: illegal inode #",
        VAR_32, VAR_16->comm);
  return FUNC_1(-VAR_1);
 }

 VAR_39 = FUNC_50(VAR_31, VAR_32);
 if (!VAR_39)
  return FUNC_1(-VAR_2);
 if (!(VAR_39->i_state & VAR_14))
  return VAR_39;

 VAR_38 = FUNC_5(VAR_39);
 VAR_36.bh = ((void*)0);

 VAR_41 = FUNC_22(VAR_39, &VAR_36, 0);
 if (VAR_41 < 0)
  goto bad_inode;
 VAR_37 = FUNC_42(&VAR_36);

 if ((VAR_32 == VAR_12) && (VAR_37->i_links_count == 0)) {
  FUNC_28(VAR_39, VAR_34, VAR_35, 0,
     "iget: root inode unallocated");
  VAR_41 = -VAR_1;
  goto bad_inode;
 }

 if ((VAR_33 & VAR_7) &&
     (VAR_37->i_links_count == 0) && (VAR_37->i_mode == 0)) {
  VAR_41 = -VAR_3;
  goto bad_inode;
 }

 if (FUNC_7(VAR_39->i_sb) > VAR_6) {
  VAR_38->i_extra_isize = FUNC_53(VAR_37->i_extra_isize);
  if (VAR_6 + VAR_38->i_extra_isize >
   FUNC_7(VAR_39->i_sb) ||
      (VAR_38->i_extra_isize & 3)) {
   FUNC_28(VAR_39, VAR_34, VAR_35, 0,
      "iget: bad extra_isize %u "
      "(inode size %u)",
      VAR_38->i_extra_isize,
      FUNC_7(VAR_39->i_sb));
   VAR_41 = -VAR_1;
   goto bad_inode;
  }
 } else
  VAR_38->i_extra_isize = 0;


 if (FUNC_34(VAR_31)) {
  struct ext4_sb_info *VAR_47 = FUNC_8(VAR_39->i_sb);
  __u32 VAR_48;
  __le32 VAR_49 = FUNC_24(VAR_39->i_ino);
  __le32 VAR_50 = VAR_37->i_generation;
  VAR_48 = FUNC_25(VAR_47, VAR_47->s_csum_seed, (__u8 *)&VAR_49,
       sizeof(VAR_49));
  VAR_38->i_csum_seed = FUNC_25(VAR_47, VAR_48, (__u8 *)&VAR_50,
           sizeof(VAR_50));
 }

 if (!FUNC_38(VAR_39, VAR_37, VAR_38)) {
  FUNC_28(VAR_39, VAR_34, VAR_35, 0,
     "iget: checksum invalid");
  VAR_41 = -VAR_0;
  goto bad_inode;
 }

 VAR_39->i_mode = FUNC_53(VAR_37->i_mode);
 VAR_44 = (uid_t)FUNC_53(VAR_37->i_uid_low);
 VAR_45 = (gid_t)FUNC_53(VAR_37->i_gid_low);
 if (FUNC_32(VAR_31) &&
     FUNC_7(VAR_31) > VAR_6 &&
     FUNC_4(VAR_37, VAR_38, VAR_46))
  VAR_46 = (projid_t)FUNC_54(VAR_37->i_projid);
 else
  VAR_46 = VAR_5;

 if (!(FUNC_64(VAR_39->i_sb, VAR_15))) {
  VAR_44 |= FUNC_53(VAR_37->i_uid_high) << 16;
  VAR_45 |= FUNC_53(VAR_37->i_gid_high) << 16;
 }
 FUNC_48(VAR_39, VAR_44);
 FUNC_46(VAR_39, VAR_45);
 VAR_38->i_projid = FUNC_57(&VAR_30, VAR_46);
 FUNC_63(VAR_39, FUNC_53(VAR_37->i_links_count));

 FUNC_26(VAR_38);
 VAR_38->i_inline_off = 0;
 VAR_38->i_dir_start_lookup = 0;
 VAR_38->i_dtime = FUNC_54(VAR_37->i_dtime);





 if (VAR_39->i_nlink == 0) {
  if ((VAR_39->i_mode == 0 ||
       !(FUNC_8(VAR_39->i_sb)->s_mount_state & VAR_11)) &&
      VAR_32 != VAR_4) {

   VAR_41 = -VAR_3;
   goto bad_inode;
  }






 }
 VAR_38->i_flags = FUNC_54(VAR_37->i_flags);
 FUNC_44(VAR_39);
 VAR_39->i_blocks = FUNC_37(VAR_37, VAR_38);
 VAR_38->i_file_acl = FUNC_54(VAR_37->i_file_acl_lo);
 if (FUNC_30(VAR_31))
  VAR_38->i_file_acl |=
   ((__u64)FUNC_53(VAR_37->i_file_acl_high)) << 32;
 VAR_39->i_size = FUNC_41(VAR_31, VAR_37);
 if ((VAR_42 = FUNC_47(VAR_39)) < 0) {
  FUNC_28(VAR_39, VAR_34, VAR_35, 0,
     "iget: bad i_size value: %lld", VAR_42);
  VAR_41 = -VAR_1;
  goto bad_inode;
 }
 VAR_38->i_disksize = VAR_39->i_size;



 VAR_39->i_generation = FUNC_54(VAR_37->i_generation);
 VAR_38->i_block_group = VAR_36.block_group;
 VAR_38->i_last_alloc_group = ~0;




 for (VAR_43 = 0; VAR_43 < VAR_10; VAR_43++)
  VAR_38->i_data[VAR_43] = VAR_37->i_block[VAR_43];
 FUNC_9(&VAR_38->i_orphan);
 if (VAR_40) {
  transaction_t *VAR_51;
  tid_t VAR_52;

  FUNC_61(&VAR_40->j_state_lock);
  if (VAR_40->j_running_transaction)
   VAR_51 = VAR_40->j_running_transaction;
  else
   VAR_51 = VAR_40->j_committing_transaction;
  if (VAR_51)
   VAR_52 = VAR_51->t_tid;
  else
   VAR_52 = VAR_40->j_commit_sequence;
  FUNC_62(&VAR_40->j_state_lock);
  VAR_38->i_sync_tid = VAR_52;
  VAR_38->i_datasync_tid = VAR_52;
 }

 if (FUNC_7(VAR_39->i_sb) > VAR_6) {
  if (VAR_38->i_extra_isize == 0) {

   FUNC_0(sizeof(struct ext4_inode) & 3);
   VAR_38->i_extra_isize = sizeof(struct ext4_inode) -
         VAR_6;
  } else {
   VAR_41 = FUNC_35(VAR_39, VAR_37, VAR_38);
   if (VAR_41)
    goto bad_inode;
  }
 }

 FUNC_6(VAR_27, VAR_39, VAR_37);
 FUNC_6(VAR_28, VAR_39, VAR_37);
 FUNC_6(VAR_25, VAR_39, VAR_37);
 FUNC_2(VAR_26, VAR_38, VAR_37);

 if (FUNC_55(!FUNC_65(VAR_39->i_sb, VAR_13))) {
  u64 VAR_53 = FUNC_54(VAR_37->i_disk_version);

  if (FUNC_7(VAR_39->i_sb) > VAR_6) {
   if (FUNC_4(VAR_37, VAR_38, VAR_29))
    VAR_53 |=
      (__u64)(FUNC_54(VAR_37->i_version_hi)) << 32;
  }
  FUNC_40(VAR_39, VAR_53);
 }

 VAR_41 = 0;
 if (VAR_38->i_file_acl &&
     !FUNC_27(FUNC_8(VAR_31), VAR_38->i_file_acl, 1)) {
  FUNC_28(VAR_39, VAR_34, VAR_35, 0,
     "iget: bad extended attribute block %llu",
     VAR_38->i_file_acl);
  VAR_41 = -VAR_1;
  goto bad_inode;
 } else if (!FUNC_33(VAR_39)) {

  if (FUNC_19(VAR_39->i_mode) || FUNC_16(VAR_39->i_mode) ||
     (FUNC_18(VAR_39->i_mode) &&
      !FUNC_39(VAR_39))) {
   if (FUNC_45(VAR_39, VAR_9))
    VAR_41 = FUNC_29(VAR_39);
   else
    VAR_41 = FUNC_36(VAR_39);
  }
 }
 if (VAR_41)
  goto bad_inode;

 if (FUNC_19(VAR_39->i_mode)) {
  VAR_39->i_op = &VAR_21;
  VAR_39->i_fop = &VAR_22;
  FUNC_43(VAR_39);
 } else if (FUNC_16(VAR_39->i_mode)) {
  VAR_39->i_op = &VAR_17;
  VAR_39->i_fop = &VAR_18;
 } else if (FUNC_18(VAR_39->i_mode)) {

  if (FUNC_10(VAR_39) || FUNC_13(VAR_39)) {
   FUNC_28(VAR_39, VAR_34, VAR_35, 0,
      "iget: immutable or append flags "
      "not allowed on symlinks");
   VAR_41 = -VAR_1;
   goto bad_inode;
  }
  if (FUNC_12(VAR_39)) {
   VAR_39->i_op = &VAR_19;
   FUNC_43(VAR_39);
  } else if (FUNC_39(VAR_39)) {
   VAR_39->i_link = (char *)VAR_38->i_data;
   VAR_39->i_op = &VAR_20;
   FUNC_58(VAR_38->i_data, VAR_39->i_size,
    sizeof(VAR_38->i_data) - 1);
  } else {
   VAR_39->i_op = &VAR_24;
   FUNC_43(VAR_39);
  }
  FUNC_52(VAR_39);
 } else if (FUNC_15(VAR_39->i_mode) || FUNC_14(VAR_39->i_mode) ||
       FUNC_17(VAR_39->i_mode) || FUNC_20(VAR_39->i_mode)) {
  VAR_39->i_op = &VAR_23;
  if (VAR_37->i_block[0])
   FUNC_51(VAR_39, VAR_39->i_mode,
      FUNC_60(FUNC_54(VAR_37->i_block[0])));
  else
   FUNC_51(VAR_39, VAR_39->i_mode,
      FUNC_59(FUNC_54(VAR_37->i_block[1])));
 } else if (VAR_32 == VAR_4) {
  FUNC_56(VAR_39);
 } else {
  VAR_41 = -VAR_1;
  FUNC_28(VAR_39, VAR_34, VAR_35, 0,
     "iget: bogus i_mode (%o)", VAR_39->i_mode);
  goto bad_inode;
 }
 if (FUNC_11(VAR_39) && !FUNC_31(VAR_39->i_sb))
  FUNC_28(VAR_39, VAR_34, VAR_35, 0,
     "casefold flag without casefold feature");
 FUNC_23(VAR_36.bh);

 FUNC_66(VAR_39);
 return VAR_39;

bad_inode:
 FUNC_23(VAR_36.bh);
 FUNC_49(VAR_39);
 return FUNC_1(VAR_41);
}
