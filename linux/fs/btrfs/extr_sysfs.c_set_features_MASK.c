
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
 int FUNC_0 (struct btrfs_super_block*,int ) ;
 int FUNC_1 (struct btrfs_super_block*,int ) ;
 int FUNC_2 (struct btrfs_super_block*,int ) ;

__attribute__((used)) static void FUNC_3(struct btrfs_fs_info *VAR_2,
    enum btrfs_feature_set VAR_3, u64 VAR_4)
{
 struct btrfs_super_block *VAR_5 = VAR_2->super_copy;
 if (VAR_3 == VAR_0)
  FUNC_0(VAR_5, VAR_4);
 else if (VAR_3 == VAR_1)
  FUNC_1(VAR_5, VAR_4);
 else
  FUNC_2(VAR_5, VAR_4);
}
