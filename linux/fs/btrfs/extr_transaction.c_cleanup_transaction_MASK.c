
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_transaction {int num_writers; int writer_wait; int state; int list; } ;
struct btrfs_trans_handle {int type; int root; struct btrfs_transaction* transaction; int use_count; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int sb; int trans_lock; struct btrfs_transaction* running_transaction; } ;
struct TYPE_2__ {struct btrfs_trans_handle* journal_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_trans_handle*,int) ;
 int FUNC_4 (struct btrfs_transaction*,struct btrfs_fs_info*) ;
 int FUNC_5 (struct btrfs_transaction*) ;
 int FUNC_6 (struct btrfs_fs_info*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_7 (int ,struct btrfs_trans_handle*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static void FUNC_16(struct btrfs_trans_handle *VAR_4, int VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_4->fs_info;
 struct btrfs_transaction *VAR_7 = VAR_4->transaction;

 FUNC_1(FUNC_10(&VAR_4->use_count) > 1);

 FUNC_3(VAR_4, VAR_5);

 FUNC_12(&VAR_6->trans_lock);






 FUNC_0(FUNC_9(&VAR_7->list));

 FUNC_8(&VAR_7->list);
 if (VAR_7 == VAR_6->running_transaction) {
  VAR_7->state = VAR_0;
  FUNC_13(&VAR_6->trans_lock);
  FUNC_15(VAR_7->writer_wait,
      FUNC_2(&VAR_7->num_writers) == 1);

  FUNC_12(&VAR_6->trans_lock);
 }
 FUNC_13(&VAR_6->trans_lock);

 FUNC_4(VAR_4->transaction, VAR_6);

 FUNC_12(&VAR_6->trans_lock);
 if (VAR_7 == VAR_6->running_transaction)
  VAR_6->running_transaction = ((void*)0);
 FUNC_13(&VAR_6->trans_lock);

 if (VAR_4->type & VAR_1)
  FUNC_11(VAR_6->sb);
 FUNC_5(VAR_7);
 FUNC_5(VAR_7);

 FUNC_14(VAR_4->root);

 if (VAR_3->journal_info == VAR_4)
  VAR_3->journal_info = ((void*)0);
 FUNC_6(VAR_6);

 FUNC_7(VAR_2, VAR_4);
}
