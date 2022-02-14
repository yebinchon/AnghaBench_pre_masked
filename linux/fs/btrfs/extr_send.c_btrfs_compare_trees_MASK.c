
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_root {int commit_root; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int search_commit_root; int skip_locking; int * slots; void** nodes; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {int commit_root_sem; int nodesize; } ;
typedef enum btrfs_compare_tree_result { ____Placeholder_btrfs_compare_tree_result } btrfs_compare_tree_result ;
typedef int (* btrfs_changed_cb_t ) (struct btrfs_path*,struct btrfs_path*,struct btrfs_key*,int,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 struct btrfs_path* FUNC_1 () ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct btrfs_key*,struct btrfs_key*) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,struct btrfs_key*,int ) ;
 scalar_t__ FUNC_7 (void*,int ) ;
 int FUNC_8 (void*,struct btrfs_key*,int ) ;
 scalar_t__ FUNC_9 (void*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (int ,int ) ;
 int FUNC_15 (struct btrfs_path*,int*,int,int,struct btrfs_key*) ;
 int FUNC_16 (struct btrfs_path*,struct btrfs_path*,char*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct btrfs_root *VAR_8,
   struct btrfs_root *VAR_9,
   btrfs_changed_cb_t VAR_10, void *VAR_11)
{
 struct btrfs_fs_info *VAR_12 = VAR_8->fs_info;
 int VAR_13;
 int VAR_14;
 struct btrfs_path *VAR_15 = ((void*)0);
 struct btrfs_path *VAR_16 = ((void*)0);
 struct btrfs_key VAR_17;
 struct btrfs_key VAR_18;
 char *VAR_19 = ((void*)0);
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 u64 VAR_28;
 u64 VAR_29;
 u64 VAR_30;
 u64 VAR_31;

 VAR_15 = FUNC_1();
 if (!VAR_15) {
  VAR_13 = -VAR_6;
  goto out;
 }
 VAR_16 = FUNC_1();
 if (!VAR_16) {
  VAR_13 = -VAR_6;
  goto out;
 }

 VAR_19 = FUNC_14(VAR_12->nodesize, VAR_7);
 if (!VAR_19) {
  VAR_13 = -VAR_6;
  goto out;
 }

 VAR_15->search_commit_root = 1;
 VAR_15->skip_locking = 1;
 VAR_16->search_commit_root = 1;
 VAR_16->skip_locking = 1;
 FUNC_11(&VAR_12->commit_root_sem);
 VAR_22 = FUNC_5(VAR_8->commit_root);
 VAR_20 = VAR_22;
 VAR_15->nodes[VAR_22] =
   FUNC_2(VAR_8->commit_root);
 if (!VAR_15->nodes[VAR_22]) {
  FUNC_17(&VAR_12->commit_root_sem);
  VAR_13 = -VAR_6;
  goto out;
 }

 VAR_23 = FUNC_5(VAR_9->commit_root);
 VAR_21 = VAR_23;
 VAR_16->nodes[VAR_23] =
   FUNC_2(VAR_9->commit_root);
 if (!VAR_16->nodes[VAR_23]) {
  FUNC_17(&VAR_12->commit_root_sem);
  VAR_13 = -VAR_6;
  goto out;
 }
 FUNC_17(&VAR_12->commit_root_sem);

 if (VAR_22 == 0)
  FUNC_6(VAR_15->nodes[VAR_22],
    &VAR_17, VAR_15->slots[VAR_22]);
 else
  FUNC_8(VAR_15->nodes[VAR_22],
    &VAR_17, VAR_15->slots[VAR_22]);
 if (VAR_23 == 0)
  FUNC_6(VAR_16->nodes[VAR_23],
    &VAR_18, VAR_16->slots[VAR_23]);
 else
  FUNC_8(VAR_16->nodes[VAR_23],
    &VAR_18, VAR_16->slots[VAR_23]);

 VAR_24 = VAR_25 = 0;
 VAR_26 = VAR_27 = 0;

 while (1) {
  FUNC_10();
  if (VAR_26 && !VAR_24) {
   VAR_13 = FUNC_15(VAR_15, &VAR_22,
     VAR_20,
     VAR_26 != VAR_1,
     &VAR_17);
   if (VAR_13 == -1)
    VAR_24 = VAR_0;
   else if (VAR_13 < 0)
    goto out;
   VAR_26 = 0;
  }
  if (VAR_27 && !VAR_25) {
   VAR_13 = FUNC_15(VAR_16, &VAR_23,
     VAR_21,
     VAR_27 != VAR_1,
     &VAR_18);
   if (VAR_13 == -1)
    VAR_25 = VAR_0;
   else if (VAR_13 < 0)
    goto out;
   VAR_27 = 0;
  }

  if (VAR_24 && VAR_25) {
   VAR_13 = 0;
   goto out;
  } else if (VAR_24) {
   if (VAR_23 == 0) {
    VAR_13 = VAR_10(VAR_15, VAR_16,
      &VAR_18,
      VAR_3,
      VAR_11);
    if (VAR_13 < 0)
     goto out;
   }
   VAR_27 = VAR_0;
   continue;
  } else if (VAR_25) {
   if (VAR_22 == 0) {
    VAR_13 = VAR_10(VAR_15, VAR_16,
      &VAR_17,
      VAR_4,
      VAR_11);
    if (VAR_13 < 0)
     goto out;
   }
   VAR_26 = VAR_0;
   continue;
  }

  if (VAR_22 == 0 && VAR_23 == 0) {
   VAR_14 = FUNC_3(&VAR_17, &VAR_18);
   if (VAR_14 < 0) {
    VAR_13 = VAR_10(VAR_15, VAR_16,
      &VAR_17,
      VAR_4,
      VAR_11);
    if (VAR_13 < 0)
     goto out;
    VAR_26 = VAR_0;
   } else if (VAR_14 > 0) {
    VAR_13 = VAR_10(VAR_15, VAR_16,
      &VAR_18,
      VAR_3,
      VAR_11);
    if (VAR_13 < 0)
     goto out;
    VAR_27 = VAR_0;
   } else {
    enum btrfs_compare_tree_result VAR_32;

    FUNC_0(!FUNC_12(VAR_15->nodes[0]));
    VAR_13 = FUNC_16(VAR_15, VAR_16,
       VAR_19);
    if (VAR_13)
     VAR_32 = VAR_2;
    else
     VAR_32 = VAR_5;
    VAR_13 = VAR_10(VAR_15, VAR_16,
       &VAR_17, VAR_32, VAR_11);
    if (VAR_13 < 0)
     goto out;
    VAR_26 = VAR_0;
    VAR_27 = VAR_0;
   }
  } else if (VAR_22 == VAR_23) {
   VAR_14 = FUNC_3(&VAR_17, &VAR_18);
   if (VAR_14 < 0) {
    VAR_26 = VAR_0;
   } else if (VAR_14 > 0) {
    VAR_27 = VAR_0;
   } else {
    VAR_28 = FUNC_7(
      VAR_15->nodes[VAR_22],
      VAR_15->slots[VAR_22]);
    VAR_29 = FUNC_7(
      VAR_16->nodes[VAR_23],
      VAR_16->slots[VAR_23]);
    VAR_30 = FUNC_9(
      VAR_15->nodes[VAR_22],
      VAR_15->slots[VAR_22]);
    VAR_31 = FUNC_9(
      VAR_16->nodes[VAR_23],
      VAR_16->slots[VAR_23]);
    if (VAR_28 == VAR_29 &&
        VAR_30 == VAR_31) {




     VAR_26 = VAR_1;
     VAR_27 = VAR_1;
    } else {
     VAR_26 = VAR_0;
     VAR_27 = VAR_0;
    }
   }
  } else if (VAR_22 < VAR_23) {
   VAR_27 = VAR_0;
  } else {
   VAR_26 = VAR_0;
  }
 }

out:
 FUNC_4(VAR_15);
 FUNC_4(VAR_16);
 FUNC_13(VAR_19);
 return VAR_13;
}
