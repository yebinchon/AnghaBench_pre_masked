
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {struct dentry* s_dentry; } ;


 int VAR_0 ;
 int FUNC_0 (struct configfs_dirent*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dentry * VAR_1,
       struct inode * VAR_2)
{
 struct configfs_dirent *VAR_3 = VAR_1->d_fsdata;

 if (VAR_3) {

  FUNC_2(&VAR_0);






  if (VAR_3->s_dentry == VAR_1)
   VAR_3->s_dentry = ((void*)0);

  FUNC_3(&VAR_0);
  FUNC_0(VAR_3);
 }
 FUNC_1(VAR_2);
}
