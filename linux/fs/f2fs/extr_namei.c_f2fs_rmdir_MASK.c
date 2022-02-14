
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_0(VAR_2);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_1, VAR_2);
 return -VAR_0;
}
