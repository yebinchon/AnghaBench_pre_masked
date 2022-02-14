
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_root_item {int ctime; } ;
struct btrfs_root {int root_item_lock; struct btrfs_root_item root_item; } ;


 int FUNC_0 (struct btrfs_root_item*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct timespec64*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct btrfs_trans_handle *VAR_0,
        struct btrfs_root *VAR_1)
{
 struct btrfs_root_item *VAR_2 = &VAR_1->root_item;
 struct timespec64 VAR_3;

 FUNC_3(&VAR_3);
 FUNC_4(&VAR_1->root_item_lock);
 FUNC_0(VAR_2, VAR_0->transid);
 FUNC_2(&VAR_2->ctime, VAR_3.tv_sec);
 FUNC_1(&VAR_2->ctime, VAR_3.tv_nsec);
 FUNC_5(&VAR_1->root_item_lock);
}
