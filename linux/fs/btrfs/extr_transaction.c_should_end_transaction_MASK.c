
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int global_block_rsv; } ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct btrfs_fs_info*) ;

__attribute__((used)) static int FUNC_2(struct btrfs_trans_handle *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = VAR_0->fs_info;

 if (FUNC_1(VAR_1))
  return 1;

 return !!FUNC_0(&VAR_1->global_block_rsv, 5);
}
