
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct dentry* d_parent; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_4(struct dentry *VAR_1)
{
 struct inode *VAR_2 = ((void*)0);

 while (VAR_1 && !FUNC_0(VAR_1)) {
  VAR_2 = FUNC_2(VAR_1);
  if (!VAR_2 || FUNC_1(VAR_2) == VAR_0)
   break;
  VAR_1 = VAR_1->d_parent;
 }
 if (VAR_2)
  VAR_2 = FUNC_3(VAR_2);
 return VAR_2;
}
