
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btrfs_item {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct btrfs_fs_info const*) ;

__attribute__((used)) static inline u32 FUNC_1(const struct btrfs_fs_info *VAR_0)
{
 return FUNC_0(VAR_0) - sizeof(struct btrfs_item);
}
