
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;
struct f2fs_sb_info {int dummy; } ;


 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int VAR_0 ;
 struct f2fs_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*,int ) ;
 struct inode* FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct inode *FUNC_8(struct super_block *VAR_1,
  u64 VAR_2, u32 VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_2(VAR_1);
 struct inode *VAR_5;

 if (FUNC_4(VAR_4, VAR_2))
  return FUNC_1(-VAR_0);






 VAR_5 = FUNC_5(VAR_1, VAR_2);
 if (FUNC_3(VAR_5))
  return FUNC_0(VAR_5);
 if (FUNC_7(VAR_3 && VAR_5->i_generation != VAR_3)) {

  FUNC_6(VAR_5);
  return FUNC_1(-VAR_0);
 }
 return VAR_5;
}
