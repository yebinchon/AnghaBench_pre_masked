
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct dentry* s_root; int s_active; } ;
struct dentry {int d_inode; int * d_fsdata; } ;
struct afs_net {struct super_block* dynroot_sb; } ;
struct afs_cell {int name_len; int name; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,struct dentry*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct dentry* FUNC_9 (int ,struct dentry*,int ) ;

void FUNC_10(struct afs_net *VAR_0, struct afs_cell *VAR_1)
{
 struct super_block *VAR_2 = VAR_0->dynroot_sb;
 struct dentry *VAR_3, *VAR_4;

 if (!VAR_2 || FUNC_4(&VAR_2->s_active) == 0)
  return;

 VAR_3 = VAR_2->s_root;
 FUNC_7(VAR_3->d_inode);


 VAR_4 = FUNC_9(VAR_1->name, VAR_3, VAR_1->name_len);
 if (FUNC_0(VAR_4)) {
  FUNC_2("lookup %ld", FUNC_1(VAR_4));
  goto no_dentry;
 }

 FUNC_2("rmdir %pd %u", VAR_4, FUNC_5(VAR_4));

 if (VAR_4->d_fsdata) {
  FUNC_2("unpin %u", FUNC_5(VAR_4));
  VAR_4->d_fsdata = ((void*)0);
  FUNC_6(VAR_4);
 }
 FUNC_6(VAR_4);
no_dentry:
 FUNC_8(VAR_3->d_inode);
 FUNC_3("");
}
