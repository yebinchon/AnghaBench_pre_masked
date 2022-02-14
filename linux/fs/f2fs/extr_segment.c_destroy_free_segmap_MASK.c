
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct free_segmap_info {struct free_segmap_info* free_secmap; struct free_segmap_info* free_segmap; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {struct free_segmap_info* free_info; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct free_segmap_info*) ;

__attribute__((used)) static void FUNC_2(struct f2fs_sb_info *VAR_0)
{
 struct free_segmap_info *VAR_1 = FUNC_0(VAR_0)->free_info;
 if (!VAR_1)
  return;
 FUNC_0(VAR_0)->free_info = ((void*)0);
 FUNC_1(VAR_1->free_segmap);
 FUNC_1(VAR_1->free_secmap);
 FUNC_1(VAR_1);
}
