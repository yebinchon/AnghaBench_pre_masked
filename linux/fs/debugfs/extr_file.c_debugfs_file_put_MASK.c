
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_fsdata; } ;
struct debugfs_fsdata {int active_users_drained; int active_users; } ;


 struct debugfs_fsdata* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct dentry *VAR_0)
{
 struct debugfs_fsdata *VAR_1 = FUNC_0(VAR_0->d_fsdata);

 if (FUNC_2(&VAR_1->active_users))
  FUNC_1(&VAR_1->active_users_drained);
}
