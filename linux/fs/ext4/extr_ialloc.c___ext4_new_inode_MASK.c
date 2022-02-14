
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* umode_t ;
typedef int uid_t ;
struct super_block {int dummy; } ;
struct qstr {int dummy; } ;
struct posix_acl {int a_count; TYPE_3__* h_transaction; int b_data; } ;
struct inode {unsigned long i_ino; unsigned long i_generation; int i_flags; int i_mtime; int i_ctime; int i_atime; scalar_t__ i_blocks; struct super_block* i_sb; int i_gid; int i_uid; void* i_mode; int i_nlink; } ;
struct ext4_sb_info {int s_inode_goal; int s_csum_seed; int s_want_extra_isize; TYPE_2__* s_flex_groups; scalar_t__ s_log_groups_per_flex; int s_dirs_counter; int s_freeinodes_counter; TYPE_1__* s_es; scalar_t__ s_journal; } ;
struct ext4_inode_info {size_t i_last_alloc_group; int i_flags; size_t i_block_group; int i_datasync_tid; int i_sync_tid; scalar_t__ i_inline_off; int i_extra_isize; void* i_csum_seed; scalar_t__ i_dtime; scalar_t__ i_file_acl; scalar_t__ i_disksize; scalar_t__ i_dir_start_lookup; int i_data; int i_crtime; int i_projid; } ;
struct ext4_group_info {int alloc_sem; } ;
struct ext4_group_desc {int bg_flags; } ;
struct buffer_head {int a_count; TYPE_3__* h_transaction; int b_data; } ;
typedef int inum ;
typedef struct posix_acl handle_t ;
typedef int gen ;
typedef size_t ext4_group_t ;
typedef int ext4_acl_entry ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __le32 ;
struct TYPE_6__ {int t_tid; } ;
struct TYPE_5__ {int free_inodes; int used_dirs; } ;
struct TYPE_4__ {int s_inodes_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct posix_acl*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ext4_sb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_3 (struct posix_acl*) ;
 struct inode* FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long FUNC_5 (struct super_block*) ;
 int VAR_10 ;
 int VAR_11 ;
 struct ext4_inode_info* FUNC_6 (struct inode*) ;
 size_t FUNC_7 (struct super_block*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (struct ext4_group_info*) ;
 struct ext4_sb_info* FUNC_9 (struct super_block*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (struct posix_acl*) ;
 int FUNC_13 (struct posix_acl*) ;
 scalar_t__ FUNC_14 (void*) ;
 scalar_t__ FUNC_15 (void*) ;
 scalar_t__ FUNC_16 (void*) ;
 int VAR_18 ;
 struct posix_acl* FUNC_17 (struct super_block*,unsigned int,int,int,int ) ;
 int FUNC_18 (struct super_block*,int *,int *,int,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct posix_acl*) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (unsigned long) ;
 int FUNC_25 () ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct inode*) ;
 int FUNC_29 (struct inode*) ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (struct inode*) ;
 int FUNC_32 (struct super_block*,size_t,struct ext4_group_desc*,struct posix_acl*) ;
 void* FUNC_33 (struct ext4_sb_info*,int,int *,int) ;
 int FUNC_34 (struct ext4_inode_info*) ;
 int FUNC_35 (char*,unsigned long) ;
 int FUNC_36 (struct super_block*,char*,unsigned long) ;
 int FUNC_37 (struct posix_acl*,struct inode*) ;
 size_t FUNC_38 (struct ext4_sb_info*,size_t) ;
 int FUNC_39 (struct ext4_sb_info*) ;
 int FUNC_40 (struct super_block*,size_t,struct ext4_group_desc*) ;
 int FUNC_41 (struct super_block*,struct ext4_group_desc*,int ) ;
 scalar_t__ FUNC_42 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_43 (struct super_block*,struct ext4_group_desc*,scalar_t__) ;
 struct ext4_group_desc* FUNC_44 (struct super_block*,size_t,struct posix_acl**) ;
 struct ext4_group_info* FUNC_45 (struct super_block*,size_t) ;
 size_t FUNC_46 (struct super_block*) ;
 int FUNC_47 (struct super_block*,size_t,struct ext4_group_desc*) ;
 int FUNC_48 (struct posix_acl*,int *,struct posix_acl*) ;
 int FUNC_49 (struct posix_acl*) ;
 scalar_t__ FUNC_50 (struct posix_acl*) ;
 scalar_t__ FUNC_51 (struct super_block*) ;
 scalar_t__ FUNC_52 (struct super_block*) ;
 scalar_t__ FUNC_53 (struct super_block*) ;
 scalar_t__ FUNC_54 (struct super_block*) ;
 scalar_t__ FUNC_55 (struct super_block*) ;
 int FUNC_56 (struct posix_acl*,struct inode*,struct inode*) ;
 int FUNC_57 (struct posix_acl*,struct inode*,struct inode*,struct qstr const*) ;
 int FUNC_58 (struct super_block*,size_t,struct ext4_group_desc*,struct posix_acl*,int) ;
 size_t FUNC_59 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_60 (struct super_block*,struct ext4_group_desc*,unsigned long) ;
 int FUNC_61 (struct posix_acl*,struct posix_acl*) ;
 int FUNC_62 (struct super_block*,size_t) ;
 int FUNC_63 (struct super_block*,size_t,int ) ;
 int FUNC_64 (struct posix_acl*,struct inode*) ;
 int FUNC_65 (void*,int) ;
 struct posix_acl* FUNC_66 (struct super_block*,size_t) ;
 struct posix_acl* FUNC_67 (struct super_block*,size_t) ;
 int FUNC_68 (unsigned long,int ) ;
 int FUNC_69 (struct inode*,int ) ;
 int FUNC_70 (struct inode*) ;
 int FUNC_71 (struct inode*,int ) ;
 int FUNC_72 (struct super_block*,int) ;
 int FUNC_73 (unsigned long,int ) ;
 scalar_t__ FUNC_74 (struct inode*,int ) ;
 int FUNC_75 (struct super_block*,size_t) ;
 scalar_t__ FUNC_76 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_77 (struct super_block*,struct ext4_group_desc*,scalar_t__) ;
 int FUNC_78 (struct super_block*,struct inode*,size_t*,void*,struct qstr const*) ;
 int FUNC_79 (struct super_block*,struct inode*,size_t*,void*) ;
 int FUNC_80 (struct super_block*,size_t,struct posix_acl*,unsigned long*) ;
 int FUNC_81 (struct inode*) ;
 int FUNC_82 (struct inode*) ;
 int FUNC_83 (struct inode*,struct inode*,struct posix_acl*,int) ;
 struct posix_acl* FUNC_84 (struct inode*,int ) ;
 int FUNC_85 (struct inode*,int ) ;
 int FUNC_86 (struct inode*,int ) ;
 int VAR_19 ;
 int FUNC_87 (struct inode*,struct inode*,void*) ;
 scalar_t__ FUNC_88 (struct inode*) ;
 int FUNC_89 (struct inode*) ;
 int FUNC_90 (int ) ;
 int FUNC_91 (int *,int ) ;
 int FUNC_92 (int ,int ,int) ;
 struct inode* FUNC_93 (struct super_block*) ;
 int FUNC_94 (int *) ;
 int FUNC_95 (int *) ;
 int FUNC_96 (struct posix_acl*) ;
 unsigned long FUNC_97 () ;
 scalar_t__ FUNC_98 (struct super_block*,int ) ;
 int FUNC_99 (struct inode*,struct inode*,void*) ;
 int FUNC_100 (struct inode*,void*) ;
 scalar_t__ FUNC_101 (int ) ;
 int FUNC_102 (struct inode*) ;
 int FUNC_103 (int *) ;

struct inode *FUNC_104(handle_t *VAR_20, struct inode *VAR_21,
          umode_t VAR_22, const struct qstr *VAR_23,
          __u32 VAR_24, uid_t *VAR_25, __u32 VAR_26,
          int VAR_27, unsigned int VAR_28,
          int VAR_29)
{
 struct super_block *VAR_30;
 struct buffer_head *VAR_31 = ((void*)0);
 struct buffer_head *VAR_32;
 ext4_group_t VAR_33, VAR_34 = 0;
 unsigned long VAR_35 = 0;
 struct inode *VAR_36;
 struct ext4_group_desc *VAR_37 = ((void*)0);
 struct ext4_inode_info *VAR_38;
 struct ext4_sb_info *VAR_39;
 int VAR_40, VAR_41;
 struct inode *VAR_42;
 ext4_group_t VAR_43;
 ext4_group_t VAR_44;
 struct ext4_group_info *VAR_45;
 int VAR_46 = 0;


 if (!VAR_21 || !VAR_21->i_nlink)
  return FUNC_4(-VAR_5);

 VAR_30 = VAR_21->i_sb;
 VAR_39 = FUNC_9(VAR_30);

 if (FUNC_101(FUNC_39(VAR_39)))
  return FUNC_4(-VAR_1);

 if ((FUNC_11(VAR_21) || FUNC_2(VAR_39)) &&
     (FUNC_16(VAR_22) || FUNC_14(VAR_22) || FUNC_15(VAR_22)) &&
     !(VAR_26 & VAR_9)) {
  VAR_41 = FUNC_81(VAR_21);
  if (VAR_41)
   return FUNC_4(VAR_41);
  if (!FUNC_82(VAR_21))
   return FUNC_4(-VAR_2);
  VAR_46 = 1;
 }

 if (!VAR_20 && VAR_39->s_journal && !(VAR_26 & VAR_9)) {
  if (VAR_46)
   VAR_29 += FUNC_18(VAR_30,
     ((void*)0) , ((void*)0) ,
     VAR_16,
     1 );
 }

 VAR_33 = FUNC_46(VAR_30);
 FUNC_100(VAR_21, VAR_22);
 VAR_36 = FUNC_93(VAR_30);
 if (!VAR_36)
  return FUNC_4(-VAR_3);
 VAR_38 = FUNC_6(VAR_36);






 if (VAR_25) {
  VAR_36->i_mode = VAR_22;
  FUNC_86(VAR_36, VAR_25[0]);
  FUNC_85(VAR_36, VAR_25[1]);
 } else if (FUNC_98(VAR_30, VAR_17)) {
  VAR_36->i_mode = VAR_22;
  VAR_36->i_uid = FUNC_25();
  VAR_36->i_gid = VAR_21->i_gid;
 } else
  FUNC_87(VAR_36, VAR_21, VAR_22);

 if (FUNC_53(VAR_30) &&
     FUNC_74(VAR_21, VAR_13))
  VAR_38->i_projid = FUNC_6(VAR_21)->i_projid;
 else
  VAR_38->i_projid = FUNC_91(&VAR_19, VAR_8);

 VAR_41 = FUNC_31(VAR_36);
 if (VAR_41)
  goto out;

 if (!VAR_24)
  VAR_24 = VAR_39->s_inode_goal;

 if (VAR_24 && VAR_24 <= FUNC_90(VAR_39->s_es->s_inodes_count)) {
  VAR_34 = (VAR_24 - 1) / FUNC_7(VAR_30);
  VAR_35 = (VAR_24 - 1) % FUNC_7(VAR_30);
  VAR_40 = 0;
  goto got_group;
 }

 if (FUNC_14(VAR_22))
  VAR_40 = FUNC_78(VAR_30, VAR_21, &VAR_34, VAR_22, VAR_23);
 else
  VAR_40 = FUNC_79(VAR_30, VAR_21, &VAR_34, VAR_22);

got_group:
 FUNC_6(VAR_21)->i_last_alloc_group = VAR_34;
 VAR_41 = -VAR_4;
 if (VAR_40 == -1)
  goto out;






 for (VAR_43 = 0; VAR_43 < VAR_33; VAR_43++, VAR_35 = 0) {
  VAR_41 = -VAR_1;

  VAR_37 = FUNC_44(VAR_30, VAR_34, &VAR_32);
  if (!VAR_37)
   goto out;




  if (FUNC_42(VAR_30, VAR_37) == 0)
   goto next_group;

  VAR_45 = FUNC_45(VAR_30, VAR_34);

  if (FUNC_8(VAR_45))
   goto next_group;

  FUNC_21(VAR_31);
  VAR_31 = FUNC_67(VAR_30, VAR_34);

  if (FUNC_8(VAR_45) ||
      FUNC_12(VAR_31)) {
   VAR_31 = ((void*)0);
   goto next_group;
  }

repeat_in_this_group:
  VAR_40 = FUNC_80(VAR_30, VAR_34, VAR_31, &VAR_35);
  if (!VAR_40)
   goto next_group;

  if (VAR_34 == 0 && (VAR_35 + 1) < FUNC_5(VAR_30)) {
   FUNC_36(VAR_30, "reserved inode found cleared - "
       "inode=%lu", VAR_35 + 1);
   FUNC_63(VAR_30, VAR_34,
     VAR_11);
   goto next_group;
  }

  if (!VAR_20) {
   FUNC_1(VAR_29 <= 0);
   VAR_20 = FUNC_17(VAR_21->i_sb, VAR_28,
        VAR_27, VAR_29,
        0);
   if (FUNC_12(VAR_20)) {
    VAR_41 = FUNC_13(VAR_20);
    FUNC_72(VAR_30, VAR_41);
    goto out;
   }
  }
  FUNC_0(VAR_31, "get_write_access");
  VAR_41 = FUNC_61(VAR_20, VAR_31);
  if (VAR_41) {
   FUNC_72(VAR_30, VAR_41);
   goto out;
  }
  FUNC_62(VAR_30, VAR_34);
  VAR_40 = FUNC_73(VAR_35, VAR_31->b_data);
  if (VAR_40) {



   VAR_40 = FUNC_80(VAR_30, VAR_34, VAR_31, &VAR_35);
   if (VAR_40) {
    FUNC_68(VAR_35, VAR_31->b_data);
    VAR_40 = 0;
   } else {
    VAR_40 = 1;
   }
  }
  FUNC_75(VAR_30, VAR_34);
  VAR_35++;
  if (!VAR_40)
   goto got;

  if (VAR_35 < FUNC_7(VAR_30))
   goto repeat_in_this_group;
next_group:
  if (++VAR_34 == VAR_33)
   VAR_34 = 0;
 }
 VAR_41 = -VAR_4;
 goto out;

got:
 FUNC_0(VAR_31, "call ext4_handle_dirty_metadata");
 VAR_41 = FUNC_48(VAR_20, ((void*)0), VAR_31);
 if (VAR_41) {
  FUNC_72(VAR_30, VAR_41);
  goto out;
 }

 FUNC_0(VAR_32, "get_write_access");
 VAR_41 = FUNC_61(VAR_20, VAR_32);
 if (VAR_41) {
  FUNC_72(VAR_30, VAR_41);
  goto out;
 }


 if (FUNC_54(VAR_30) &&
     VAR_37->bg_flags & FUNC_23(VAR_6)) {
  struct buffer_head *VAR_47;

  VAR_47 = FUNC_66(VAR_30, VAR_34);
  if (FUNC_12(VAR_47)) {
   VAR_41 = FUNC_13(VAR_47);
   goto out;
  }
  FUNC_0(VAR_47, "get block bitmap access");
  VAR_41 = FUNC_61(VAR_20, VAR_47);
  if (VAR_41) {
   FUNC_21(VAR_47);
   FUNC_72(VAR_30, VAR_41);
   goto out;
  }

  FUNC_0(VAR_47, "dirty block bitmap");
  VAR_41 = FUNC_48(VAR_20, ((void*)0), VAR_47);


  FUNC_62(VAR_30, VAR_34);
  if (FUNC_54(VAR_30) &&
      (VAR_37->bg_flags & FUNC_23(VAR_6))) {
   VAR_37->bg_flags &= FUNC_23(~VAR_6);
   FUNC_41(VAR_30, VAR_37,
    FUNC_40(VAR_30, VAR_34, VAR_37));
   FUNC_32(VAR_30, VAR_34, VAR_37,
         VAR_47);
   FUNC_47(VAR_30, VAR_34, VAR_37);
  }
  FUNC_75(VAR_30, VAR_34);
  FUNC_21(VAR_47);

  if (VAR_41) {
   FUNC_72(VAR_30, VAR_41);
   goto out;
  }
 }


 if (FUNC_54(VAR_30)) {
  int VAR_48;
  struct ext4_group_info *VAR_49 = FUNC_45(VAR_30, VAR_34);

  FUNC_27(&VAR_49->alloc_sem);
  FUNC_62(VAR_30, VAR_34);
  VAR_48 = FUNC_7(VAR_30) -
   FUNC_59(VAR_30, VAR_37);
  if (VAR_37->bg_flags & FUNC_23(VAR_7)) {
   VAR_37->bg_flags &= FUNC_23(~VAR_7);
   VAR_48 = 0;
  }





  if (VAR_35 > VAR_48)
   FUNC_60(VAR_30, VAR_37,
     (FUNC_7(VAR_30) - VAR_35));
  FUNC_103(&VAR_49->alloc_sem);
 } else {
  FUNC_62(VAR_30, VAR_34);
 }

 FUNC_43(VAR_30, VAR_37, FUNC_42(VAR_30, VAR_37) - 1);
 if (FUNC_14(VAR_22)) {
  FUNC_77(VAR_30, VAR_37, FUNC_76(VAR_30, VAR_37) + 1);
  if (VAR_39->s_log_groups_per_flex) {
   ext4_group_t VAR_50 = FUNC_38(VAR_39, VAR_34);

   FUNC_20(&VAR_39->s_flex_groups[VAR_50].used_dirs);
  }
 }
 if (FUNC_54(VAR_30)) {
  FUNC_58(VAR_30, VAR_34, VAR_37, VAR_31,
        FUNC_7(VAR_30) / 8);
  FUNC_47(VAR_30, VAR_34, VAR_37);
 }
 FUNC_75(VAR_30, VAR_34);

 FUNC_0(VAR_32, "call ext4_handle_dirty_metadata");
 VAR_41 = FUNC_48(VAR_20, ((void*)0), VAR_32);
 if (VAR_41) {
  FUNC_72(VAR_30, VAR_41);
  goto out;
 }

 FUNC_94(&VAR_39->s_freeinodes_counter);
 if (FUNC_14(VAR_22))
  FUNC_95(&VAR_39->s_dirs_counter);

 if (VAR_39->s_log_groups_per_flex) {
  VAR_44 = FUNC_38(VAR_39, VAR_34);
  FUNC_19(&VAR_39->s_flex_groups[VAR_44].free_inodes);
 }

 VAR_36->i_ino = VAR_35 + VAR_34 * FUNC_7(VAR_30);

 VAR_36->i_blocks = 0;
 VAR_36->i_mtime = VAR_36->i_atime = VAR_36->i_ctime = FUNC_26(VAR_36);
 VAR_38->i_crtime = VAR_36->i_mtime;

 FUNC_92(VAR_38->i_data, 0, sizeof(VAR_38->i_data));
 VAR_38->i_dir_start_lookup = 0;
 VAR_38->i_disksize = 0;


 VAR_38->i_flags =
  FUNC_65(VAR_22, FUNC_6(VAR_21)->i_flags & VAR_10);
 VAR_38->i_flags |= VAR_26;
 VAR_38->i_file_acl = 0;
 VAR_38->i_dtime = 0;
 VAR_38->i_block_group = VAR_34;
 VAR_38->i_last_alloc_group = ~0;

 FUNC_70(VAR_36);
 if (FUNC_10(VAR_36))
  FUNC_49(VAR_20);
 if (FUNC_88(VAR_36) < 0) {




  VAR_41 = -VAR_1;
  FUNC_36(VAR_30, "failed to insert inode %lu: doubly allocated?",
      VAR_36->i_ino);
  FUNC_63(VAR_30, VAR_34,
     VAR_11);
  goto out;
 }
 VAR_36->i_generation = FUNC_97();


 if (FUNC_55(VAR_30)) {
  __u32 VAR_51;
  __le32 VAR_52 = FUNC_24(VAR_36->i_ino);
  __le32 VAR_53 = FUNC_24(VAR_36->i_generation);
  VAR_51 = FUNC_33(VAR_39, VAR_39->s_csum_seed, (__u8 *)&VAR_52,
       sizeof(VAR_52));
  VAR_38->i_csum_seed = FUNC_33(VAR_39, VAR_51, (__u8 *)&VAR_53,
           sizeof(VAR_53));
 }

 FUNC_34(VAR_38);
 FUNC_71(VAR_36, VAR_15);

 VAR_38->i_extra_isize = VAR_39->s_want_extra_isize;
 VAR_38->i_inline_off = 0;
 if (FUNC_52(VAR_30))
  FUNC_71(VAR_36, VAR_14);
 VAR_42 = VAR_36;
 VAR_41 = FUNC_28(VAR_36);
 if (VAR_41)
  goto fail_drop;






 if (VAR_46) {
  VAR_41 = FUNC_83(VAR_21, VAR_36, VAR_20, 1);
  if (VAR_41)
   goto fail_free_drop;
 }

 if (!(VAR_38->i_flags & VAR_9)) {
  VAR_41 = FUNC_56(VAR_20, VAR_36, VAR_21);
  if (VAR_41)
   goto fail_free_drop;

  VAR_41 = FUNC_57(VAR_20, VAR_36, VAR_21, VAR_23);
  if (VAR_41)
   goto fail_free_drop;
 }

 if (FUNC_51(VAR_30)) {

  if (FUNC_14(VAR_22) || FUNC_16(VAR_22) || FUNC_15(VAR_22)) {
   FUNC_69(VAR_36, VAR_12);
   FUNC_37(VAR_20, VAR_36);
  }
 }

 if (FUNC_50(VAR_20)) {
  VAR_38->i_sync_tid = VAR_20->h_transaction->t_tid;
  VAR_38->i_datasync_tid = VAR_20->h_transaction->t_tid;
 }

 VAR_41 = FUNC_64(VAR_20, VAR_36);
 if (VAR_41) {
  FUNC_72(VAR_30, VAR_41);
  goto fail_free_drop;
 }

 FUNC_35("allocating inode %lu\n", VAR_36->i_ino);
 FUNC_99(VAR_36, VAR_21, VAR_22);
 FUNC_21(VAR_31);
 return VAR_42;

fail_free_drop:
 FUNC_30(VAR_36);
fail_drop:
 FUNC_22(VAR_36);
 FUNC_102(VAR_36);
out:
 FUNC_29(VAR_36);
 VAR_36->i_flags |= VAR_18;
 FUNC_89(VAR_36);
 FUNC_21(VAR_31);
 return FUNC_4(VAR_41);
}
