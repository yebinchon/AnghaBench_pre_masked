
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {int gt_logd_secs; int gt_statfs_quantum; int gt_quota_quantum; scalar_t__ gt_statfs_slow; } ;
struct gfs2_args {int ar_quota; int ar_data; char const* ar_statfs_percent; int ar_errors; scalar_t__ ar_loccookie; scalar_t__ ar_rgrplvb; scalar_t__ ar_discard; scalar_t__ ar_suiddir; scalar_t__ ar_posix_acl; scalar_t__ ar_debug; scalar_t__ ar_localflocks; scalar_t__ ar_spectator; scalar_t__* ar_hostdata; scalar_t__* ar_locktable; scalar_t__* ar_lockproto; } ;
struct gfs2_sbd {int sd_flags; TYPE_2__ sd_tune; int sd_master_dir; struct gfs2_args sd_args; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_3__ {struct gfs2_sbd* s_fs_info; } ;


 int VAR_0 ;


 int VAR_1 ;



 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dentry*,int ) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (struct seq_file*,char*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_5, struct dentry *VAR_6)
{
 struct gfs2_sbd *VAR_7 = VAR_6->d_sb->s_fs_info;
 struct gfs2_args *VAR_8 = &VAR_7->sd_args;
 int VAR_9;

 if (FUNC_0(VAR_6, VAR_7->sd_master_dir))
  FUNC_2(VAR_5, ",meta");
 if (VAR_8->ar_lockproto[0])
  FUNC_3(VAR_5, "lockproto", VAR_8->ar_lockproto);
 if (VAR_8->ar_locktable[0])
  FUNC_3(VAR_5, "locktable", VAR_8->ar_locktable);
 if (VAR_8->ar_hostdata[0])
  FUNC_3(VAR_5, "hostdata", VAR_8->ar_hostdata);
 if (VAR_8->ar_spectator)
  FUNC_2(VAR_5, ",spectator");
 if (VAR_8->ar_localflocks)
  FUNC_2(VAR_5, ",localflocks");
 if (VAR_8->ar_debug)
  FUNC_2(VAR_5, ",debug");
 if (VAR_8->ar_posix_acl)
  FUNC_2(VAR_5, ",acl");
 if (VAR_8->ar_quota != VAR_2) {
  char *VAR_10;
  switch (VAR_8->ar_quota) {
  case 129:
   VAR_10 = "off";
   break;
  case 130:
   VAR_10 = "account";
   break;
  case 128:
   VAR_10 = "on";
   break;
  default:
   VAR_10 = "unknown";
   break;
  }
  FUNC_1(VAR_5, ",quota=%s", VAR_10);
 }
 if (VAR_8->ar_suiddir)
  FUNC_2(VAR_5, ",suiddir");
 if (VAR_8->ar_data != VAR_0) {
  char *VAR_11;
  switch (VAR_8->ar_data) {
  case 133:
   VAR_11 = "writeback";
   break;
  case 134:
   VAR_11 = "ordered";
   break;
  default:
   VAR_11 = "unknown";
   break;
  }
  FUNC_1(VAR_5, ",data=%s", VAR_11);
 }
 if (VAR_8->ar_discard)
  FUNC_2(VAR_5, ",discard");
 VAR_9 = VAR_7->sd_tune.gt_logd_secs;
 if (VAR_9 != 30)
  FUNC_1(VAR_5, ",commit=%d", VAR_9);
 VAR_9 = VAR_7->sd_tune.gt_statfs_quantum;
 if (VAR_9 != 30)
  FUNC_1(VAR_5, ",statfs_quantum=%d", VAR_9);
 else if (VAR_7->sd_tune.gt_statfs_slow)
  FUNC_2(VAR_5, ",statfs_quantum=0");
 VAR_9 = VAR_7->sd_tune.gt_quota_quantum;
 if (VAR_9 != 60)
  FUNC_1(VAR_5, ",quota_quantum=%d", VAR_9);
 if (VAR_8->ar_statfs_percent)
  FUNC_1(VAR_5, ",statfs_percent=%d", VAR_8->ar_statfs_percent);
 if (VAR_8->ar_errors != VAR_1) {
  const char *VAR_12;

  switch (VAR_8->ar_errors) {
  case 131:
   VAR_12 = "withdraw";
   break;
  case 132:
   VAR_12 = "panic";
   break;
  default:
   VAR_12 = "unknown";
   break;
  }
  FUNC_1(VAR_5, ",errors=%s", VAR_12);
 }
 if (FUNC_4(VAR_4, &VAR_7->sd_flags))
  FUNC_2(VAR_5, ",nobarrier");
 if (FUNC_4(VAR_3, &VAR_7->sd_flags))
  FUNC_2(VAR_5, ",demote_interface_used");
 if (VAR_8->ar_rgrplvb)
  FUNC_2(VAR_5, ",rgrplvb");
 if (VAR_8->ar_loccookie)
  FUNC_2(VAR_5, ",loccookie");
 return 0;
}
