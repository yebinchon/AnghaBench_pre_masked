
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; } ;
struct exfat_sb_info {int dummy; } ;


 struct exfat_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct exfat_sb_info*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_0)
{
 struct exfat_sb_info *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0))
  FUNC_3(VAR_0);

 FUNC_4(VAR_0);

 VAR_0->s_fs_info = ((void*)0);
 FUNC_2(VAR_1);
}
