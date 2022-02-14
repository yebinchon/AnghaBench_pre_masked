
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int num_clusters; int map_sectors; TYPE_1__** vol_amap; } ;
struct bd_info_t {int sector_size_bits; int sector_size_mask; int sector_size; } ;
struct TYPE_4__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ b_data; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int* VAR_0 ;

u32 FUNC_2(struct super_block *VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 u32 VAR_6, VAR_7;
 u8 VAR_8, VAR_9;
 struct fs_info_t *VAR_10 = &(FUNC_1(VAR_1)->fs_info);
 struct bd_info_t *VAR_11 = &(FUNC_1(VAR_1)->bd_info);

 VAR_6 = (VAR_2 & ~(0x7)) + 2;
 VAR_9 = (1 << (VAR_2 - VAR_6 + 2)) - 1;

 VAR_4 = VAR_2 >> (VAR_11->sector_size_bits + 3);
 VAR_5 = (VAR_2 >> 3) & VAR_11->sector_size_mask;

 for (VAR_3 = 2; VAR_3 < VAR_10->num_clusters; VAR_3 += 8) {
  VAR_8 = *(((u8 *)VAR_10->vol_amap[VAR_4]->b_data) + VAR_5);
  if (VAR_9 > 0) {
   VAR_8 |= VAR_9;
   VAR_9 = 0;
  }
  if (VAR_8 < 0xFF) {
   VAR_7 = VAR_6 + VAR_0[VAR_8];
   if (VAR_7 < VAR_10->num_clusters)
    return VAR_7;
  }
  VAR_6 += 8;

  if (((++VAR_5) >= VAR_11->sector_size) ||
      (VAR_6 >= VAR_10->num_clusters)) {
   if ((++VAR_4) >= VAR_10->map_sectors) {
    VAR_6 = 2;
    VAR_4 = 0;
   }
   VAR_5 = 0;
  }
 }

 return FUNC_0(~0);
}
