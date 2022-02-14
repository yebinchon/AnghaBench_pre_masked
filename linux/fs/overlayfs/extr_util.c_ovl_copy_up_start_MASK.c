
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 struct inode* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct dentry *VAR_0, int VAR_1)
{
 struct inode *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (!VAR_3 && FUNC_1(VAR_0, VAR_1)) {
  VAR_3 = 1;
  FUNC_3(VAR_2);
 }

 return VAR_3;
}
