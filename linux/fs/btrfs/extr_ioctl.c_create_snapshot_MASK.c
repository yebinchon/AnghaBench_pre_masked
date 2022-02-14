
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct inode {int transid; TYPE_2__* transaction; int i_sb; } ;
struct dentry {int d_parent; } ;
struct btrfs_trans_handle {int transid; TYPE_2__* transaction; int i_sb; } ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_root {int will_be_snapshotted; int snapshot_force_cow; TYPE_1__* subv_writers; int nr_swapfiles; int state; } ;
struct btrfs_qgroup_inherit {int dummy; } ;
struct btrfs_pending_snapshot {int readonly; int error; int path; struct btrfs_pending_snapshot* root_item; int block_rsv; int snap; int list; struct btrfs_qgroup_inherit* inherit; struct inode* dir; struct btrfs_root* root; struct dentry* dentry; } ;
struct btrfs_fs_info {int trans_lock; } ;
struct TYPE_6__ {int root; } ;
struct TYPE_5__ {int pending_snapshots; } ;
struct TYPE_4__ {int counter; int wait; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 struct inode* FUNC_12 (int ,struct dentry*) ;
 int FUNC_13 (int ) ;
 struct btrfs_fs_info* FUNC_14 (int ) ;
 int FUNC_15 (struct btrfs_root*) ;
 struct inode* FUNC_16 (struct btrfs_root*,int ) ;
 int FUNC_17 (struct btrfs_fs_info*,int *) ;
 int FUNC_18 (int ,int *,int,int) ;
 int FUNC_19 (struct btrfs_root*,int ,int ,int ) ;
 int FUNC_20 (struct btrfs_fs_info*,char*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct dentry*,struct inode*) ;
 int FUNC_23 (struct btrfs_pending_snapshot*) ;
 void* FUNC_24 (int,int ) ;
 int FUNC_25 (int *,int *) ;
 scalar_t__ FUNC_26 (int *) ;
 int FUNC_27 () ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int ,int *) ;
 int FUNC_31 (int ,int) ;
 int FUNC_32 (int *) ;

__attribute__((used)) static int FUNC_33(struct btrfs_root *VAR_7, struct inode *VAR_8,
      struct dentry *VAR_9,
      u64 *VAR_10, bool VAR_11,
      struct btrfs_qgroup_inherit *VAR_12)
{
 struct btrfs_fs_info *VAR_13 = FUNC_14(VAR_8->i_sb);
 struct inode *VAR_14;
 struct btrfs_pending_snapshot *VAR_15;
 struct btrfs_trans_handle *VAR_16;
 int VAR_17;
 bool VAR_18 = 0;

 if (!FUNC_30(VAR_1, &VAR_7->state))
  return -VAR_2;

 if (FUNC_6(&VAR_7->nr_swapfiles)) {
  FUNC_20(VAR_13,
      "cannot snapshot subvolume with active swapfile");
  return -VAR_4;
 }

 VAR_15 = FUNC_24(sizeof(*VAR_15), VAR_5);
 if (!VAR_15)
  return -VAR_3;

 VAR_15->root_item = FUNC_24(sizeof(struct btrfs_root_item),
   VAR_5);
 VAR_15->path = FUNC_7();
 if (!VAR_15->root_item || !VAR_15->path) {
  VAR_17 = -VAR_3;
  goto free_pending;
 }






 FUNC_5(&VAR_7->will_be_snapshotted);
 FUNC_27();

 FUNC_31(VAR_7->subv_writers->wait,
     FUNC_26(&VAR_7->subv_writers->counter) == 0);

 VAR_17 = FUNC_15(VAR_7);
 if (VAR_17)
  goto dec_and_free;






 FUNC_5(&VAR_7->snapshot_force_cow);
 VAR_18 = 1;

 FUNC_19(VAR_7, VAR_6, 0, (u64)-1);

 FUNC_11(&VAR_15->block_rsv,
        VAR_0);
 VAR_17 = FUNC_18(FUNC_0(VAR_8)->root,
     &VAR_15->block_rsv, 8,
     0);
 if (VAR_17)
  goto dec_and_free;

 VAR_15->dentry = VAR_9;
 VAR_15->root = VAR_7;
 VAR_15->readonly = VAR_11;
 VAR_15->dir = VAR_8;
 VAR_15->inherit = VAR_12;

 VAR_16 = FUNC_16(VAR_7, 0);
 if (FUNC_1(VAR_16)) {
  VAR_17 = FUNC_2(VAR_16);
  goto fail;
 }

 FUNC_28(&VAR_13->trans_lock);
 FUNC_25(&VAR_15->list,
   &VAR_16->transaction->pending_snapshots);
 FUNC_29(&VAR_13->trans_lock);
 if (VAR_10) {
  *VAR_10 = VAR_16->transid;
  VAR_17 = FUNC_9(VAR_16, 1);
  if (VAR_17)
   VAR_17 = FUNC_8(VAR_16);
 } else {
  VAR_17 = FUNC_8(VAR_16);
 }
 if (VAR_17)
  goto fail;

 VAR_17 = VAR_15->error;
 if (VAR_17)
  goto fail;

 VAR_17 = FUNC_13(VAR_15->snap);
 if (VAR_17)
  goto fail;

 VAR_14 = FUNC_12(FUNC_21(VAR_9->d_parent), VAR_9);
 if (FUNC_1(VAR_14)) {
  VAR_17 = FUNC_2(VAR_14);
  goto fail;
 }

 FUNC_22(VAR_9, VAR_14);
 VAR_17 = 0;
fail:
 FUNC_17(VAR_13, &VAR_15->block_rsv);
dec_and_free:
 if (VAR_18)
  FUNC_3(&VAR_7->snapshot_force_cow);
 if (FUNC_4(&VAR_7->will_be_snapshotted))
  FUNC_32(&VAR_7->will_be_snapshotted);
free_pending:
 FUNC_23(VAR_15->root_item);
 FUNC_10(VAR_15->path);
 FUNC_23(VAR_15);

 return VAR_17;
}
