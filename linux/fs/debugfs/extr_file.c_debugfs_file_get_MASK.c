
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_fsdata; } ;
struct debugfs_fsdata {int active_users; int active_users_drained; void* real_fops; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int *,void*,struct debugfs_fsdata*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct debugfs_fsdata*) ;
 struct debugfs_fsdata* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

int FUNC_8(struct dentry *VAR_4)
{
 struct debugfs_fsdata *VAR_5;
 void *VAR_6;

 VAR_6 = FUNC_0(VAR_4->d_fsdata);
 if (!((unsigned long)VAR_6 & VAR_0)) {
  VAR_5 = VAR_6;
 } else {
  VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_3);
  if (!VAR_5)
   return -VAR_2;

  VAR_5->real_fops = (void *)((unsigned long)VAR_6 &
     ~VAR_0);
  FUNC_7(&VAR_5->active_users, 1);
  FUNC_3(&VAR_5->active_users_drained);
  if (FUNC_1(&VAR_4->d_fsdata, VAR_6, VAR_5) != VAR_6) {
   FUNC_4(VAR_5);
   VAR_5 = FUNC_0(VAR_4->d_fsdata);
  }
 }
 if (FUNC_2(VAR_4))
  return -VAR_1;

 if (!FUNC_6(&VAR_5->active_users))
  return -VAR_1;

 return 0;
}
