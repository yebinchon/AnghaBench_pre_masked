
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int state; int root_item; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_fs_info {struct btrfs_root* tree_root; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct btrfs_root*) ;
 struct btrfs_path* FUNC_6 () ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,scalar_t__) ;
 int FUNC_8 (struct btrfs_trans_handle*) ;
 int FUNC_9 (struct btrfs_root*) ;
 int FUNC_10 (struct btrfs_path*) ;
 int FUNC_11 (struct btrfs_fs_info*,int,char*) ;
 scalar_t__ FUNC_12 (struct extent_buffer*) ;
 int FUNC_13 (struct btrfs_root*) ;
 int FUNC_14 (struct btrfs_fs_info*,struct btrfs_root*) ;
 int FUNC_15 (struct extent_buffer*,struct btrfs_key*,scalar_t__) ;
 struct btrfs_trans_handle* FUNC_16 (struct btrfs_root*) ;
 struct btrfs_root* FUNC_17 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_18 (struct btrfs_root*,struct btrfs_path*) ;
 struct btrfs_root* FUNC_19 (struct btrfs_root*,struct btrfs_key*) ;
 int FUNC_20 (struct btrfs_path*) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (int ,int *) ;

int FUNC_25(struct btrfs_fs_info *VAR_8)
{
 struct btrfs_root *VAR_9 = VAR_8->tree_root;
 struct extent_buffer *VAR_10;
 struct btrfs_path *VAR_11;
 struct btrfs_key VAR_12;
 struct btrfs_key VAR_13;
 struct btrfs_root *VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 VAR_11 = FUNC_6();
 if (!VAR_11)
  return -VAR_7;

 VAR_12.objectid = VAR_1;
 VAR_12.type = VAR_0;
 VAR_12.offset = 0;

 VAR_13.type = VAR_3;
 VAR_13.offset = (u64)-1;

 while (1) {
  VAR_16 = FUNC_22(((void*)0), VAR_9, &VAR_12, VAR_11, 0, 0);
  if (VAR_16 < 0) {
   VAR_15 = VAR_16;
   break;
  }

  VAR_10 = VAR_11->nodes[0];
  if (VAR_11->slots[0] >= FUNC_12(VAR_10)) {
   VAR_16 = FUNC_18(VAR_9, VAR_11);
   if (VAR_16 < 0)
    VAR_15 = VAR_16;
   if (VAR_16 != 0)
    break;
   VAR_10 = VAR_11->nodes[0];
  }

  FUNC_15(VAR_10, &VAR_12, VAR_11->slots[0]);
  FUNC_20(VAR_11);

  if (VAR_12.objectid != VAR_1 ||
      VAR_12.type != VAR_0)
   break;

  VAR_13.objectid = VAR_12.offset;
  VAR_12.offset++;
  VAR_14 = FUNC_17(VAR_8, VAR_13.objectid);
  if (VAR_14) {
   FUNC_4(!FUNC_24(VAR_4,
       &VAR_14->state));
   if (FUNC_21(&VAR_14->root_item) == 0) {
    FUNC_23(VAR_2, &VAR_14->state);
    FUNC_5(VAR_14);
   }
   continue;
  }

  VAR_14 = FUNC_19(VAR_9, &VAR_13);
  VAR_15 = FUNC_3(VAR_14);
  if (VAR_15 && VAR_15 != -VAR_6) {
   break;
  } else if (VAR_15 == -VAR_6) {
   struct btrfs_trans_handle *VAR_17;

   FUNC_20(VAR_11);

   VAR_17 = FUNC_16(VAR_9);
   if (FUNC_1(VAR_17)) {
    VAR_15 = FUNC_2(VAR_17);
    FUNC_11(VAR_8, VAR_15,
         "Failed to start trans to delete orphan item");
    break;
   }
   VAR_15 = FUNC_7(VAR_17, VAR_9,
          VAR_13.objectid);
   FUNC_8(VAR_17);
   if (VAR_15) {
    FUNC_11(VAR_8, VAR_15,
         "Failed to delete root orphan item");
    break;
   }
   continue;
  }

  VAR_15 = FUNC_13(VAR_14);
  if (VAR_15) {
   FUNC_9(VAR_14);
   break;
  }

  FUNC_23(VAR_4, &VAR_14->state);

  VAR_15 = FUNC_14(VAR_8, VAR_14);
  if (VAR_15) {
   FUNC_0(VAR_15 == -VAR_5);
   FUNC_9(VAR_14);
   break;
  }

  if (FUNC_21(&VAR_14->root_item) == 0) {
   FUNC_23(VAR_2, &VAR_14->state);
   FUNC_5(VAR_14);
  }
 }

 FUNC_10(VAR_11);
 return VAR_15;
}
