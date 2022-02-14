
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_filecheck_sysfs_entry {TYPE_1__* fs_fcheck; } ;
struct ocfs2_filecheck_entry {int fe_done; } ;
struct TYPE_2__ {int fc_lock; int fc_done; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ocfs2_filecheck_sysfs_entry *VAR_0,
      struct ocfs2_filecheck_entry *VAR_1)
{
 FUNC_0(&VAR_0->fs_fcheck->fc_lock);
 VAR_1->fe_done = 1;
 VAR_0->fs_fcheck->fc_done++;
 FUNC_1(&VAR_0->fs_fcheck->fc_lock);
}
