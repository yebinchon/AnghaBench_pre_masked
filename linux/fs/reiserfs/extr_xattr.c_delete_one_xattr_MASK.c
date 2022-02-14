
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_parent; } ;


 struct inode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*,struct dentry*) ;
 int FUNC_3 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_0, void *VAR_1)
{
 struct inode *VAR_2 = FUNC_0(VAR_0->d_parent);


 if (FUNC_1(VAR_0))
  return FUNC_2(VAR_2, VAR_0);

 return FUNC_3(VAR_2, VAR_0);
}
