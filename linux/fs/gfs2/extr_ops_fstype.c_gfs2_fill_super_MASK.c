
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int s_quota_types; int s_time_gran; int * s_fs_info; int * s_root; scalar_t__ s_blocksize_bits; int s_maxbytes; int * s_qcop; int s_xattr; int * s_export_op; int * s_d_op; int * s_op; int s_magic; int s_flags; } ;
struct TYPE_7__ {int ls_jid; } ;
struct gfs2_args {int ar_statfs_quantum; scalar_t__ ar_spectator; int ar_quota_quantum; int ar_commit; scalar_t__ ar_nobarrier; scalar_t__ ar_posix_acl; } ;
struct TYPE_6__ {int gt_statfs_slow; int gt_statfs_quantum; int gt_quota_quantum; int gt_logd_secs; } ;
struct TYPE_5__ {scalar_t__ sb_bsize_shift; int sb_bsize; } ;
struct gfs2_sbd {char* sd_table_name; int sd_journal_ready; int * sd_master_dir; int * sd_root_dir; TYPE_3__ sd_lockstruct; int sd_fsname; struct gfs2_args sd_args; TYPE_2__ sd_tune; scalar_t__ sd_fsb2bb_shift; int sd_fsb2bb; TYPE_1__ sd_sb; int sd_flags; } ;
struct gfs2_holder {int dummy; } ;
struct fs_context {int sb_flags; struct gfs2_args* fs_private; } ;
struct TYPE_8__ {int flags; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_15 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gfs2_sbd*) ;
 int FUNC_4 (struct gfs2_sbd*,char*,int) ;
 int FUNC_5 (struct gfs2_sbd*) ;
 int FUNC_6 (struct gfs2_sbd*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (struct gfs2_sbd*) ;
 int FUNC_8 (struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_sbd*,int) ;
 int FUNC_10 (struct gfs2_sbd*) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 int FUNC_12 (struct gfs2_sbd*) ;
 int VAR_18 ;
 int FUNC_13 (struct gfs2_sbd*) ;
 int VAR_19 ;
 int FUNC_14 (struct gfs2_sbd*) ;
 int FUNC_15 (struct gfs2_sbd*) ;
 int VAR_20 ;
 int FUNC_16 (struct gfs2_sbd*,int ) ;
 int FUNC_17 (struct gfs2_sbd*,struct gfs2_holder*,int ) ;
 int FUNC_18 (struct gfs2_sbd*,int) ;
 int FUNC_19 (struct gfs2_sbd*,int ) ;
 int FUNC_20 (struct gfs2_sbd*,int) ;
 struct gfs2_sbd* FUNC_21 (struct super_block*) ;
 int FUNC_22 (char*) ;
 TYPE_4__* FUNC_23 (struct super_block*) ;
 int FUNC_24 (struct super_block*,int ) ;
 int FUNC_25 (struct super_block*) ;
 int FUNC_26 (int ,int *) ;
 int FUNC_27 (int ,int,char*,char*,...) ;
 int FUNC_28 (struct gfs2_sbd*) ;

__attribute__((used)) static int FUNC_29(struct super_block *VAR_21, struct fs_context *VAR_22)
{
 struct gfs2_args *VAR_23 = VAR_22->fs_private;
 int VAR_24 = VAR_22->sb_flags & VAR_12;
 struct gfs2_sbd *VAR_25;
 struct gfs2_holder VAR_26;
 int VAR_27;

 VAR_25 = FUNC_21(VAR_21);
 if (!VAR_25) {
  FUNC_22("can't alloc struct gfs2_sbd\n");
  return -VAR_2;
 }
 VAR_25->sd_args = *VAR_23;

 if (VAR_25->sd_args.ar_spectator) {
                VAR_21->s_flags |= VAR_11;
  FUNC_26(VAR_14, &VAR_25->sd_flags);
 }
 if (VAR_25->sd_args.ar_posix_acl)
  VAR_21->s_flags |= VAR_10;
 if (VAR_25->sd_args.ar_nobarrier)
  FUNC_26(VAR_13, &VAR_25->sd_flags);

 VAR_21->s_flags |= VAR_9;
 VAR_21->s_magic = VAR_5;
 VAR_21->s_op = &VAR_19;
 VAR_21->s_d_op = &VAR_16;
 VAR_21->s_export_op = &VAR_17;
 VAR_21->s_xattr = VAR_20;
 VAR_21->s_qcop = &VAR_18;
 VAR_21->s_quota_types = VAR_8 | VAR_7;
 FUNC_23(VAR_21)->flags |= VAR_1;
 VAR_21->s_time_gran = 1;
 VAR_21->s_maxbytes = VAR_6;



 VAR_25->sd_sb.sb_bsize = FUNC_24(VAR_21, VAR_3);
 VAR_25->sd_sb.sb_bsize_shift = VAR_21->s_blocksize_bits;
 VAR_25->sd_fsb2bb_shift = VAR_25->sd_sb.sb_bsize_shift -
                               VAR_4;
 VAR_25->sd_fsb2bb = FUNC_0(VAR_25->sd_fsb2bb_shift);

 VAR_25->sd_tune.gt_logd_secs = VAR_25->sd_args.ar_commit;
 VAR_25->sd_tune.gt_quota_quantum = VAR_25->sd_args.ar_quota_quantum;
 if (VAR_25->sd_args.ar_statfs_quantum) {
  VAR_25->sd_tune.gt_statfs_slow = 0;
  VAR_25->sd_tune.gt_statfs_quantum = VAR_25->sd_args.ar_statfs_quantum;
 } else {
  VAR_25->sd_tune.gt_statfs_slow = 1;
  VAR_25->sd_tune.gt_statfs_quantum = 30;
 }

 VAR_27 = FUNC_18(VAR_25, VAR_24);
 if (VAR_27) {


  FUNC_3(VAR_25);
  VAR_21->s_fs_info = ((void*)0);
  return VAR_27;
 }

 FUNC_27(VAR_25->sd_fsname, sizeof(VAR_25->sd_fsname), "%s", VAR_25->sd_table_name);

 VAR_27 = FUNC_14(VAR_25);







 if (VAR_27)
  return VAR_27;

 FUNC_5(VAR_25);

 VAR_27 = FUNC_9(VAR_25, VAR_24);
 if (VAR_27)
  goto fail_debug;

 VAR_27 = FUNC_17(VAR_25, &VAR_26, VAR_0);
 if (VAR_27)
  goto fail_lm;

 VAR_27 = FUNC_20(VAR_25, VAR_24);
 if (VAR_27)
  goto fail_locking;

 VAR_27 = FUNC_28(VAR_25);
 if (VAR_27)
  goto fail_sb;
 if (VAR_25->sd_lockstruct.ls_jid < 0) {
  VAR_27 = VAR_25->sd_lockstruct.ls_jid;
  VAR_25->sd_lockstruct.ls_jid = 0;
  goto fail_sb;
 }

 if (VAR_25->sd_args.ar_spectator)
  FUNC_27(VAR_25->sd_fsname, sizeof(VAR_25->sd_fsname), "%s.s",
    VAR_25->sd_table_name);
 else
  FUNC_27(VAR_25->sd_fsname, sizeof(VAR_25->sd_fsname), "%s.%u",
    VAR_25->sd_table_name, VAR_25->sd_lockstruct.ls_jid);

 VAR_27 = FUNC_16(VAR_25, VAR_0);
 if (VAR_27)
  goto fail_sb;

 VAR_27 = FUNC_19(VAR_25, VAR_0);
 if (VAR_27)
  goto fail_inodes;

 VAR_27 = FUNC_13(VAR_25);
 if (VAR_27) {
  FUNC_4(VAR_25, "can't initialize statfs subsystem: %d\n", VAR_27);
  goto fail_per_node;
 }

 if (!FUNC_25(VAR_21)) {
  VAR_27 = FUNC_11(VAR_25);
  if (VAR_27) {
   FUNC_4(VAR_25, "can't make FS RW: %d\n", VAR_27);
   goto fail_per_node;
  }
 }

 FUNC_8(&VAR_26);
 FUNC_12(VAR_25);
 return 0;

fail_per_node:
 FUNC_19(VAR_25, VAR_15);
fail_inodes:
 FUNC_16(VAR_25, VAR_15);
fail_sb:
 if (VAR_25->sd_root_dir)
  FUNC_2(VAR_25->sd_root_dir);
 if (VAR_25->sd_master_dir)
  FUNC_2(VAR_25->sd_master_dir);
 if (VAR_21->s_root)
  FUNC_2(VAR_21->s_root);
 VAR_21->s_root = ((void*)0);
fail_locking:
 FUNC_17(VAR_25, &VAR_26, VAR_15);
fail_lm:
 FUNC_1(&VAR_25->sd_journal_ready);
 FUNC_7(VAR_25);
 FUNC_10(VAR_25);
fail_debug:
 FUNC_6(VAR_25);


 FUNC_15(VAR_25);
 VAR_21->s_fs_info = ((void*)0);
 return VAR_27;
}
