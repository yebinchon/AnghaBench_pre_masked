
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sm_info {int dummy; } ;
struct f2fs_sb_info {int * sm_info; } ;


 struct f2fs_sm_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct f2fs_sb_info*,int) ;
 int FUNC_7 (struct f2fs_sm_info*) ;

void FUNC_8(struct f2fs_sb_info *VAR_0)
{
 struct f2fs_sm_info *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return;
 FUNC_6(VAR_0, 1);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_4(VAR_0);
 FUNC_5(VAR_0);
 VAR_0->sm_info = ((void*)0);
 FUNC_7(VAR_1);
}
