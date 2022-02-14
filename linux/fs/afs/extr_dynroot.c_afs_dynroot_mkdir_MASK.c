
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct dentry* s_root; int s_active; } ;
struct dentry {int d_inode; void* d_fsdata; } ;
struct afs_net {struct super_block* dynroot_sb; } ;
struct afs_cell {int name_len; int name; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct dentry* FUNC_5 (int ,struct dentry*,int ) ;

int FUNC_6(struct afs_net *VAR_0, struct afs_cell *VAR_1)
{
 struct super_block *VAR_2 = VAR_0->dynroot_sb;
 struct dentry *VAR_3, *VAR_4;
 int VAR_5;

 if (!VAR_2 || FUNC_2(&VAR_2->s_active) == 0)
  return 0;


 VAR_3 = VAR_2->s_root;
 FUNC_3(VAR_3->d_inode);
 VAR_4 = FUNC_5(VAR_1->name, VAR_3, VAR_1->name_len);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto unlock;
 }


 VAR_4->d_fsdata = (void *)1UL;
 VAR_5 = 0;
unlock:
 FUNC_4(VAR_3->d_inode);
 return VAR_5;
}
