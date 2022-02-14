
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int super_for_commit; int super_copy; int free_space_root; int uuid_root; int quota_root; int csum_root; int dev_root; int chunk_root; int tree_root; int extent_root; int delayed_root; int balance_ctl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_fs_info*) ;

__attribute__((used)) static inline void FUNC_2(struct btrfs_fs_info *VAR_0)
{
 FUNC_0(VAR_0->balance_ctl);
 FUNC_0(VAR_0->delayed_root);
 FUNC_0(VAR_0->extent_root);
 FUNC_0(VAR_0->tree_root);
 FUNC_0(VAR_0->chunk_root);
 FUNC_0(VAR_0->dev_root);
 FUNC_0(VAR_0->csum_root);
 FUNC_0(VAR_0->quota_root);
 FUNC_0(VAR_0->uuid_root);
 FUNC_0(VAR_0->free_space_root);
 FUNC_0(VAR_0->super_copy);
 FUNC_0(VAR_0->super_for_commit);
 FUNC_1(VAR_0);
}
