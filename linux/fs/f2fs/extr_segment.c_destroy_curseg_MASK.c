
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct curseg_info {struct curseg_info* journal; struct curseg_info* sum_blk; } ;
struct TYPE_2__ {struct curseg_info* curseg_array; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct curseg_info*) ;

__attribute__((used)) static void FUNC_2(struct f2fs_sb_info *VAR_1)
{
 struct curseg_info *VAR_2 = FUNC_0(VAR_1)->curseg_array;
 int VAR_3;

 if (!VAR_2)
  return;
 FUNC_0(VAR_1)->curseg_array = ((void*)0);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_2[VAR_3].sum_blk);
  FUNC_1(VAR_2[VAR_3].journal);
 }
 FUNC_1(VAR_2);
}
