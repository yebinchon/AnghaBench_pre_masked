
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_super_block {int dummy; } ;
struct btrfs_fs_info {struct btrfs_super_block* super_copy; } ;
typedef enum btrfs_feature_set { ____Placeholder_btrfs_feature_set } btrfs_feature_set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_super_block*) ;
 int FUNC_1 (struct btrfs_super_block*) ;
 int FUNC_2 (struct btrfs_super_block*) ;

__attribute__((used)) static u64 FUNC_3(struct btrfs_fs_info *VAR_2,
   enum btrfs_feature_set VAR_3)
{
 struct btrfs_super_block *VAR_4 = VAR_2->super_copy;
 if (VAR_3 == VAR_0)
  return FUNC_0(VAR_4);
 else if (VAR_3 == VAR_1)
  return FUNC_1(VAR_4);
 else
  return FUNC_2(VAR_4);
}
