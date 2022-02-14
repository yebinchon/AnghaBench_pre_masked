
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int u64 ;
struct super_block {int s_flags; } ;
struct inode {int i_mode; int i_nlink; int i_generation; struct super_block* i_sb; int i_ino; int i_rdev; } ;
struct ext4_inode_info {int i_dtime; int i_flags; int i_file_acl; int i_disksize; int i_extra_isize; int i_raw_lock; void** i_data; int i_orphan; int i_projid; } ;
struct ext4_inode {void* i_projid; void* i_extra_isize; void* i_version_hi; void* i_disk_version; void** i_block; void* i_generation; void* i_file_acl_lo; void* i_file_acl_high; void* i_flags; void* i_dtime; void* i_links_count; void* i_gid_high; void* i_uid_high; void* i_gid_low; void* i_uid_low; void* i_mode; } ;
struct ext4_iloc {struct buffer_head* bh; } ;
struct buffer_head {int b_data; } ;
typedef int projid_t ;
typedef int handle_t ;
typedef int gid_t ;
struct TYPE_4__ {struct buffer_head* s_sbh; TYPE_1__* s_es; int s_inode_size; } ;
struct TYPE_3__ {void* s_rev_level; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct ext4_inode_info*,struct ext4_inode*) ;
 scalar_t__ FUNC_3 (struct ext4_inode*,struct ext4_inode_info*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ext4_inode_info* FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,struct inode*,struct ext4_inode*) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_7 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct buffer_head*) ;
 void* FUNC_11 (int) ;
 void* FUNC_12 (int) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (int *,int *,struct buffer_head*) ;
 int FUNC_15 (int *,struct super_block*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct super_block*) ;
 int FUNC_18 (struct super_block*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int *,struct ext4_inode*,struct ext4_inode_info*) ;
 int FUNC_21 (struct inode*,struct ext4_inode*,struct ext4_inode_info*) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (struct super_block*,struct ext4_inode*) ;
 int FUNC_24 (struct ext4_inode*,int) ;
 int FUNC_25 (int *,struct buffer_head*) ;
 struct ext4_inode* FUNC_26 (struct ext4_iloc*) ;
 int FUNC_27 (struct super_block*) ;
 int FUNC_28 (struct super_block*,int) ;
 scalar_t__ FUNC_29 (struct inode*,int ) ;
 int FUNC_30 (int *,struct inode*,int) ;
 int FUNC_31 (struct super_block*,int ,int ) ;
 int FUNC_32 (int *,int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_36 (struct inode*) ;
 int VAR_11 ;
 int FUNC_37 (struct inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_38 (int) ;
 scalar_t__ FUNC_39 (int *) ;
 int FUNC_40 (int ) ;
 int FUNC_41 (struct ext4_inode*,int ,int ) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (int ) ;
 scalar_t__ FUNC_44 (int ) ;
 int FUNC_45 (int *) ;
 int FUNC_46 (int *) ;
 int FUNC_47 (struct super_block*,int ) ;
 int FUNC_48 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_49(handle_t *VAR_14,
    struct inode *VAR_15,
    struct ext4_iloc *VAR_16)
{
 struct ext4_inode *VAR_17 = FUNC_26(VAR_16);
 struct ext4_inode_info *VAR_18 = FUNC_4(VAR_15);
 struct buffer_head *VAR_19 = VAR_16->bh;
 struct super_block *VAR_20 = VAR_15->i_sb;
 int VAR_21 = 0, VAR_22, VAR_23;
 int VAR_24 = 0, VAR_25 = 0;
 uid_t VAR_26;
 gid_t VAR_27;
 projid_t VAR_28;

 FUNC_45(&VAR_18->i_raw_lock);



 if (FUNC_29(VAR_15, VAR_4))
  FUNC_41(VAR_17, 0, FUNC_7(VAR_15->i_sb)->s_inode_size);

 VAR_17->i_mode = FUNC_11(VAR_15->i_mode);
 VAR_26 = FUNC_37(VAR_15);
 VAR_27 = FUNC_36(VAR_15);
 VAR_28 = FUNC_32(&VAR_13, VAR_18->i_projid);
 if (!(FUNC_47(VAR_15->i_sb, VAR_6))) {
  VAR_17->i_uid_low = FUNC_11(FUNC_40(VAR_26));
  VAR_17->i_gid_low = FUNC_11(FUNC_40(VAR_27));




  if (VAR_18->i_dtime && FUNC_39(&VAR_18->i_orphan)) {
   VAR_17->i_uid_high = 0;
   VAR_17->i_gid_high = 0;
  } else {
   VAR_17->i_uid_high =
    FUNC_11(FUNC_35(VAR_26));
   VAR_17->i_gid_high =
    FUNC_11(FUNC_35(VAR_27));
  }
 } else {
  VAR_17->i_uid_low = FUNC_11(FUNC_34(VAR_26));
  VAR_17->i_gid_low = FUNC_11(FUNC_33(VAR_27));
  VAR_17->i_uid_high = 0;
  VAR_17->i_gid_high = 0;
 }
 VAR_17->i_links_count = FUNC_11(VAR_15->i_nlink);

 FUNC_5(VAR_10, VAR_15, VAR_17);
 FUNC_5(VAR_11, VAR_15, VAR_17);
 FUNC_5(VAR_8, VAR_15, VAR_17);
 FUNC_2(VAR_9, VAR_18, VAR_17);

 VAR_21 = FUNC_20(VAR_14, VAR_17, VAR_18);
 if (VAR_21) {
  FUNC_46(&VAR_18->i_raw_lock);
  goto out_brelse;
 }
 VAR_17->i_dtime = FUNC_12(VAR_18->i_dtime);
 VAR_17->i_flags = FUNC_12(VAR_18->i_flags & 0xFFFFFFFF);
 if (FUNC_38(!FUNC_48(VAR_15->i_sb, VAR_5)))
  VAR_17->i_file_acl_high =
   FUNC_11(VAR_18->i_file_acl >> 32);
 VAR_17->i_file_acl_lo = FUNC_12(VAR_18->i_file_acl);
 if (VAR_18->i_disksize != FUNC_23(VAR_15->i_sb, VAR_17)) {
  FUNC_24(VAR_17, VAR_18->i_disksize);
  VAR_24 = 1;
 }
 if (VAR_18->i_disksize > 0x7fffffffULL) {
  if (!FUNC_17(VAR_20) ||
    FUNC_7(VAR_20)->s_es->s_rev_level ==
      FUNC_12(VAR_2))
   VAR_25 = 1;
 }
 VAR_17->i_generation = FUNC_12(VAR_15->i_generation);
 if (FUNC_9(VAR_15->i_mode) || FUNC_8(VAR_15->i_mode)) {
  if (FUNC_44(VAR_15->i_rdev)) {
   VAR_17->i_block[0] =
    FUNC_12(FUNC_43(VAR_15->i_rdev));
   VAR_17->i_block[1] = 0;
  } else {
   VAR_17->i_block[0] = 0;
   VAR_17->i_block[1] =
    FUNC_12(FUNC_42(VAR_15->i_rdev));
   VAR_17->i_block[2] = 0;
  }
 } else if (!FUNC_19(VAR_15)) {
  for (VAR_23 = 0; VAR_23 < VAR_3; VAR_23++)
   VAR_17->i_block[VAR_23] = VAR_18->i_data[VAR_23];
 }

 if (FUNC_38(!FUNC_48(VAR_15->i_sb, VAR_5))) {
  u64 VAR_29 = FUNC_22(VAR_15);

  VAR_17->i_disk_version = FUNC_12(VAR_29);
  if (VAR_18->i_extra_isize) {
   if (FUNC_3(VAR_17, VAR_18, VAR_12))
    VAR_17->i_version_hi =
     FUNC_12(VAR_29 >> 32);
   VAR_17->i_extra_isize =
    FUNC_11(VAR_18->i_extra_isize);
  }
 }

 FUNC_1(!FUNC_18(VAR_15->i_sb) &&
        VAR_28 != VAR_0);

 if (FUNC_6(VAR_15->i_sb) > VAR_1 &&
     FUNC_3(VAR_17, VAR_18, VAR_28))
  VAR_17->i_projid = FUNC_12(VAR_28);

 FUNC_21(VAR_15, VAR_17, VAR_18);
 FUNC_46(&VAR_18->i_raw_lock);
 if (VAR_15->i_sb->s_flags & VAR_7)
  FUNC_31(VAR_15->i_sb, VAR_15->i_ino,
           VAR_19->b_data);

 FUNC_0(VAR_19, "call ext4_handle_dirty_metadata");
 VAR_22 = FUNC_14(VAR_14, ((void*)0), VAR_19);
 if (!VAR_21)
  VAR_21 = VAR_22;
 FUNC_13(VAR_15, VAR_4);
 if (VAR_25) {
  FUNC_0(FUNC_7(VAR_20)->s_sbh, "get write access");
  VAR_21 = FUNC_25(VAR_14, FUNC_7(VAR_20)->s_sbh);
  if (VAR_21)
   goto out_brelse;
  FUNC_27(VAR_20);
  FUNC_16(VAR_14);
  VAR_21 = FUNC_15(VAR_14, VAR_20);
 }
 FUNC_30(VAR_14, VAR_15, VAR_24);
out_brelse:
 FUNC_10(VAR_19);
 FUNC_28(VAR_15->i_sb, VAR_21);
 return VAR_21;
}
