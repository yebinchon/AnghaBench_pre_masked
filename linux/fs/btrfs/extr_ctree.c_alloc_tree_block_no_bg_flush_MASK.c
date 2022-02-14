
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int can_flush_pending_bgs; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {struct btrfs_root* free_space_root; struct btrfs_root* dev_root; struct btrfs_root* chunk_root; struct btrfs_root* extent_root; } ;
struct btrfs_disk_key {int dummy; } ;


 struct extent_buffer* FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,int ,int ,struct btrfs_disk_key const*,int,int ,int ) ;

__attribute__((used)) static struct extent_buffer *FUNC_1(
       struct btrfs_trans_handle *VAR_0,
       struct btrfs_root *VAR_1,
       u64 VAR_2,
       const struct btrfs_disk_key *VAR_3,
       int VAR_4,
       u64 VAR_5,
       u64 VAR_6)
{
 struct btrfs_fs_info *VAR_7 = VAR_1->fs_info;
 struct extent_buffer *VAR_8;
 if (VAR_1 == VAR_7->extent_root ||
     VAR_1 == VAR_7->chunk_root ||
     VAR_1 == VAR_7->dev_root ||
     VAR_1 == VAR_7->free_space_root)
  VAR_0->can_flush_pending_bgs = 0;

 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2,
         VAR_1->root_key.objectid, VAR_3, VAR_4,
         VAR_5, VAR_6);
 VAR_0->can_flush_pending_bgs = 1;

 return VAR_8;
}
