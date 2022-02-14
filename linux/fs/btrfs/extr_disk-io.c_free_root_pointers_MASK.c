
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int free_space_root; int chunk_root; int uuid_root; int quota_root; int csum_root; int extent_root; int dev_root; int tree_root; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct btrfs_fs_info *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->tree_root);

 FUNC_0(VAR_0->dev_root);
 FUNC_0(VAR_0->extent_root);
 FUNC_0(VAR_0->csum_root);
 FUNC_0(VAR_0->quota_root);
 FUNC_0(VAR_0->uuid_root);
 if (VAR_1)
  FUNC_0(VAR_0->chunk_root);
 FUNC_0(VAR_0->free_space_root);
}
