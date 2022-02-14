
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sit_info {struct sit_info* invalid_segmap; struct sit_info* sit_bitmap_mir; struct sit_info* sit_bitmap; struct sit_info* dirty_sentries_bitmap; struct sit_info* sec_entries; struct sit_info* sentries; struct sit_info* tmp_map; struct sit_info* bitmap; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {int * sit_info; } ;


 struct sit_info* FUNC_0 (struct f2fs_sb_info*) ;
 TYPE_1__* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct sit_info*) ;

__attribute__((used)) static void FUNC_3(struct f2fs_sb_info *VAR_0)
{
 struct sit_info *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return;

 if (VAR_1->sentries)
  FUNC_2(VAR_1->bitmap);
 FUNC_2(VAR_1->tmp_map);

 FUNC_2(VAR_1->sentries);
 FUNC_2(VAR_1->sec_entries);
 FUNC_2(VAR_1->dirty_sentries_bitmap);

 FUNC_1(VAR_0)->sit_info = ((void*)0);
 FUNC_2(VAR_1->sit_bitmap);




 FUNC_2(VAR_1);
}
