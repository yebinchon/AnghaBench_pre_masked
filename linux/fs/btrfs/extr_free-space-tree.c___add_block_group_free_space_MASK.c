
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct TYPE_2__ {int offset; int objectid; } ;
struct btrfs_block_group_cache {TYPE_1__ key; scalar_t__ needs_free_space; } ;


 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*,int ,int ) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*) ;

__attribute__((used)) static int FUNC_2(struct btrfs_trans_handle *VAR_0,
     struct btrfs_block_group_cache *VAR_1,
     struct btrfs_path *VAR_2)
{
 int VAR_3;

 VAR_1->needs_free_space = 0;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_1->key.objectid,
     VAR_1->key.offset);
}
