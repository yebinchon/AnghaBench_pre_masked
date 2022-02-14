
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_info_t {int map_sectors; int * vol_amap; int pbr_bh; } ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct super_block *VAR_0)
{
 int VAR_1;
 struct fs_info_t *VAR_2 = &(FUNC_0(VAR_0)->fs_info);

 FUNC_2(VAR_2->pbr_bh);

 for (VAR_1 = 0; VAR_1 < VAR_2->map_sectors; VAR_1++)
  FUNC_1(VAR_2->vol_amap[VAR_1]);

 FUNC_3(VAR_2->vol_amap);
 VAR_2->vol_amap = ((void*)0);
}
