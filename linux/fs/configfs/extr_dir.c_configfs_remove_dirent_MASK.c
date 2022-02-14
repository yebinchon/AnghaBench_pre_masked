
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int s_sibling; } ;


 int VAR_0 ;
 int FUNC_0 (struct configfs_dirent*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dentry *VAR_1)
{
 struct configfs_dirent *VAR_2 = VAR_1->d_fsdata;

 if (!VAR_2)
  return;
 FUNC_2(&VAR_0);
 FUNC_1(&VAR_2->s_sibling);
 FUNC_3(&VAR_0);
 FUNC_0(VAR_2);
}
