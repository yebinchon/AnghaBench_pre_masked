
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_qgroup {int dirty; } ;
struct btrfs_fs_info {int dirty_qgroups; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct btrfs_fs_info *VAR_0,
    struct btrfs_qgroup *VAR_1)
{
 if (FUNC_1(&VAR_1->dirty))
  FUNC_0(&VAR_1->dirty, &VAR_0->dirty_qgroups);
}
