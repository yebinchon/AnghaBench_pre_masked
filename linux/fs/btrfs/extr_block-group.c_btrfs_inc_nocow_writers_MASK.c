
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int lock; int nocow_writers; scalar_t__ ro; } ;


 int FUNC_0 (int *) ;
 struct btrfs_block_group_cache* FUNC_1 (struct btrfs_fs_info*,int ) ;
 int FUNC_2 (struct btrfs_block_group_cache*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct btrfs_fs_info *VAR_0, u64 VAR_1)
{
 struct btrfs_block_group_cache *VAR_2;
 bool VAR_3 = 1;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  return 0;

 FUNC_3(&VAR_2->lock);
 if (VAR_2->ro)
  VAR_3 = 0;
 else
  FUNC_0(&VAR_2->nocow_writers);
 FUNC_4(&VAR_2->lock);


 if (!VAR_3)
  FUNC_2(VAR_2);

 return VAR_3;
}
