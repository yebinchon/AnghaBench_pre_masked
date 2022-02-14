
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_super_block {int dummy; } ;
struct btrfs_fs_info {struct btrfs_super_block* super_copy; } ;


 int FUNC_0 (struct btrfs_super_block*) ;

__attribute__((used)) static inline int FUNC_1(struct btrfs_fs_info *VAR_0, u64 VAR_1)
{
 struct btrfs_super_block *VAR_2;
 VAR_2 = VAR_0->super_copy;
 return !!(FUNC_0(VAR_2) & VAR_1);
}
