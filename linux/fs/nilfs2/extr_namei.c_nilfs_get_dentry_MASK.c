
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct super_block {int s_fs_info; } ;
struct nilfs_root {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct super_block*) ;
 int VAR_1 ;
 struct dentry* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct super_block*,struct nilfs_root*,int ) ;
 struct nilfs_root* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct nilfs_root*) ;

__attribute__((used)) static struct dentry *FUNC_9(struct super_block *VAR_2, u64 VAR_3,
           u64 VAR_4, u32 VAR_5)
{
 struct nilfs_root *VAR_6;
 struct inode *VAR_7;

 if (VAR_4 < FUNC_3(VAR_2) && VAR_4 != VAR_1)
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_7(VAR_2->s_fs_info, VAR_3);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_7 = FUNC_6(VAR_2, VAR_6, VAR_4);
 FUNC_8(VAR_6);

 if (FUNC_2(VAR_7))
  return FUNC_0(VAR_7);
 if (VAR_5 && VAR_7->i_generation != VAR_5) {
  FUNC_5(VAR_7);
  return FUNC_1(-VAR_0);
 }
 return FUNC_4(VAR_7);
}
