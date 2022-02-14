
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct walk_control {scalar_t__ stage; int pin; struct btrfs_trans_handle* trans; int process_func; struct btrfs_trans_handle* replay_dest; } ;
struct btrfs_trans_handle {struct btrfs_trans_handle* log_root; int node; int commit_root; int highest_objectid; struct btrfs_fs_info* fs_info; } ;
struct btrfs_root {struct btrfs_root* log_root; int node; int commit_root; int highest_objectid; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {scalar_t__* slots; int * nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ offset; void* type; } ;
struct btrfs_fs_info {int flags; int tree_root; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 int FUNC_5 (struct btrfs_trans_handle*,int *) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (struct btrfs_fs_info*,int,char*) ;
 int FUNC_8 (int ,struct btrfs_key*,scalar_t__) ;
 struct btrfs_trans_handle* FUNC_9 (struct btrfs_trans_handle*,struct btrfs_key*) ;
 struct btrfs_trans_handle* FUNC_10 (struct btrfs_fs_info*,struct btrfs_key*) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct btrfs_trans_handle*) ;
 int FUNC_12 (struct btrfs_path*) ;
 int FUNC_13 (int *,struct btrfs_trans_handle*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 struct btrfs_trans_handle* FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (struct btrfs_trans_handle*,struct btrfs_trans_handle*,struct btrfs_path*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct btrfs_trans_handle*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct btrfs_trans_handle*,struct btrfs_trans_handle*,struct walk_control*) ;

int FUNC_21(struct btrfs_root *VAR_9)
{
 int VAR_10;
 struct btrfs_path *VAR_11;
 struct btrfs_trans_handle *VAR_12;
 struct btrfs_key VAR_13;
 struct btrfs_key VAR_14;
 struct btrfs_key VAR_15;
 struct btrfs_root *VAR_16;
 struct btrfs_fs_info *VAR_17 = VAR_9->fs_info;
 struct walk_control VAR_18 = {
  .process_func = VAR_7,
  .stage = VAR_4,
 };

 VAR_11 = FUNC_2();
 if (!VAR_11)
  return -VAR_3;

 FUNC_19(VAR_0, &VAR_17->flags);

 VAR_12 = FUNC_14(VAR_17->tree_root, 0);
 if (FUNC_0(VAR_12)) {
  VAR_10 = FUNC_1(VAR_12);
  goto error;
 }

 VAR_18.trans = VAR_12;
 VAR_18.pin = 1;

 VAR_10 = FUNC_20(VAR_12, VAR_9, &VAR_18);
 if (VAR_10) {
  FUNC_7(VAR_17, VAR_10,
   "Failed to pin buffers while recovering log root tree.");
  goto error;
 }

again:
 VAR_13.objectid = VAR_2;
 VAR_13.offset = (u64)-1;
 VAR_13.type = VAR_1;

 while (1) {
  VAR_10 = FUNC_13(((void*)0), VAR_9, &VAR_13, VAR_11, 0, 0);

  if (VAR_10 < 0) {
   FUNC_7(VAR_17, VAR_10,
        "Couldn't find tree log root.");
   goto error;
  }
  if (VAR_10 > 0) {
   if (VAR_11->slots[0] == 0)
    break;
   VAR_11->slots[0]--;
  }
  FUNC_8(VAR_11->nodes[0], &VAR_14,
          VAR_11->slots[0]);
  FUNC_12(VAR_11);
  if (VAR_14.objectid != VAR_2)
   break;

  VAR_16 = FUNC_9(VAR_9, &VAR_14);
  if (FUNC_0(VAR_16)) {
   VAR_10 = FUNC_1(VAR_16);
   FUNC_7(VAR_17, VAR_10,
        "Couldn't read tree log root.");
   goto error;
  }

  VAR_15.objectid = VAR_14.offset;
  VAR_15.type = VAR_1;
  VAR_15.offset = (u64)-1;

  VAR_18.replay_dest = FUNC_10(VAR_17, &VAR_15);
  if (FUNC_0(VAR_18.replay_dest)) {
   VAR_10 = FUNC_1(VAR_18.replay_dest);
   FUNC_17(VAR_16->node);
   FUNC_17(VAR_16->commit_root);
   FUNC_18(VAR_16);
   FUNC_7(VAR_17, VAR_10,
    "Couldn't read target root for tree log recovery.");
   goto error;
  }

  VAR_18.replay_dest->log_root = VAR_16;
  FUNC_11(VAR_12, VAR_18.replay_dest);
  VAR_10 = FUNC_20(VAR_12, VAR_16, &VAR_18);

  if (!VAR_10 && VAR_18.stage == VAR_5) {
   VAR_10 = FUNC_16(VAR_12, VAR_18.replay_dest,
            VAR_11);
  }

  if (!VAR_10 && VAR_18.stage == VAR_5) {
   struct btrfs_root *VAR_19 = VAR_18.replay_dest;

   FUNC_12(VAR_11);
   VAR_10 = FUNC_5(VAR_19,
        &VAR_19->highest_objectid);
  }

  VAR_13.offset = VAR_14.offset - 1;
  VAR_18.replay_dest->log_root = ((void*)0);
  FUNC_17(VAR_16->node);
  FUNC_17(VAR_16->commit_root);
  FUNC_18(VAR_16);

  if (VAR_10)
   goto error;

  if (VAR_14.offset == 0)
   break;
 }
 FUNC_12(VAR_11);


 if (VAR_18.pin) {
  VAR_18.pin = 0;
  VAR_18.process_func = VAR_8;
  VAR_18.stage = VAR_6;
  goto again;
 }

 if (VAR_18.stage < VAR_5) {
  VAR_18.stage++;
  goto again;
 }

 FUNC_6(VAR_11);


 VAR_10 = FUNC_3(VAR_12);
 if (VAR_10)
  return VAR_10;

 FUNC_17(VAR_9->node);
 VAR_9->log_root = ((void*)0);
 FUNC_15(VAR_0, &VAR_17->flags);
 FUNC_18(VAR_9);

 return 0;
error:
 if (VAR_18.trans)
  FUNC_4(VAR_18.trans);
 FUNC_6(VAR_11);
 return VAR_10;
}
