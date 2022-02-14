
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct free_space_extent {int member_1; int member_0; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {int offset; int objectid; } ;
struct btrfs_block_group_cache {TYPE_1__ key; } ;


 int FUNC_0 (struct free_space_extent const*) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_fs_info*,struct btrfs_block_group_cache*,struct btrfs_path*,struct free_space_extent const*,int ) ;

__attribute__((used)) static int FUNC_2(struct btrfs_trans_handle *VAR_0,
      struct btrfs_fs_info *VAR_1,
      struct btrfs_block_group_cache *VAR_2,
      struct btrfs_path *VAR_3,
      u32 VAR_4)
{
 const struct free_space_extent VAR_5[] = {
  {VAR_2->key.objectid, VAR_2->key.offset},
 };

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_5, FUNC_0(VAR_5));
}
