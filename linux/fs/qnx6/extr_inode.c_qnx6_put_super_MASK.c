
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; } ;
struct qnx6_sb_info {int inodes; int longfile; int sb_buf; } ;


 struct qnx6_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qnx6_sb_info*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_0)
{
 struct qnx6_sb_info *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->sb_buf);
 FUNC_2(VAR_1->longfile);
 FUNC_2(VAR_1->inodes);
 FUNC_3(VAR_1);
 VAR_0->s_fs_info = ((void*)0);
 return;
}
