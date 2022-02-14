
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_fs_info {int * freed_extents; } ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ objectid; } ;
struct btrfs_block_group_cache {TYPE_1__ key; struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ) ;

void FUNC_1(struct btrfs_block_group_cache *VAR_1)
{
 struct btrfs_fs_info *VAR_2 = VAR_1->fs_info;
 u64 VAR_3, VAR_4;

 VAR_3 = VAR_1->key.objectid;
 VAR_4 = VAR_3 + VAR_1->key.offset - 1;

 FUNC_0(&VAR_2->freed_extents[0],
     VAR_3, VAR_4, VAR_0);
 FUNC_0(&VAR_2->freed_extents[1],
     VAR_3, VAR_4, VAR_0);
}
