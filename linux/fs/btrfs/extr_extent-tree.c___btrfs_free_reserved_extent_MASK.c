
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_block_group_cache*,int ,int ) ;
 int FUNC_1 (struct btrfs_fs_info*,int ,int ,int *) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,int ) ;
 int FUNC_3 (struct btrfs_block_group_cache*,int ,int) ;
 struct btrfs_block_group_cache* FUNC_4 (struct btrfs_fs_info*,int ) ;
 int FUNC_5 (struct btrfs_block_group_cache*) ;
 scalar_t__ FUNC_6 (struct btrfs_fs_info*,int ) ;
 int FUNC_7 (struct btrfs_block_group_cache*,int ,int ,int) ;
 int FUNC_8 (struct btrfs_fs_info*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct btrfs_fs_info *VAR_2,
     u64 VAR_3, u64 VAR_4,
     int VAR_5, int VAR_6)
{
 struct btrfs_block_group_cache *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_7) {
  FUNC_2(VAR_2, "Unable to find block group for %llu",
     VAR_3);
  return -VAR_1;
 }

 if (VAR_5)
  FUNC_7(VAR_7, VAR_3, VAR_4, 1);
 else {
  if (FUNC_6(VAR_2, VAR_0))
   VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, ((void*)0));
  FUNC_0(VAR_7, VAR_3, VAR_4);
  FUNC_3(VAR_7, VAR_4, VAR_6);
  FUNC_8(VAR_2, VAR_3, VAR_4);
 }

 FUNC_5(VAR_7);
 return VAR_8;
}
