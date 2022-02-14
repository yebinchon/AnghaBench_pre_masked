
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct fid {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,struct fid*,int*,struct inode*) ;

int FUNC_4(struct dentry *VAR_0, struct fid *VAR_1, int *VAR_2,
  int VAR_3)
{
 int VAR_4;
 struct dentry *VAR_5 = ((void*)0);
 struct inode *VAR_6 = VAR_0->d_inode, *VAR_7 = ((void*)0);

 if (VAR_3 && !FUNC_0(VAR_6->i_mode)) {
  VAR_5 = FUNC_1(VAR_0);




  VAR_7 = VAR_5->d_inode;
 }

 VAR_4 = FUNC_3(VAR_6, VAR_1, VAR_2, VAR_7);
 FUNC_2(VAR_5);

 return VAR_4;
}
