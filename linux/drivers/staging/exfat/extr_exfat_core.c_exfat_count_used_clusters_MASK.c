
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct super_block {int dummy; } ;
struct fs_info_t {int num_clusters; TYPE_1__** vol_amap; } ;
struct bd_info_t {int sector_size; } ;
typedef int s32 ;
struct TYPE_4__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ b_data; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__* VAR_0 ;

s32 FUNC_1(struct super_block *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5 = 0;
 u8 VAR_6;
 struct fs_info_t *VAR_7 = &(FUNC_0(VAR_1)->fs_info);
 struct bd_info_t *VAR_8 = &(FUNC_0(VAR_1)->bd_info);

 VAR_3 = VAR_4 = 0;

 for (VAR_2 = 2; VAR_2 < VAR_7->num_clusters; VAR_2 += 8) {
  VAR_6 = *(((u8 *)VAR_7->vol_amap[VAR_3]->b_data) + VAR_4);
  VAR_5 += VAR_0[VAR_6];

  if ((++VAR_4) >= VAR_8->sector_size) {
   VAR_3++;
   VAR_4 = 0;
  }
 }

 return VAR_5;
}
