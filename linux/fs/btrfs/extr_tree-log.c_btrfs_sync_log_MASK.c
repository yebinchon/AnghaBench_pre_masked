
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_root {int log_transid_committed; int log_transid; int last_log_commit; int * log_commit_wait; int log_mutex; int * log_commit; TYPE_1__* node; int dirty_log_pages; int log_writer_wait; int log_writers; int * log_ctxs; int log_batch; scalar_t__ log_start_pid; int root_item; int state; struct btrfs_root* log_root; struct btrfs_fs_info* fs_info; } ;
struct btrfs_log_ctx {int log_transid; int log_ret; int list; } ;
struct btrfs_fs_info {int super_for_commit; struct btrfs_root* log_root_tree; } ;
struct blk_plug {int dummy; } ;
typedef int new_root_item ;
struct TYPE_3__ {int start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct blk_plug*) ;
 int FUNC_6 (struct blk_plug*) ;
 int FUNC_7 (struct btrfs_trans_handle*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct btrfs_log_ctx*,int *) ;
 scalar_t__ FUNC_10 (struct btrfs_trans_handle*) ;
 int FUNC_11 (struct btrfs_root*,int,int) ;
 int FUNC_12 (struct btrfs_trans_handle*) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct btrfs_fs_info*,int ) ;
 int FUNC_17 (struct btrfs_root*,int) ;
 int FUNC_18 (struct btrfs_fs_info*,int *,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct btrfs_root_item*,int *,int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int) ;
 scalar_t__ FUNC_28 (int ,int *) ;
 int FUNC_29 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_root_item*) ;
 int FUNC_30 (struct btrfs_root*) ;
 int FUNC_31 (struct btrfs_root*,int) ;
 int FUNC_32 (struct btrfs_fs_info*,int) ;

int FUNC_33(struct btrfs_trans_handle *VAR_6,
     struct btrfs_root *VAR_7, struct btrfs_log_ctx *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 struct btrfs_fs_info *VAR_13 = VAR_7->fs_info;
 struct btrfs_root *VAR_14 = VAR_7->log_root;
 struct btrfs_root *VAR_15 = VAR_13->log_root_tree;
 struct btrfs_root_item VAR_16;
 int VAR_17 = 0;
 struct btrfs_log_ctx VAR_18;
 struct blk_plug VAR_19;

 FUNC_25(&VAR_7->log_mutex);
 VAR_17 = VAR_8->log_transid;
 if (VAR_7->log_transid_committed >= VAR_17) {
  FUNC_26(&VAR_7->log_mutex);
  return VAR_8->log_ret;
 }

 VAR_9 = VAR_17 % 2;
 if (FUNC_3(&VAR_7->log_commit[VAR_9])) {
  FUNC_31(VAR_7, VAR_17);
  FUNC_26(&VAR_7->log_mutex);
  return VAR_8->log_ret;
 }
 FUNC_0(VAR_17 == VAR_7->log_transid);
 FUNC_4(&VAR_7->log_commit[VAR_9], 1);


 if (FUNC_3(&VAR_7->log_commit[(VAR_9 + 1) % 2]))
  FUNC_31(VAR_7, VAR_17 - 1);

 while (1) {
  int VAR_20 = FUNC_3(&VAR_7->log_batch);

  if (!FUNC_16(VAR_13, VAR_5) &&
      FUNC_28(VAR_0, &VAR_7->state)) {
   FUNC_26(&VAR_7->log_mutex);
   FUNC_27(1);
   FUNC_25(&VAR_7->log_mutex);
  }
  FUNC_30(VAR_7);
  if (VAR_20 == FUNC_3(&VAR_7->log_batch))
   break;
 }


 if (FUNC_10(VAR_6)) {
  VAR_12 = -VAR_1;
  FUNC_26(&VAR_7->log_mutex);
  goto out;
 }

 if (VAR_17 % 2 == 0)
  VAR_11 = VAR_3;
 else
  VAR_11 = VAR_4;




 FUNC_6(&VAR_19);
 VAR_12 = FUNC_18(VAR_13, &VAR_14->dirty_log_pages, VAR_11);
 if (VAR_12) {
  FUNC_5(&VAR_19);
  FUNC_7(VAR_6, VAR_12);
  FUNC_12(VAR_6);
  FUNC_26(&VAR_7->log_mutex);
  goto out;
 }
 FUNC_13(&VAR_14->root_item, VAR_14->node);
 FUNC_24(&VAR_16, &VAR_14->root_item, sizeof(VAR_16));

 VAR_7->log_transid++;
 VAR_14->log_transid = VAR_7->log_transid;
 VAR_7->log_start_pid = 0;





 FUNC_26(&VAR_7->log_mutex);

 FUNC_9(&VAR_18, ((void*)0));

 FUNC_25(&VAR_15->log_mutex);
 FUNC_2(&VAR_15->log_batch);
 FUNC_2(&VAR_15->log_writers);

 VAR_10 = VAR_15->log_transid % 2;
 FUNC_21(&VAR_18.list, &VAR_15->log_ctxs[VAR_10]);
 VAR_18.log_transid = VAR_15->log_transid;

 FUNC_26(&VAR_15->log_mutex);

 FUNC_25(&VAR_15->log_mutex);






 VAR_12 = FUNC_29(VAR_6, VAR_14, &VAR_16);

 if (FUNC_1(&VAR_15->log_writers)) {

  FUNC_20(&VAR_15->log_writer_wait);
 }

 if (VAR_12) {
  if (!FUNC_23(&VAR_18.list))
   FUNC_22(&VAR_18.list);

  FUNC_5(&VAR_19);
  FUNC_12(VAR_6);

  if (VAR_12 != -VAR_2) {
   FUNC_7(VAR_6, VAR_12);
   FUNC_26(&VAR_15->log_mutex);
   goto out;
  }
  FUNC_17(VAR_14, VAR_11);
  FUNC_26(&VAR_15->log_mutex);
  VAR_12 = -VAR_1;
  goto out;
 }

 if (VAR_15->log_transid_committed >= VAR_18.log_transid) {
  FUNC_5(&VAR_19);
  FUNC_22(&VAR_18.list);
  FUNC_26(&VAR_15->log_mutex);
  VAR_12 = VAR_18.log_ret;
  goto out;
 }

 VAR_10 = VAR_18.log_transid % 2;
 if (FUNC_3(&VAR_15->log_commit[VAR_10])) {
  FUNC_5(&VAR_19);
  VAR_12 = FUNC_17(VAR_14, VAR_11);
  FUNC_31(VAR_15,
    VAR_18.log_transid);
  FUNC_26(&VAR_15->log_mutex);
  if (!VAR_12)
   VAR_12 = VAR_18.log_ret;
  goto out;
 }
 FUNC_0(VAR_18.log_transid == VAR_15->log_transid);
 FUNC_4(&VAR_15->log_commit[VAR_10], 1);

 if (FUNC_3(&VAR_15->log_commit[(VAR_10 + 1) % 2])) {
  FUNC_31(VAR_15,
    VAR_18.log_transid - 1);
 }

 FUNC_30(VAR_15);





 if (FUNC_10(VAR_6)) {
  FUNC_5(&VAR_19);
  FUNC_17(VAR_14, VAR_11);
  FUNC_26(&VAR_15->log_mutex);
  VAR_12 = -VAR_1;
  goto out_wake_log_root;
 }

 VAR_12 = FUNC_18(VAR_13,
      &VAR_15->dirty_log_pages,
      VAR_3 | VAR_4);
 FUNC_5(&VAR_19);
 if (VAR_12) {
  FUNC_12(VAR_6);
  FUNC_7(VAR_6, VAR_12);
  FUNC_26(&VAR_15->log_mutex);
  goto out_wake_log_root;
 }
 VAR_12 = FUNC_17(VAR_14, VAR_11);
 if (!VAR_12)
  VAR_12 = FUNC_17(VAR_15,
        VAR_4 | VAR_3);
 if (VAR_12) {
  FUNC_12(VAR_6);
  FUNC_26(&VAR_15->log_mutex);
  goto out_wake_log_root;
 }

 FUNC_14(VAR_13->super_for_commit,
     VAR_15->node->start);
 FUNC_15(VAR_13->super_for_commit,
           FUNC_8(VAR_15->node));

 VAR_15->log_transid++;
 FUNC_26(&VAR_15->log_mutex);
 VAR_12 = FUNC_32(VAR_13, 1);
 if (VAR_12) {
  FUNC_12(VAR_6);
  FUNC_7(VAR_6, VAR_12);
  goto out_wake_log_root;
 }

 FUNC_25(&VAR_7->log_mutex);
 if (VAR_7->last_log_commit < VAR_17)
  VAR_7->last_log_commit = VAR_17;
 FUNC_26(&VAR_7->log_mutex);

out_wake_log_root:
 FUNC_25(&VAR_15->log_mutex);
 FUNC_11(VAR_15, VAR_10, VAR_12);

 VAR_15->log_transid_committed++;
 FUNC_4(&VAR_15->log_commit[VAR_10], 0);
 FUNC_26(&VAR_15->log_mutex);






 FUNC_19(&VAR_15->log_commit_wait[VAR_10]);
out:
 FUNC_25(&VAR_7->log_mutex);
 FUNC_11(VAR_7, VAR_9, VAR_12);
 VAR_7->log_transid_committed++;
 FUNC_4(&VAR_7->log_commit[VAR_9], 0);
 FUNC_26(&VAR_7->log_mutex);






 FUNC_19(&VAR_7->log_commit_wait[VAR_9]);
 return VAR_12;
}
