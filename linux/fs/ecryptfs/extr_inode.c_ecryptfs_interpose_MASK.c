
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 struct inode* FUNC_4 (int ,struct super_block*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_0,
         struct dentry *VAR_1, struct super_block *VAR_2)
{
 struct inode *VAR_3 = FUNC_4(FUNC_2(VAR_0), VAR_2);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 FUNC_3(VAR_1, VAR_3);

 return 0;
}
