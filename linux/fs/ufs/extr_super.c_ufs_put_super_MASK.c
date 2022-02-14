
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_sb_info {struct ufs_sb_info* s_uspi; int sync_work; } ;
struct super_block {int * s_fs_info; } ;


 int FUNC_0 (char*) ;
 struct ufs_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ufs_sb_info*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct ufs_sb_info*) ;
 int FUNC_6 (struct super_block*) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_0)
{
 struct ufs_sb_info * VAR_1 = FUNC_1(VAR_0);

 FUNC_0("ENTER\n");

 if (!FUNC_4(VAR_0))
  FUNC_6(VAR_0);
 FUNC_2(&VAR_1->sync_work);

 FUNC_5 (VAR_1->s_uspi);
 FUNC_3 (VAR_1->s_uspi);
 FUNC_3 (VAR_1);
 VAR_0->s_fs_info = ((void*)0);
 FUNC_0("EXIT\n");
 return;
}
