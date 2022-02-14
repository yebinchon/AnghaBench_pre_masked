
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_args {int ar_commit; int ar_statfs_quantum; int ar_quota_quantum; int ar_errors; int ar_data; int ar_quota; } ;
struct gfs2_sbd {struct gfs2_args sd_args; } ;
struct fs_context {scalar_t__ purpose; int * ops; struct gfs2_args* fs_private; TYPE_2__* root; } ;
struct TYPE_4__ {TYPE_1__* d_sb; } ;
struct TYPE_3__ {struct gfs2_sbd* s_fs_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct gfs2_args* FUNC_0 (int,int ) ;
 int FUNC_1 (struct gfs2_args*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_7)
{
 struct gfs2_args *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 if (VAR_7->purpose == VAR_1) {
  struct gfs2_sbd *VAR_9 = VAR_7->root->d_sb->s_fs_info;

  *VAR_8 = VAR_9->sd_args;
 } else {
  FUNC_1(VAR_8, 0, sizeof(*VAR_8));
  VAR_8->ar_quota = VAR_5;
  VAR_8->ar_data = VAR_3;
  VAR_8->ar_commit = 30;
  VAR_8->ar_statfs_quantum = 30;
  VAR_8->ar_quota_quantum = 60;
  VAR_8->ar_errors = VAR_4;
 }
 VAR_7->fs_private = VAR_8;
 VAR_7->ops = &VAR_6;
 return 0;
}
