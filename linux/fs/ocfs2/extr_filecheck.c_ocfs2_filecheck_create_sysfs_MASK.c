
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kset; } ;
struct ocfs2_filecheck_sysfs_entry {struct ocfs2_filecheck* fs_fcheck; TYPE_1__ fs_kobj; int fs_kobj_unregister; } ;
struct ocfs2_super {int osb_dev_kset; struct ocfs2_filecheck_sysfs_entry osb_fc_ent; } ;
struct ocfs2_filecheck {scalar_t__ fc_done; scalar_t__ fc_size; int fc_max; int fc_lock; int fc_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ocfs2_filecheck*) ;
 struct ocfs2_filecheck* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ocfs2_super *VAR_4)
{
 int VAR_5;
 struct ocfs2_filecheck *VAR_6;
 struct ocfs2_filecheck_sysfs_entry *VAR_7 = &VAR_4->osb_fc_ent;

 VAR_6 = FUNC_3(sizeof(struct ocfs2_filecheck), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(&VAR_6->fc_head);
 FUNC_6(&VAR_6->fc_lock);
 VAR_6->fc_max = VAR_2;
 VAR_6->fc_size = 0;
 VAR_6->fc_done = 0;

 VAR_7->fs_kobj.kset = VAR_4->osb_dev_kset;
 FUNC_1(&VAR_7->fs_kobj_unregister);
 VAR_5 = FUNC_4(&VAR_7->fs_kobj, &VAR_3,
     ((void*)0), "filecheck");
 if (VAR_5) {
  FUNC_5(&VAR_7->fs_kobj);
  FUNC_2(VAR_6);
  return VAR_5;
 }

 VAR_7->fs_fcheck = VAR_6;
 return 0;
}
