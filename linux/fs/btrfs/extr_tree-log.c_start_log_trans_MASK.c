
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {scalar_t__ log_start_pid; int log_transid; int log_mutex; int * log_ctxs; int log_writers; int log_batch; int state; scalar_t__ log_root; struct btrfs_fs_info* fs_info; } ;
struct btrfs_log_ctx {int log_transid; int list; } ;
struct btrfs_fs_info {int tree_log_mutex; int log_root_tree; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_fs_info*) ;
 scalar_t__ FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (int ,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct btrfs_trans_handle *VAR_3,
      struct btrfs_root *VAR_4,
      struct btrfs_log_ctx *VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_4->fs_info;
 int VAR_7 = 0;

 FUNC_6(&VAR_4->log_mutex);

 if (VAR_4->log_root) {
  if (FUNC_3(VAR_3)) {
   VAR_7 = -VAR_1;
   goto out;
  }

  if (!VAR_4->log_start_pid) {
   FUNC_4(VAR_0, &VAR_4->state);
   VAR_4->log_start_pid = VAR_2->pid;
  } else if (VAR_4->log_start_pid != VAR_2->pid) {
   FUNC_8(VAR_0, &VAR_4->state);
  }
 } else {
  FUNC_6(&VAR_6->tree_log_mutex);
  if (!VAR_6->log_root_tree)
   VAR_7 = FUNC_2(VAR_3, VAR_6);
  FUNC_7(&VAR_6->tree_log_mutex);
  if (VAR_7)
   goto out;

  VAR_7 = FUNC_1(VAR_3, VAR_4);
  if (VAR_7)
   goto out;

  FUNC_4(VAR_0, &VAR_4->state);
  VAR_4->log_start_pid = VAR_2->pid;
 }

 FUNC_0(&VAR_4->log_batch);
 FUNC_0(&VAR_4->log_writers);
 if (VAR_5) {
  int VAR_8 = VAR_4->log_transid % 2;
  FUNC_5(&VAR_5->list, &VAR_4->log_ctxs[VAR_8]);
  VAR_5->log_transid = VAR_4->log_transid;
 }

out:
 FUNC_7(&VAR_4->log_mutex);
 return VAR_7;
}
