
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_transaction {int dummy; } ;
struct btrfs_fs_info {int trans_lock; struct btrfs_transaction* running_transaction; } ;


 int FUNC_0 (struct btrfs_transaction*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct btrfs_fs_info *VAR_0)
{
 struct btrfs_transaction *VAR_1;
 int VAR_2 = 0;

 FUNC_1(&VAR_0->trans_lock);
 VAR_1 = VAR_0->running_transaction;
 if (VAR_1)
  VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_0->trans_lock);
 return VAR_2;
}
