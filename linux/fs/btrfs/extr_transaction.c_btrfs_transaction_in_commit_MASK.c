
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_transaction {scalar_t__ state; } ;
struct btrfs_fs_info {int trans_lock; struct btrfs_transaction* running_transaction; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct btrfs_fs_info *VAR_1)
{
 struct btrfs_transaction *VAR_2;
 int VAR_3 = 0;

 FUNC_0(&VAR_1->trans_lock);
 VAR_2 = VAR_1->running_transaction;
 if (VAR_2)
  VAR_3 = (VAR_2->state >= VAR_0);
 FUNC_1(&VAR_1->trans_lock);
 return VAR_3;
}
