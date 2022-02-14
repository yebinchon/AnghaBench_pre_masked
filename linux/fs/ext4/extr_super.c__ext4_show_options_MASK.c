
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
struct seq_file {int dummy; } ;
struct mount_opts {scalar_t__ token; int flags; int mount_opt; } ;
struct ext4_super_block {int s_errors; int s_def_resgid; int s_def_resuid; } ;
struct ext4_sb_info {int s_def_mount_opt; int s_sb_block; int s_mount_opt; int s_commit_interval; int s_min_batch_time; int s_max_batch_time; int s_stripe; int s_inode_readahead_blks; int s_li_wait_mult; int s_max_dir_size_kb; int s_resgid; int s_resuid; struct ext4_super_block* s_es; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ext4_sb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 struct mount_opts* VAR_26 ;
 int FUNC_4 (struct seq_file*,struct super_block*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_27 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (struct super_block*,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct seq_file *VAR_28, struct super_block *VAR_29,
         int VAR_30)
{
 struct ext4_sb_info *VAR_31 = FUNC_1(VAR_29);
 struct ext4_super_block *VAR_32 = VAR_31->s_es;
 int VAR_33, VAR_34 = VAR_31->s_def_mount_opt;
 const struct mount_opts *VAR_35;
 char VAR_36 = VAR_30 ? '\n' : ',';




 if (VAR_31->s_sb_block != 1)
  FUNC_0(VAR_28, "%c" "sb=%llu", VAR_36, VAR_31->s_sb_block);

 for (VAR_35 = VAR_26; VAR_35->token != VAR_24; VAR_35++) {
  int VAR_37 = VAR_35->flags & VAR_23;
  if (((VAR_35->flags & (VAR_23|VAR_21)) == 0) ||
      (VAR_35->flags & VAR_22))
   continue;
  if (!VAR_30 && !(VAR_35->mount_opt & (VAR_31->s_mount_opt ^ VAR_34)))
   continue;
  if ((VAR_37 &&
       (VAR_31->s_mount_opt & VAR_35->mount_opt) != VAR_35->mount_opt) ||
      (!VAR_37 && (VAR_31->s_mount_opt & VAR_35->mount_opt)))
   continue;
  FUNC_0(VAR_28, "%c" "%s", VAR_36, FUNC_12(VAR_35->token));
 }

 if (VAR_30 || !FUNC_13(VAR_31->s_resuid, FUNC_10(&VAR_27, VAR_10)) ||
     FUNC_8(VAR_32->s_def_resuid) != VAR_10)
  FUNC_0(VAR_28, "%c" "resuid=%u", VAR_36, FUNC_6(&VAR_27, VAR_31->s_resuid));

 if (VAR_30 || !FUNC_7(VAR_31->s_resgid, FUNC_9(&VAR_27, VAR_9)) ||
     FUNC_8(VAR_32->s_def_resgid) != VAR_9)
  FUNC_0(VAR_28, "%c" "resgid=%u", VAR_36, FUNC_5(&VAR_27, VAR_31->s_resgid));

 VAR_33 = VAR_30 ? -1 : FUNC_8(VAR_32->s_errors);
 if (FUNC_11(VAR_29, VAR_4) && VAR_33 != VAR_13)
  FUNC_0(VAR_28, "%c" "errors=remount-ro", VAR_36);
 if (FUNC_11(VAR_29, VAR_2) && VAR_33 != VAR_11)
  FUNC_0(VAR_28, "%c" "errors=continue", VAR_36);
 if (FUNC_11(VAR_29, VAR_3) && VAR_33 != VAR_12)
  FUNC_0(VAR_28, "%c" "errors=panic", VAR_36);
 if (VAR_30 || VAR_31->s_commit_interval != VAR_20*VAR_18)
  FUNC_0(VAR_28, "%c" "commit=%lu", VAR_36, VAR_31->s_commit_interval / VAR_18);
 if (VAR_30 || VAR_31->s_min_batch_time != VAR_8)
  FUNC_0(VAR_28, "%c" "min_batch_time=%u", VAR_36, VAR_31->s_min_batch_time);
 if (VAR_30 || VAR_31->s_max_batch_time != VAR_7)
  FUNC_0(VAR_28, "%c" "max_batch_time=%u", VAR_36, VAR_31->s_max_batch_time);
 if (VAR_29->s_flags & VAR_25)
  FUNC_0(VAR_28, "%c" "i_version", VAR_36);
 if (VAR_30 || VAR_31->s_stripe)
  FUNC_0(VAR_28, "%c" "stripe=%lu", VAR_36, VAR_31->s_stripe);
 if (VAR_30 || VAR_14 &
   (VAR_31->s_mount_opt ^ VAR_34)) {
  if (FUNC_11(VAR_29, VAR_1) == VAR_15)
   FUNC_0(VAR_28, "%c" "data=journal", VAR_36);
  else if (FUNC_11(VAR_29, VAR_1) == VAR_16)
   FUNC_0(VAR_28, "%c" "data=ordered", VAR_36);
  else if (FUNC_11(VAR_29, VAR_1) == VAR_17)
   FUNC_0(VAR_28, "%c" "data=writeback", VAR_36);
 }
 if (VAR_30 ||
     VAR_31->s_inode_readahead_blks != VAR_5)
  FUNC_0(VAR_28, "%c" "inode_readahead_blks=%u", VAR_36, VAR_31->s_inode_readahead_blks);


 if (FUNC_11(VAR_29, VAR_19) && (VAR_30 ||
         (VAR_31->s_li_wait_mult != VAR_6)))
  FUNC_0(VAR_28, "%c" "init_itable=%u", VAR_36, VAR_31->s_li_wait_mult);
 if (VAR_30 || VAR_31->s_max_dir_size_kb)
  FUNC_0(VAR_28, "%c" "max_dir_size_kb=%u", VAR_36, VAR_31->s_max_dir_size_kb);
 if (FUNC_11(VAR_29, VAR_0))
  FUNC_0(VAR_28, "%c" "data_err=abort", VAR_36);
 if (FUNC_0(VAR_31))
  FUNC_0(VAR_28, "%c" "test_dummy_encryption", VAR_36);

 FUNC_4(VAR_28, VAR_29);
 return 0;
}
