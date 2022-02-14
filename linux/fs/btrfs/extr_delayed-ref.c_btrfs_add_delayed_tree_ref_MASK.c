
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct btrfs_trans_handle {TYPE_2__* transaction; struct btrfs_fs_info* fs_info; } ;
struct TYPE_3__ {int level; scalar_t__ root; } ;
struct btrfs_ref {int action; scalar_t__ real_root; scalar_t__ type; TYPE_1__ tree_ref; int skip_qgroup; scalar_t__ parent; scalar_t__ len; scalar_t__ bytenr; } ;
struct btrfs_qgroup_extent_record {int dummy; } ;
struct btrfs_fs_info {int flags; } ;
struct btrfs_delayed_tree_ref {scalar_t__ root; int level; int node; struct btrfs_delayed_extent_op* extent_op; scalar_t__ parent; } ;
struct btrfs_delayed_ref_root {int lock; } ;
struct btrfs_delayed_ref_head {scalar_t__ root; int level; int node; struct btrfs_delayed_extent_op* extent_op; scalar_t__ parent; } ;
struct btrfs_delayed_extent_op {scalar_t__ is_data; } ;
struct TYPE_4__ {struct btrfs_delayed_ref_root delayed_refs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct btrfs_delayed_tree_ref* FUNC_2 (struct btrfs_trans_handle*,struct btrfs_delayed_tree_ref*,struct btrfs_qgroup_extent_record*,int,int*,int*,int*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct btrfs_fs_info*,struct btrfs_qgroup_extent_record*) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 int FUNC_5 (struct btrfs_fs_info*,int *,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_6 (struct btrfs_delayed_tree_ref*,struct btrfs_qgroup_extent_record*,scalar_t__,scalar_t__,scalar_t__,int ,int,int,int) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_delayed_ref_root*,struct btrfs_delayed_tree_ref*,int *) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 struct btrfs_delayed_tree_ref* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,struct btrfs_delayed_tree_ref*) ;
 struct btrfs_qgroup_extent_record* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (struct btrfs_fs_info*,int *,struct btrfs_delayed_tree_ref*,int) ;

int FUNC_16(struct btrfs_trans_handle *VAR_11,
          struct btrfs_ref *VAR_12,
          struct btrfs_delayed_extent_op *VAR_13,
          int *VAR_14, int *VAR_15)
{
 struct btrfs_fs_info *VAR_16 = VAR_11->fs_info;
 struct btrfs_delayed_tree_ref *VAR_17;
 struct btrfs_delayed_ref_head *VAR_18;
 struct btrfs_delayed_ref_root *VAR_19;
 struct btrfs_qgroup_extent_record *VAR_20 = ((void*)0);
 int VAR_21;
 bool VAR_22;
 int VAR_23 = VAR_12->action;
 int VAR_24 = VAR_12->tree_ref.level;
 int VAR_25;
 u64 VAR_26 = VAR_12->bytenr;
 u64 VAR_27 = VAR_12->len;
 u64 VAR_28 = VAR_12->parent;
 u8 VAR_29;

 VAR_22 = (VAR_12->real_root == VAR_2);

 FUNC_0(VAR_12->type == VAR_4 && VAR_12->action);
 FUNC_1(VAR_13 && VAR_13->is_data);
 VAR_17 = FUNC_9(VAR_10, VAR_8);
 if (!VAR_17)
  return -VAR_7;

 VAR_18 = FUNC_9(VAR_9, VAR_8);
 if (!VAR_18) {
  FUNC_10(VAR_10, VAR_17);
  return -VAR_7;
 }

 if (FUNC_14(VAR_3, &VAR_16->flags) &&
     FUNC_8(VAR_12->real_root) &&
     FUNC_8(VAR_12->tree_ref.root) &&
     !VAR_12->skip_qgroup) {
  VAR_20 = FUNC_11(sizeof(*VAR_20), VAR_8);
  if (!VAR_20) {
   FUNC_10(VAR_10, VAR_17);
   FUNC_10(VAR_9, VAR_18);
   return -VAR_7;
  }
 }

 if (VAR_28)
  VAR_29 = VAR_5;
 else
  VAR_29 = VAR_6;

 FUNC_5(VAR_16, &VAR_17->node, VAR_26, VAR_27,
    VAR_12->tree_ref.root, VAR_23, VAR_29);
 VAR_17->root = VAR_12->tree_ref.root;
 VAR_17->parent = VAR_28;
 VAR_17->level = VAR_24;

 FUNC_6(VAR_18, VAR_20, VAR_26, VAR_27,
         VAR_12->tree_ref.root, 0, VAR_23, 0,
         VAR_22);
 VAR_18->extent_op = VAR_13;

 VAR_19 = &VAR_11->transaction->delayed_refs;
 FUNC_12(&VAR_19->lock);





 VAR_18 = FUNC_2(VAR_11, VAR_18, VAR_20,
     VAR_23, &VAR_21,
     VAR_14, VAR_15);

 VAR_25 = FUNC_7(VAR_11, VAR_19, VAR_18, &VAR_17->node);
 FUNC_13(&VAR_19->lock);





 FUNC_4(VAR_11);

 FUNC_15(VAR_16, &VAR_17->node, VAR_17,
       VAR_23 == VAR_0 ?
       VAR_1 : VAR_23);
 if (VAR_25 > 0)
  FUNC_10(VAR_10, VAR_17);

 if (VAR_21)
  FUNC_3(VAR_16, VAR_20);

 return 0;
}
