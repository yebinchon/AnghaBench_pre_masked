
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_nlink; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,int ) ;
 struct dentry* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_6(struct super_block *VAR_1, u64 VAR_2)
{
 struct inode *VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_2(VAR_3))
  return FUNC_0(VAR_3);
 if (VAR_3->i_nlink == 0) {
  FUNC_5(VAR_3);
  return FUNC_1(-VAR_0);
 }
 return FUNC_4(VAR_3);
}
