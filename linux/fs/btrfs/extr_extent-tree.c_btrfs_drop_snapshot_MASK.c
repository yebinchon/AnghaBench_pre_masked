
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct walk_control {int* refs; int level; int shared_level; scalar_t__ stage; int update_ref; size_t drop_level; int drop_progress; int reada_count; scalar_t__ keep_locks; scalar_t__ restarted; int * flags; int update_progress; } ;
struct btrfs_trans_handle {struct btrfs_block_rsv* block_rsv; } ;
struct btrfs_root_item {int drop_level; int drop_progress; } ;
struct TYPE_9__ {int objectid; } ;
struct btrfs_root {int commit_root; int node; int state; TYPE_1__ root_key; struct btrfs_root_item root_item; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int lowest_level; scalar_t__* slots; TYPE_2__** nodes; void** locks; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {struct btrfs_root* tree_root; } ;
struct btrfs_block_rsv {int dummy; } ;
struct TYPE_10__ {int start; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct btrfs_trans_handle*,int) ;
 int FUNC_6 (struct btrfs_root*) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 struct btrfs_path* FUNC_8 () ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct btrfs_fs_info*,char*,...) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,int ) ;
 int FUNC_12 (struct btrfs_trans_handle*,TYPE_1__*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (struct btrfs_key*,int *) ;
 int FUNC_15 (struct btrfs_trans_handle*) ;
 int FUNC_16 (struct btrfs_root*,TYPE_1__*,struct btrfs_path*,int *,int *) ;
 int FUNC_17 (struct btrfs_path*) ;
 int FUNC_18 (struct btrfs_fs_info*,int,int *) ;
 int FUNC_19 (int ) ;
 TYPE_2__* FUNC_20 (struct btrfs_root*) ;
 int FUNC_21 (struct btrfs_trans_handle*,struct btrfs_fs_info*,int ,int,int,int*,int *) ;
 scalar_t__ FUNC_22 (struct btrfs_fs_info*) ;
 int FUNC_23 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_24 (struct btrfs_root*) ;
 int FUNC_25 (struct btrfs_path*) ;
 int FUNC_26 (struct btrfs_trans_handle*) ;
 int FUNC_27 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_28 (TYPE_2__*) ;
 scalar_t__ FUNC_29 (struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_30 (struct btrfs_root*,int ) ;
 int FUNC_31 (TYPE_2__*) ;
 int FUNC_32 (TYPE_2__*) ;
 int FUNC_33 (struct btrfs_path*,int ) ;
 int FUNC_34 (struct btrfs_trans_handle*,struct btrfs_root*,TYPE_1__*,struct btrfs_root_item*) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (struct walk_control*) ;
 struct walk_control* FUNC_37 (int,int ) ;
 int FUNC_38 (int *,struct btrfs_key*,int) ;
 int FUNC_39 (int *,int ,int) ;
 int FUNC_40 (int ,int *) ;
 scalar_t__ FUNC_41 (int ,int *) ;
 int FUNC_42 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct walk_control*) ;
 int FUNC_43 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct walk_control*,int ) ;

int FUNC_44(struct btrfs_root *VAR_10,
    struct btrfs_block_rsv *VAR_11, int VAR_12,
    int VAR_13)
{
 struct btrfs_fs_info *VAR_14 = VAR_10->fs_info;
 struct btrfs_path *VAR_15;
 struct btrfs_trans_handle *VAR_16;
 struct btrfs_root *VAR_17 = VAR_14->tree_root;
 struct btrfs_root_item *VAR_18 = &VAR_10->root_item;
 struct walk_control *VAR_19;
 struct btrfs_key VAR_20;
 int VAR_21 = 0;
 int VAR_22;
 int VAR_23;
 bool VAR_24 = 0;

 FUNC_10(VAR_14, "Drop subvolume %llu", VAR_10->root_key.objectid);

 VAR_15 = FUNC_8();
 if (!VAR_15) {
  VAR_21 = -VAR_8;
  goto out;
 }

 VAR_19 = FUNC_37(sizeof(*VAR_19), VAR_9);
 if (!VAR_19) {
  FUNC_17(VAR_15);
  VAR_21 = -VAR_8;
  goto out;
 }

 VAR_16 = FUNC_30(VAR_17, 0);
 if (FUNC_2(VAR_16)) {
  VAR_21 = FUNC_3(VAR_16);
  goto out_free;
 }

 VAR_21 = FUNC_26(VAR_16);
 if (VAR_21)
  goto out_end_trans;

 if (VAR_11)
  VAR_16->block_rsv = VAR_11;
 FUNC_40(VAR_2, &VAR_10->state);
 if (FUNC_13(&VAR_18->drop_progress) == 0) {
  VAR_23 = FUNC_19(VAR_10->node);
  VAR_15->nodes[VAR_23] = FUNC_20(VAR_10);
  FUNC_28(VAR_15->nodes[VAR_23]);
  VAR_15->slots[VAR_23] = 0;
  VAR_15->locks[VAR_23] = VAR_5;
  FUNC_39(&VAR_19->update_progress, 0,
         sizeof(VAR_19->update_progress));
 } else {
  FUNC_14(&VAR_20, &VAR_18->drop_progress);
  FUNC_38(&VAR_19->update_progress, &VAR_20,
         sizeof(VAR_19->update_progress));

  VAR_23 = VAR_18->drop_level;
  FUNC_1(VAR_23 == 0);
  VAR_15->lowest_level = VAR_23;
  VAR_22 = FUNC_27(((void*)0), VAR_10, &VAR_20, VAR_15, 0, 0);
  VAR_15->lowest_level = 0;
  if (VAR_22 < 0) {
   VAR_21 = VAR_22;
   goto out_end_trans;
  }
  FUNC_4(VAR_22 > 0);





  FUNC_33(VAR_15, 0);

  VAR_23 = FUNC_19(VAR_10->node);
  while (1) {
   FUNC_31(VAR_15->nodes[VAR_23]);
   FUNC_28(VAR_15->nodes[VAR_23]);
   VAR_15->locks[VAR_23] = VAR_5;

   VAR_22 = FUNC_21(VAR_16, VAR_14,
      VAR_15->nodes[VAR_23]->start,
      VAR_23, 1, &VAR_19->refs[VAR_23],
      &VAR_19->flags[VAR_23]);
   if (VAR_22 < 0) {
    VAR_21 = VAR_22;
    goto out_end_trans;
   }
   FUNC_1(VAR_19->refs[VAR_23] == 0);

   if (VAR_23 == VAR_18->drop_level)
    break;

   FUNC_32(VAR_15->nodes[VAR_23]);
   VAR_15->locks[VAR_23] = 0;
   FUNC_4(VAR_19->refs[VAR_23] != 1);
   VAR_23--;
  }
 }

 VAR_19->restarted = FUNC_41(VAR_1, &VAR_10->state);
 VAR_19->level = VAR_23;
 VAR_19->shared_level = -1;
 VAR_19->stage = VAR_6;
 VAR_19->update_ref = VAR_12;
 VAR_19->keep_locks = 0;
 VAR_19->reada_count = FUNC_0(VAR_14);

 while (1) {

  VAR_22 = FUNC_42(VAR_16, VAR_10, VAR_15, VAR_19);
  if (VAR_22 < 0) {
   VAR_21 = VAR_22;
   break;
  }

  VAR_22 = FUNC_43(VAR_16, VAR_10, VAR_15, VAR_19, VAR_0);
  if (VAR_22 < 0) {
   VAR_21 = VAR_22;
   break;
  }

  if (VAR_22 > 0) {
   FUNC_1(VAR_19->stage != VAR_6);
   break;
  }

  if (VAR_19->stage == VAR_6) {
   VAR_19->drop_level = VAR_19->level;
   FUNC_23(VAR_15->nodes[VAR_19->drop_level],
           &VAR_19->drop_progress,
           VAR_15->slots[VAR_19->drop_level]);
  }
  FUNC_9(&VAR_18->drop_progress,
          &VAR_19->drop_progress);
  VAR_18->drop_level = VAR_19->drop_level;

  FUNC_1(VAR_19->level == 0);
  if (FUNC_29(VAR_16) ||
      (!VAR_13 && FUNC_22(VAR_14))) {
   VAR_22 = FUNC_34(VAR_16, VAR_17,
      &VAR_10->root_key,
      VAR_18);
   if (VAR_22) {
    FUNC_5(VAR_16, VAR_22);
    VAR_21 = VAR_22;
    goto out_end_trans;
   }

   FUNC_15(VAR_16);
   if (!VAR_13 && FUNC_22(VAR_14)) {
    FUNC_10(VAR_14,
         "drop snapshot early exit");
    VAR_21 = -VAR_7;
    goto out_free;
   }

   VAR_16 = FUNC_30(VAR_17, 0);
   if (FUNC_2(VAR_16)) {
    VAR_21 = FUNC_3(VAR_16);
    goto out_free;
   }
   if (VAR_11)
    VAR_16->block_rsv = VAR_11;
  }
 }
 FUNC_25(VAR_15);
 if (VAR_21)
  goto out_end_trans;

 VAR_22 = FUNC_12(VAR_16, &VAR_10->root_key);
 if (VAR_22) {
  FUNC_5(VAR_16, VAR_22);
  VAR_21 = VAR_22;
  goto out_end_trans;
 }

 if (VAR_10->root_key.objectid != VAR_4) {
  VAR_22 = FUNC_16(VAR_17, &VAR_10->root_key, VAR_15,
          ((void*)0), ((void*)0));
  if (VAR_22 < 0) {
   FUNC_5(VAR_16, VAR_22);
   VAR_21 = VAR_22;
   goto out_end_trans;
  } else if (VAR_22 > 0) {





   FUNC_11(VAR_16, VAR_17,
           VAR_10->root_key.objectid);
  }
 }

 if (FUNC_41(VAR_3, &VAR_10->state)) {
  FUNC_7(VAR_16, VAR_10);
 } else {
  FUNC_35(VAR_10->node);
  FUNC_35(VAR_10->commit_root);
  FUNC_24(VAR_10);
 }
 VAR_24 = 1;
out_end_trans:
 FUNC_15(VAR_16);
out_free:
 FUNC_36(VAR_19);
 FUNC_17(VAR_15);
out:







 if (!VAR_13 && !VAR_24)
  FUNC_6(VAR_10);
 if (VAR_21 && VAR_21 != -VAR_7)
  FUNC_18(VAR_14, VAR_21, ((void*)0));
 return VAR_21;
}
