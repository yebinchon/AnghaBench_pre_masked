
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u64 ;
typedef int u32 ;
struct btrfs_item {int dummy; } ;
struct TYPE_3__ {size_t offset; } ;
struct btrfs_block_group_cache {int bitmap_high_thresh; int bitmap_low_thresh; TYPE_1__ key; TYPE_2__* fs_info; } ;
struct TYPE_4__ {int sectorsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,int) ;

void FUNC_1(struct btrfs_block_group_cache *VAR_2)
{
 u32 VAR_3;
 size_t VAR_4;
 u64 VAR_5, VAR_6;





 VAR_3 = VAR_2->fs_info->sectorsize * VAR_0;
 VAR_5 = FUNC_0(VAR_2->key.offset + VAR_3 - 1,
         VAR_3);
 VAR_4 = sizeof(struct btrfs_item) + VAR_1;
 VAR_6 = VAR_5 * VAR_4;
 VAR_2->bitmap_high_thresh = FUNC_0(VAR_6,
         sizeof(struct btrfs_item));





 if (VAR_2->bitmap_high_thresh > 100)
  VAR_2->bitmap_low_thresh = VAR_2->bitmap_high_thresh - 100;
 else
  VAR_2->bitmap_low_thresh = 0;
}
