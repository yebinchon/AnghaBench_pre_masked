
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_super_block {int uuid_tree_generation; int cache_generation; int root_level; int generation; int root; int chunk_root_level; int chunk_root_generation; int chunk_root; } ;
struct btrfs_root_item {int generation; int level; int bytenr; } ;
struct btrfs_fs_info {int flags; TYPE_2__* tree_root; TYPE_1__* chunk_root; struct btrfs_super_block* super_copy; } ;
struct TYPE_4__ {struct btrfs_root_item root_item; } ;
struct TYPE_3__ {struct btrfs_root_item root_item; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_fs_info*,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct btrfs_fs_info *VAR_2)
{
 struct btrfs_root_item *VAR_3;
 struct btrfs_super_block *VAR_4;

 VAR_4 = VAR_2->super_copy;

 VAR_3 = &VAR_2->chunk_root->root_item;
 VAR_4->chunk_root = VAR_3->bytenr;
 VAR_4->chunk_root_generation = VAR_3->generation;
 VAR_4->chunk_root_level = VAR_3->level;

 VAR_3 = &VAR_2->tree_root->root_item;
 VAR_4->root = VAR_3->bytenr;
 VAR_4->generation = VAR_3->generation;
 VAR_4->root_level = VAR_3->level;
 if (FUNC_0(VAR_2, VAR_1))
  VAR_4->cache_generation = VAR_3->generation;
 if (FUNC_1(VAR_0, &VAR_2->flags))
  VAR_4->uuid_tree_generation = VAR_3->generation;
}
