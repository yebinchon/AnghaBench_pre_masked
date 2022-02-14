
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {TYPE_1__* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct TYPE_4__ {int objectid; } ;
struct btrfs_block_group_cache {TYPE_2__ key; } ;
struct TYPE_3__ {int tree_root; } ;


 int FUNC_0 (int ,struct btrfs_trans_handle*,struct btrfs_path*,int ,int ) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct btrfs_trans_handle *VAR_0,
       struct btrfs_block_group_cache *VAR_1,
       struct btrfs_path *VAR_2)
{
 int VAR_3;
 u64 VAR_4;

 VAR_3 = FUNC_1(VAR_0->fs_info->tree_root, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_0->fs_info->tree_root, VAR_0, VAR_2,
      VAR_4, VAR_1->key.objectid);
}
