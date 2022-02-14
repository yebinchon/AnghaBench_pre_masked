
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct btrfs_path {int skip_locking; int search_commit_root; int * nodes; int reada; } ;
struct btrfs_free_space_info {int dummy; } ;
struct btrfs_caching_control {struct btrfs_block_group_cache* block_group; } ;
struct btrfs_block_group_cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_free_space_info*) ;
 int FUNC_1 (struct btrfs_free_space_info*) ;
 int VAR_2 ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (int ,struct btrfs_free_space_info*) ;
 int FUNC_5 (int ,struct btrfs_free_space_info*) ;
 int FUNC_6 (struct btrfs_caching_control*,struct btrfs_path*,int) ;
 int FUNC_7 (struct btrfs_caching_control*,struct btrfs_path*,int) ;
 struct btrfs_free_space_info* FUNC_8 (int *,struct btrfs_block_group_cache*,struct btrfs_path*,int ) ;

int FUNC_9(struct btrfs_caching_control *VAR_3)
{
 struct btrfs_block_group_cache *VAR_4;
 struct btrfs_free_space_info *VAR_5;
 struct btrfs_path *VAR_6;
 u32 VAR_7, VAR_8;
 int VAR_9;

 VAR_4 = VAR_3->block_group;

 VAR_6 = FUNC_2();
 if (!VAR_6)
  return -VAR_1;





 VAR_6->skip_locking = 1;
 VAR_6->search_commit_root = 1;
 VAR_6->reada = VAR_2;

 VAR_5 = FUNC_8(((void*)0), VAR_4, VAR_6, 0);
 if (FUNC_0(VAR_5)) {
  VAR_9 = FUNC_1(VAR_5);
  goto out;
 }
 VAR_7 = FUNC_4(VAR_6->nodes[0], VAR_5);
 VAR_8 = FUNC_5(VAR_6->nodes[0], VAR_5);






 if (VAR_8 & VAR_0)
  VAR_9 = FUNC_6(VAR_3, VAR_6, VAR_7);
 else
  VAR_9 = FUNC_7(VAR_3, VAR_6, VAR_7);

out:
 FUNC_3(VAR_6);
 return VAR_9;
}
