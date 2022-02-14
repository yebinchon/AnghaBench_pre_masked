
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ time64_t ;
struct btrfs_transaction {scalar_t__ state; scalar_t__ start_time; scalar_t__ transid; } ;
struct btrfs_trans_handle {scalar_t__ transid; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int commit_interval; int fs_state; int transaction_kthread_mutex; int cleaner_kthread; int trans_lock; int flags; struct btrfs_transaction* running_transaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 scalar_t__ VAR_4 ;
 struct btrfs_trans_handle* FUNC_2 (struct btrfs_root*) ;
 int FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 int FUNC_5 (struct btrfs_trans_handle*) ;
 int FUNC_6 (struct btrfs_fs_info*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(void *VAR_5)
{
 struct btrfs_root *VAR_6 = VAR_5;
 struct btrfs_fs_info *VAR_7 = VAR_6->fs_info;
 struct btrfs_trans_handle *VAR_8;
 struct btrfs_transaction *VAR_9;
 u64 VAR_10;
 time64_t VAR_11;
 unsigned long VAR_12;
 bool VAR_13;

 do {
  VAR_13 = 0;
  VAR_12 = VAR_3 * VAR_7->commit_interval;
  FUNC_9(&VAR_7->transaction_kthread_mutex);

  FUNC_12(&VAR_7->trans_lock);
  VAR_9 = VAR_7->running_transaction;
  if (!VAR_9) {
   FUNC_13(&VAR_7->trans_lock);
   goto sleep;
  }

  VAR_11 = FUNC_8();
  if (VAR_9->state < VAR_4 &&
      !FUNC_14(VAR_0, &VAR_7->flags) &&
      (VAR_11 < VAR_9->start_time ||
       VAR_11 - VAR_9->start_time < VAR_7->commit_interval)) {
   FUNC_13(&VAR_7->trans_lock);
   VAR_12 = VAR_3 * 5;
   goto sleep;
  }
  VAR_10 = VAR_9->transid;
  FUNC_13(&VAR_7->trans_lock);


  VAR_8 = FUNC_2(VAR_6);
  if (FUNC_0(VAR_8)) {
   if (FUNC_1(VAR_8) != -VAR_2)
    VAR_13 = 1;
   goto sleep;
  }
  if (VAR_10 == VAR_8->transid) {
   FUNC_4(VAR_8);
  } else {
   FUNC_5(VAR_8);
  }
sleep:
  FUNC_16(VAR_7->cleaner_kthread);
  FUNC_10(&VAR_7->transaction_kthread_mutex);

  if (FUNC_15(FUNC_14(VAR_1,
          &VAR_7->fs_state)))
   FUNC_3(VAR_7);
  if (!FUNC_7() &&
    (!FUNC_6(VAR_7) ||
     VAR_13))
   FUNC_11(VAR_12);
 } while (!FUNC_7());
 return 0;
}
