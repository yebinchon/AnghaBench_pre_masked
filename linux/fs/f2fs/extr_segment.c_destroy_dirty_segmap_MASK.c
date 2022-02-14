
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct dirty_seglist_info {int dummy; } ;
struct TYPE_2__ {int * dirty_info; } ;


 struct dirty_seglist_info* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*,int) ;
 int FUNC_4 (struct dirty_seglist_info*) ;

__attribute__((used)) static void FUNC_5(struct f2fs_sb_info *VAR_1)
{
 struct dirty_seglist_info *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (!VAR_2)
  return;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_3(VAR_1, VAR_3);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1)->dirty_info = ((void*)0);
 FUNC_4(VAR_2);
}
