
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (struct super_block*,unsigned long,int ,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_0 ;
 int FUNC_5 (struct inode*) ;

bool FUNC_6(struct super_block *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_2);
 struct inode *VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_2(VAR_1, (unsigned long) VAR_3, VAR_0, VAR_3);
 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_0(VAR_4) && !FUNC_5(VAR_4) &&
      !FUNC_4(VAR_4);

 FUNC_3(VAR_4);
 return VAR_5;
}
