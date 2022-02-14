
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {struct btrfs_block_rsv* block_rsv; scalar_t__ adding_csums; } ;
struct btrfs_root {struct btrfs_block_rsv* block_rsv; int state; struct btrfs_fs_info* fs_info; } ;
struct btrfs_block_rsv {int dummy; } ;
struct btrfs_fs_info {struct btrfs_block_rsv empty_block_rsv; struct btrfs_root const* uuid_root; struct btrfs_root const* csum_root; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static struct btrfs_block_rsv *FUNC_1(
     const struct btrfs_trans_handle *VAR_1,
     const struct btrfs_root *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;
 struct btrfs_block_rsv *VAR_4 = ((void*)0);

 if (FUNC_0(VAR_0, &VAR_2->state) ||
     (VAR_2 == VAR_3->csum_root && VAR_1->adding_csums) ||
     (VAR_2 == VAR_3->uuid_root))
  VAR_4 = VAR_1->block_rsv;

 if (!VAR_4)
  VAR_4 = VAR_2->block_rsv;

 if (!VAR_4)
  VAR_4 = &VAR_3->empty_block_rsv;

 return VAR_4;
}
