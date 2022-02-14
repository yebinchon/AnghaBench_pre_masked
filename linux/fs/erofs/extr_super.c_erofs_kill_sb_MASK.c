
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_magic; int * s_fs_info; } ;
struct erofs_sb_info {int dummy; } ;


 struct erofs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct erofs_sb_info*) ;
 int FUNC_3 (struct super_block*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1)
{
 struct erofs_sb_info *VAR_2;

 FUNC_1(VAR_1->s_magic != VAR_0);

 FUNC_3(VAR_1);

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return;
 FUNC_2(VAR_2);
 VAR_1->s_fs_info = ((void*)0);
}
