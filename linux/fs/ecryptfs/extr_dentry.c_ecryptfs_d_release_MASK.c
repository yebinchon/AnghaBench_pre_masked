
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_dentry_info {int rcu; int lower_path; } ;
struct dentry {struct ecryptfs_dentry_info* d_fsdata; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dentry *VAR_1)
{
 struct ecryptfs_dentry_info *VAR_2 = VAR_1->d_fsdata;
 if (VAR_2) {
  FUNC_1(&VAR_2->lower_path);
  FUNC_0(&VAR_2->rcu, VAR_0);
 }
}
