
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ root_dir; int dentries_per_clu; int map_sectors; int * pbr_bh; int ** vol_amap; int map_clu; TYPE_1__* fs_func; scalar_t__ dev_ejected; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; int flags; } ;
struct buffer_head {int dummy; } ;
struct bmap_dentry_t {int flags; int size; int start_clu; } ;
struct bd_info_t {scalar_t__ sector_size_bits; } ;
typedef scalar_t__ sector_t ;
typedef int s32 ;
struct TYPE_4__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct super_block*,struct chain_t*,int,int *) ;
 int FUNC_8 (int **) ;
 int ** FUNC_9 (int,int,int ) ;
 int FUNC_10 (struct super_block*,scalar_t__,int **,int) ;
 scalar_t__ FUNC_11 (struct dentry_t*) ;

s32 FUNC_12(struct super_block *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 sector_t VAR_13;
 struct chain_t VAR_14;
 struct bmap_dentry_t *VAR_15;
 struct fs_info_t *VAR_16 = &(FUNC_1(VAR_7)->fs_info);
 struct bd_info_t *VAR_17 = &(FUNC_1(VAR_7)->bd_info);

 VAR_14.dir = VAR_16->root_dir;
 VAR_14.flags = 0x01;

 while (VAR_14.dir != FUNC_0(~0)) {
  if (VAR_16->dev_ejected)
   break;

  for (VAR_8 = 0; VAR_8 < VAR_16->dentries_per_clu; VAR_8++) {
   VAR_15 = (struct bmap_dentry_t *)FUNC_7(VAR_7, &VAR_14,
              VAR_8, ((void*)0));
   if (!VAR_15)
    return VAR_1;

   VAR_12 = VAR_16->fs_func->get_entry_type((struct dentry_t *)VAR_15);

   if (VAR_12 == VAR_6)
    break;
   if (VAR_12 != VAR_5)
    continue;

   if (VAR_15->flags == 0x0) {
    VAR_16->map_clu = FUNC_3(VAR_15->start_clu);
    VAR_11 = (u32)FUNC_4(VAR_15->size);

    VAR_16->map_sectors = ((VAR_11 - 1) >> VAR_17->sector_size_bits) + 1;

    VAR_16->vol_amap = FUNC_9(VAR_16->map_sectors,
              sizeof(struct buffer_head *),
              VAR_4);
    if (!VAR_16->vol_amap)
     return VAR_2;

    VAR_13 = FUNC_5(VAR_16->map_clu);

    for (VAR_9 = 0; VAR_9 < VAR_16->map_sectors; VAR_9++) {
     VAR_16->vol_amap[VAR_9] = ((void*)0);
     VAR_10 = FUNC_10(VAR_7, VAR_13 + VAR_9, &(VAR_16->vol_amap[VAR_9]), 1);
     if (VAR_10 != VAR_3) {

      VAR_8 = 0;
      while (VAR_8 < VAR_9)
       FUNC_6(VAR_16->vol_amap[VAR_8++]);

      FUNC_8(VAR_16->vol_amap);
      VAR_16->vol_amap = ((void*)0);
      return VAR_10;
     }
    }

    VAR_16->pbr_bh = ((void*)0);
    return VAR_3;
   }
  }

  if (FUNC_2(VAR_7, VAR_14.dir, &VAR_14.dir) != 0)
   return VAR_1;
 }

 return VAR_0;
}
