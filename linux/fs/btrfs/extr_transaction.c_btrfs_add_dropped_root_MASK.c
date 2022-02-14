
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_transaction {int dropped_roots_lock; int dropped_roots; } ;
struct btrfs_trans_handle {struct btrfs_transaction* transaction; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {TYPE_1__ root_key; int root_list; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int fs_roots_radix_lock; int fs_roots_radix; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct btrfs_trans_handle *VAR_1,
       struct btrfs_root *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;
 struct btrfs_transaction *VAR_4 = VAR_1->transaction;


 FUNC_2(&VAR_4->dropped_roots_lock);
 FUNC_0(&VAR_2->root_list, &VAR_4->dropped_roots);
 FUNC_3(&VAR_4->dropped_roots_lock);


 FUNC_2(&VAR_3->fs_roots_radix_lock);
 FUNC_1(&VAR_3->fs_roots_radix,
        (unsigned long)VAR_2->root_key.objectid,
        VAR_0);
 FUNC_3(&VAR_3->fs_roots_radix_lock);
}
