
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct msdos_sb_info {int fsinfo_inode; } ;


 int VAR_0 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct msdos_sb_info*) ;
 scalar_t__ FUNC_3 (struct super_block*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1)
{
 struct msdos_sb_info *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_3(VAR_1) || !FUNC_2(VAR_2))
  return;

 FUNC_1(VAR_2->fsinfo_inode, VAR_0);
}
