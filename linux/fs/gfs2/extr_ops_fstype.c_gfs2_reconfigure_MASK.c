
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; struct gfs2_sbd* s_fs_info; } ;
struct gfs2_tune {int gt_statfs_slow; int gt_statfs_quantum; int gt_spin; int gt_quota_quantum; int gt_logd_secs; } ;
struct gfs2_args {int ar_statfs_quantum; scalar_t__ ar_spectator; scalar_t__ ar_localflocks; scalar_t__ ar_meta; int ar_quota_quantum; int ar_commit; scalar_t__ ar_nobarrier; scalar_t__ ar_posix_acl; int ar_hostdata; int ar_locktable; int ar_lockproto; } ;
struct gfs2_sbd {int sd_flags; struct gfs2_args sd_args; struct gfs2_tune sd_tune; } ;
struct fs_context {int sb_flags; struct gfs2_args* fs_private; TYPE_1__* root; } ;
struct TYPE_2__ {struct super_block* d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct fs_context*,char*) ;
 int FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (struct gfs2_sbd*) ;
 int FUNC_4 (struct gfs2_sbd*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (struct super_block*) ;

__attribute__((used)) static int FUNC_10(struct fs_context *VAR_4)
{
 struct super_block *VAR_5 = VAR_4->root->d_sb;
 struct gfs2_sbd *VAR_6 = VAR_5->s_fs_info;
 struct gfs2_args *VAR_7 = &VAR_6->sd_args;
 struct gfs2_args *VAR_8 = VAR_4->fs_private;
 struct gfs2_tune *VAR_9 = &VAR_6->sd_tune;
 int VAR_10 = 0;

 FUNC_9(VAR_5);

 FUNC_6(&VAR_9->gt_spin);
 VAR_7->ar_commit = VAR_9->gt_logd_secs;
 VAR_7->ar_quota_quantum = VAR_9->gt_quota_quantum;
 if (VAR_9->gt_statfs_slow)
  VAR_7->ar_statfs_quantum = 0;
 else
  VAR_7->ar_statfs_quantum = VAR_9->gt_statfs_quantum;
 FUNC_7(&VAR_9->gt_spin);

 if (FUNC_8(VAR_8->ar_lockproto, VAR_7->ar_lockproto)) {
  FUNC_1(VAR_4, "gfs2: reconfiguration of locking protocol not allowed");
  return -VAR_0;
 }
 if (FUNC_8(VAR_8->ar_locktable, VAR_7->ar_locktable)) {
  FUNC_1(VAR_4, "gfs2: reconfiguration of lock table not allowed");
  return -VAR_0;
 }
 if (FUNC_8(VAR_8->ar_hostdata, VAR_7->ar_hostdata)) {
  FUNC_1(VAR_4, "gfs2: reconfiguration of host data not allowed");
  return -VAR_0;
 }
 if (VAR_8->ar_spectator != VAR_7->ar_spectator) {
  FUNC_1(VAR_4, "gfs2: reconfiguration of spectator mode not allowed");
  return -VAR_0;
 }
 if (VAR_8->ar_localflocks != VAR_7->ar_localflocks) {
  FUNC_1(VAR_4, "gfs2: reconfiguration of localflocks not allowed");
  return -VAR_0;
 }
 if (VAR_8->ar_meta != VAR_7->ar_meta) {
  FUNC_1(VAR_4, "gfs2: switching between gfs2 and gfs2meta not allowed");
  return -VAR_0;
 }
 if (VAR_7->ar_spectator)
  VAR_4->sb_flags |= VAR_2;

 if ((VAR_5->s_flags ^ VAR_4->sb_flags) & VAR_2) {
  if (VAR_4->sb_flags & VAR_2) {
   VAR_10 = FUNC_2(VAR_6);
   if (VAR_10)
    FUNC_1(VAR_4, "gfs2: unable to remount read-only");
  } else {
   VAR_10 = FUNC_3(VAR_6);
   if (VAR_10)
    FUNC_1(VAR_4, "gfs2: unable to remount read-write");
  }
 }
 VAR_6->sd_args = *VAR_8;

 if (VAR_6->sd_args.ar_posix_acl)
  VAR_5->s_flags |= VAR_1;
 else
  VAR_5->s_flags &= ~VAR_1;
 if (VAR_6->sd_args.ar_nobarrier)
  FUNC_5(VAR_3, &VAR_6->sd_flags);
 else
  FUNC_0(VAR_3, &VAR_6->sd_flags);
 FUNC_6(&VAR_9->gt_spin);
 VAR_9->gt_logd_secs = VAR_8->ar_commit;
 VAR_9->gt_quota_quantum = VAR_8->ar_quota_quantum;
 if (VAR_8->ar_statfs_quantum) {
  VAR_9->gt_statfs_slow = 0;
  VAR_9->gt_statfs_quantum = VAR_8->ar_statfs_quantum;
 }
 else {
  VAR_9->gt_statfs_slow = 1;
  VAR_9->gt_statfs_quantum = 30;
 }
 FUNC_7(&VAR_9->gt_spin);

 FUNC_4(VAR_6);
 return VAR_10;
}
