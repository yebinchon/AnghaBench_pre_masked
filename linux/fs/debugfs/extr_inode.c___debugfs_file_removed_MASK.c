
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_fsdata; } ;
struct debugfs_fsdata {int active_users_drained; int active_users; } ;


 unsigned long VAR_0 ;
 struct debugfs_fsdata* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dentry *VAR_1)
{
 struct debugfs_fsdata *VAR_2;







 FUNC_2();
 VAR_2 = FUNC_0(VAR_1->d_fsdata);
 if ((unsigned long)VAR_2 & VAR_0)
  return;
 if (!FUNC_1(&VAR_2->active_users))
  FUNC_3(&VAR_2->active_users_drained);
}
