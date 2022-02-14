
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; struct extent_buffer** nodes; } ;
struct btrfs_fs_info {struct btrfs_root* extent_root; } ;
struct btrfs_block_group_cache {int item; int key; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct extent_buffer*,int ) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,int *,struct btrfs_path*,int ,int) ;
 int FUNC_4 (struct extent_buffer*,int *,unsigned long,int) ;

__attribute__((used)) static int FUNC_5(struct btrfs_trans_handle *VAR_1,
     struct btrfs_path *VAR_2,
     struct btrfs_block_group_cache *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_1->fs_info;
 int VAR_5;
 struct btrfs_root *VAR_6 = VAR_4->extent_root;
 unsigned long VAR_7;
 struct extent_buffer *VAR_8;

 VAR_5 = FUNC_3(VAR_1, VAR_6, &VAR_3->key, VAR_2, 0, 1);
 if (VAR_5) {
  if (VAR_5 > 0)
   VAR_5 = -VAR_0;
  goto fail;
 }

 VAR_8 = VAR_2->nodes[0];
 VAR_7 = FUNC_0(VAR_8, VAR_2->slots[0]);
 FUNC_4(VAR_8, &VAR_3->item, VAR_7, sizeof(VAR_3->item));
 FUNC_1(VAR_8);
fail:
 FUNC_2(VAR_2);
 return VAR_5;

}
