
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_transaction {scalar_t__ state; scalar_t__ aborted; int use_count; } ;
struct btrfs_fs_info {int trans_lock; int transaction_wait; struct btrfs_transaction* running_transaction; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct btrfs_transaction*) ;
 scalar_t__ FUNC_1 (struct btrfs_transaction*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct btrfs_fs_info *VAR_1)
{
 struct btrfs_transaction *VAR_2;

 FUNC_3(&VAR_1->trans_lock);
 VAR_2 = VAR_1->running_transaction;
 if (VAR_2 && FUNC_1(VAR_2)) {
  FUNC_2(&VAR_2->use_count);
  FUNC_4(&VAR_1->trans_lock);

  FUNC_5(VAR_1->transaction_wait,
      VAR_2->state >= VAR_0 ||
      VAR_2->aborted);
  FUNC_0(VAR_2);
 } else {
  FUNC_4(&VAR_1->trans_lock);
 }
}
