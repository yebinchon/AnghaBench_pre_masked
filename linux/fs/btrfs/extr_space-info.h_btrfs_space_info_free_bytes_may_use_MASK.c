
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_space_info {int lock; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_space_info*,int ) ;
 int FUNC_1 (struct btrfs_fs_info*,struct btrfs_space_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(
    struct btrfs_fs_info *VAR_0,
    struct btrfs_space_info *VAR_1,
    u64 VAR_2)
{
 FUNC_2(&VAR_1->lock);
 FUNC_0(VAR_0, VAR_1, -VAR_2);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_1->lock);
}
