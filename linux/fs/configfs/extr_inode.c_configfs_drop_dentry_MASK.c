
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; } ;
struct configfs_dirent {struct dentry* s_dentry; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ,struct dentry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct configfs_dirent * VAR_0, struct dentry * VAR_1)
{
 struct dentry * VAR_2 = VAR_0->s_dentry;

 if (VAR_2) {
  FUNC_5(&VAR_2->d_lock);
  if (FUNC_3(VAR_2)) {
   FUNC_2(VAR_2);
   FUNC_0(VAR_2);
   FUNC_6(&VAR_2->d_lock);
   FUNC_4(FUNC_1(VAR_1), VAR_2);
  } else
   FUNC_6(&VAR_2->d_lock);
 }
}
