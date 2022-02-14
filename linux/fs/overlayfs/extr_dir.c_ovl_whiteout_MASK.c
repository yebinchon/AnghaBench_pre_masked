
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_5(struct dentry *VAR_0)
{
 int VAR_1;
 struct dentry *VAR_2;
 struct inode *VAR_3 = VAR_0->d_inode;

 VAR_2 = FUNC_4(VAR_0);
 if (FUNC_1(VAR_2))
  return VAR_2;

 VAR_1 = FUNC_3(VAR_3, VAR_2);
 if (VAR_1) {
  FUNC_2(VAR_2);
  VAR_2 = FUNC_0(VAR_1);
 }

 return VAR_2;
}
