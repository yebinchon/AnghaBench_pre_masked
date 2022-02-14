
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_transaction {int writer_wait; int num_writers; int state; } ;
struct btrfs_trans_handle {int type; scalar_t__ aborted; int * block_rsv; int * orig_rsv; int use_count; struct btrfs_transaction* transaction; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int transaction_kthread; int fs_state; struct btrfs_transaction* running_transaction; int sb; } ;
struct TYPE_2__ {struct btrfs_trans_handle* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 int FUNC_5 (struct btrfs_trans_handle*) ;
 int FUNC_6 (struct btrfs_transaction*) ;
 int FUNC_7 (struct btrfs_fs_info*) ;
 int VAR_5 ;
 int FUNC_8 (struct btrfs_trans_handle*) ;
 int FUNC_9 (struct btrfs_trans_handle*) ;
 int FUNC_10 (int *) ;
 TYPE_1__* VAR_6 ;
 int FUNC_11 (struct btrfs_transaction*,int) ;
 int FUNC_12 (int ,struct btrfs_trans_handle*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct btrfs_trans_handle *VAR_7,
       int VAR_8)
{
 struct btrfs_fs_info *VAR_9 = VAR_7->fs_info;
 struct btrfs_transaction *VAR_10 = VAR_7->transaction;
 int VAR_11 = (VAR_7->type != VAR_2);
 int VAR_12 = 0;

 if (FUNC_14(&VAR_7->use_count) > 1) {
  FUNC_13(&VAR_7->use_count);
  VAR_7->block_rsv = VAR_7->orig_rsv;
  return 0;
 }

 FUNC_9(VAR_7);
 VAR_7->block_rsv = ((void*)0);

 FUNC_5(VAR_7);

 FUNC_8(VAR_7);

 if (VAR_11 && FUNC_0(VAR_10->state) == VAR_3) {
  if (VAR_8)
   return FUNC_4(VAR_7);
  else
   FUNC_17(VAR_9->transaction_kthread);
 }

 if (VAR_7->type & VAR_4)
  FUNC_15(VAR_9->sb);

 FUNC_1(VAR_10 != VAR_9->running_transaction);
 FUNC_1(FUNC_3(&VAR_10->num_writers) < 1);
 FUNC_2(&VAR_10->num_writers);
 FUNC_11(VAR_10, VAR_7->type);

 FUNC_10(&VAR_10->writer_wait);
 FUNC_6(VAR_10);

 if (VAR_6->journal_info == VAR_7)
  VAR_6->journal_info = ((void*)0);

 if (VAR_8)
  FUNC_7(VAR_9);

 if (VAR_7->aborted ||
     FUNC_16(VAR_0, &VAR_9->fs_state)) {
  FUNC_17(VAR_9->transaction_kthread);
  VAR_12 = -VAR_1;
 }

 FUNC_12(VAR_5, VAR_7);
 return VAR_12;
}
