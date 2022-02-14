
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ from; } ;
typedef TYPE_1__ substring_t ;
struct super_block {int s_flags; } ;
struct path {int dentry; } ;
struct mount_opts {int token; int flags; int mount_opt; } ;
struct inode {int i_rdev; int i_mode; } ;
struct ext4_sb_info {int s_commit_interval; int s_want_extra_isize; int s_max_batch_time; int s_min_batch_time; int s_inode_readahead_blks; int s_li_wait_mult; int s_max_dir_size_kb; int s_stripe; int s_mount_opt; int s_jquota_fmt; int s_journal; int s_mount_flags; int s_resgid; int s_resuid; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;

 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;

 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;


 int VAR_45 ;

 int VAR_46 ;
 int VAR_47 ;

 int VAR_48 ;
 int VAR_49 ;

 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_4 (int ) ;
 int VAR_55 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (struct super_block*,int ) ;
 int FUNC_8 () ;
 struct inode* FUNC_9 (int ) ;
 int VAR_56 ;
 scalar_t__ FUNC_10 (struct super_block*) ;
 struct mount_opts* VAR_57 ;
 int FUNC_11 (struct super_block*,int ,char*,...) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,int ,struct path*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (TYPE_1__*,int*) ;
 char* FUNC_19 (TYPE_1__*) ;
 unsigned long FUNC_20 (int ) ;
 int FUNC_21 (struct path*) ;
 scalar_t__ FUNC_22 (struct super_block*) ;
 int FUNC_23 (struct super_block*,int ) ;
 int FUNC_24 (struct super_block*,int ) ;
 int FUNC_25 (struct super_block*,int ,TYPE_1__*) ;
 int FUNC_26 (struct super_block*,int ) ;
 int FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (int) ;

__attribute__((used)) static int FUNC_29(struct super_block *VAR_58, char *VAR_59, int VAR_60,
       substring_t *VAR_61, unsigned long *VAR_62,
       unsigned int *VAR_63, int VAR_64)
{
 struct ext4_sb_info *VAR_65 = FUNC_0(VAR_58);
 const struct mount_opts *VAR_66;
 kuid_t VAR_67;
 kgid_t VAR_68;
 int VAR_69 = 0;
 switch (VAR_60) {
 case 132:
 case 130:
  FUNC_11(VAR_58, VAR_17, VAR_56, VAR_59, "3.5");
  break;
 case 128:
  return 1;
 case 129:
  FUNC_11(VAR_58, VAR_17, "Ignoring removed %s option", VAR_59);
  return 1;
 case 135:
  VAR_65->s_mount_flags |= VAR_5;
  return 1;
 case 134:
  VAR_58->s_flags |= VAR_53;
  return 1;
 case 133:
  VAR_58->s_flags |= VAR_54;
  return 1;
 case 131:
  VAR_58->s_flags &= ~VAR_54;
  return 1;
 }

 for (VAR_66 = VAR_57; VAR_66->token != VAR_35; VAR_66++)
  if (VAR_60 == VAR_66->token)
   break;

 if (VAR_66->token == VAR_35) {
  FUNC_11(VAR_58, VAR_15, "Unrecognized mount option \"%s\" "
    "or missing value", VAR_59);
  return -1;
 }

 if ((VAR_66->flags & VAR_25) && FUNC_2(VAR_58)) {
  FUNC_11(VAR_58, VAR_15,
    "Mount option \"%s\" incompatible with ext2", VAR_59);
  return -1;
 }
 if ((VAR_66->flags & VAR_26) && FUNC_3(VAR_58)) {
  FUNC_11(VAR_58, VAR_15,
    "Mount option \"%s\" incompatible with ext3", VAR_59);
  return -1;
 }

 if (VAR_61->from && !(VAR_66->flags & VAR_29) && FUNC_18(VAR_61, &VAR_69))
  return -1;
 if (VAR_61->from && (VAR_66->flags & VAR_23) && (VAR_69 < 0))
  return -1;
 if (VAR_66->flags & VAR_22) {
  if (VAR_66->mount_opt & VAR_7) {
   FUNC_24(VAR_58, VAR_2);
  } else if (VAR_66->mount_opt & VAR_8) {
   FUNC_24(VAR_58, VAR_3);
  } else
   return -1;
 }
 if (VAR_66->flags & VAR_20)
  FUNC_6(VAR_58, VAR_1);
 if (VAR_60 == VAR_45 && FUNC_22(VAR_58)) {
  FUNC_11(VAR_58, VAR_15, "Cannot change quota "
    "options when quota turned on");
  return -1;
 }

 if (VAR_66->flags & VAR_24) {
  FUNC_11(VAR_58, VAR_15, "%s option not supported", VAR_59);
 } else if (VAR_60 == VAR_30) {
  if (VAR_69 == 0)
   VAR_69 = VAR_14;
  else if (VAR_69 > VAR_12 / VAR_10) {
   FUNC_11(VAR_58, VAR_15,
     "Invalid commit interval %d, "
     "must be smaller than %d",
     VAR_69, VAR_12 / VAR_10);
   return -1;
  }
  VAR_65->s_commit_interval = VAR_10 * VAR_69;
 } else if (VAR_60 == VAR_34) {
  VAR_65->s_want_extra_isize = VAR_69;
 } else if (VAR_60 == VAR_42) {
  VAR_65->s_max_batch_time = VAR_69;
 } else if (VAR_60 == VAR_44) {
  VAR_65->s_min_batch_time = VAR_69;
 } else if (VAR_60 == VAR_38) {
  if (VAR_69 && (VAR_69 > (1 << 30) || !FUNC_13(VAR_69))) {
   FUNC_11(VAR_58, VAR_15,
     "EXT4-fs: inode_readahead_blks must be "
     "0 or a power of 2 smaller than 2^31");
   return -1;
  }
  VAR_65->s_inode_readahead_blks = VAR_69;
 } else if (VAR_60 == VAR_37) {
  FUNC_23(VAR_58, VAR_11);
  if (!VAR_61->from)
   VAR_69 = VAR_4;
  VAR_65->s_li_wait_mult = VAR_69;
 } else if (VAR_60 == VAR_43) {
  VAR_65->s_max_dir_size_kb = VAR_69;
 } else if (VAR_60 == VAR_50) {
  VAR_65->s_stripe = VAR_69;
 } else if (VAR_60 == VAR_49) {
  VAR_67 = FUNC_17(FUNC_8(), VAR_69);
  if (!FUNC_27(VAR_67)) {
   FUNC_11(VAR_58, VAR_15, "Invalid uid value %d", VAR_69);
   return -1;
  }
  VAR_65->s_resuid = VAR_67;
 } else if (VAR_60 == VAR_48) {
  VAR_68 = FUNC_16(FUNC_8(), VAR_69);
  if (!FUNC_12(VAR_68)) {
   FUNC_11(VAR_58, VAR_15, "Invalid gid value %d", VAR_69);
   return -1;
  }
  VAR_65->s_resgid = VAR_68;
 } else if (VAR_60 == VAR_39) {
  if (VAR_64) {
   FUNC_11(VAR_58, VAR_15,
     "Cannot specify journal on remount");
   return -1;
  }
  *VAR_62 = VAR_69;
 } else if (VAR_60 == VAR_41) {
  char *VAR_70;
  struct inode *VAR_71;
  struct path VAR_72;
  int VAR_73;

  if (VAR_64) {
   FUNC_11(VAR_58, VAR_15,
     "Cannot specify journal on remount");
   return -1;
  }
  VAR_70 = FUNC_19(&VAR_61[0]);
  if (!VAR_70) {
   FUNC_11(VAR_58, VAR_15, "error: could not dup "
    "journal device string");
   return -1;
  }

  VAR_73 = FUNC_14(VAR_70, VAR_18, &VAR_72);
  if (VAR_73) {
   FUNC_11(VAR_58, VAR_15, "error: could not find "
    "journal device path: error %d", VAR_73);
   FUNC_15(VAR_70);
   return -1;
  }

  VAR_71 = FUNC_9(VAR_72.dentry);
  if (!FUNC_4(VAR_71->i_mode)) {
   FUNC_11(VAR_58, VAR_15, "error: journal path %s "
    "is not a block device", VAR_70);
   FUNC_21(&VAR_72);
   FUNC_15(VAR_70);
   return -1;
  }

  *VAR_62 = FUNC_20(VAR_71->i_rdev);
  FUNC_21(&VAR_72);
  FUNC_15(VAR_70);
 } else if (VAR_60 == VAR_40) {
  if (VAR_69 > 7) {
   FUNC_11(VAR_58, VAR_15, "Invalid journal IO priority"
     " (must be 0-7)");
   return -1;
  }
  *VAR_63 =
   FUNC_1(VAR_13, VAR_69);
 } else if (VAR_60 == VAR_51) {





  FUNC_11(VAR_58, VAR_17,
    "Test dummy encryption mount option ignored");

 } else if (VAR_66->flags & VAR_21) {
  if (VAR_64) {
   if (!VAR_65->s_journal)
    FUNC_11(VAR_58, VAR_17, "Remounting file system with no journal so ignoring journalled data option");
   else if (FUNC_26(VAR_58, VAR_0) != VAR_66->mount_opt) {
    FUNC_11(VAR_58, VAR_15,
      "Cannot change data mode on remount");
    return -1;
   }
  } else {
   FUNC_6(VAR_58, VAR_0);
   VAR_65->s_mount_opt |= VAR_66->mount_opt;
  }
 } else if (VAR_60 == VAR_33) {





  FUNC_11(VAR_58, VAR_16, "dax option not supported");
  return -1;

 } else if (VAR_60 == VAR_31) {
  VAR_65->s_mount_opt |= VAR_66->mount_opt;
 } else if (VAR_60 == VAR_32) {
  VAR_65->s_mount_opt &= ~VAR_66->mount_opt;
 } else {
  if (!VAR_61->from)
   VAR_69 = 1;
  if (VAR_66->flags & VAR_19)
   VAR_69 = !VAR_69;
  else if (FUNC_28(!(VAR_66->flags & VAR_28))) {
   FUNC_11(VAR_58, VAR_17,
     "buggy handling of option %s", VAR_59);
   FUNC_5(1);
   return -1;
  }
  if (VAR_69 != 0)
   VAR_65->s_mount_opt |= VAR_66->mount_opt;
  else
   VAR_65->s_mount_opt &= ~VAR_66->mount_opt;
 }
 return 1;
}
