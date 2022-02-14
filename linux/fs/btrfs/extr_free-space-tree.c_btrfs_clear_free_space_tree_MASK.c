
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int commit_root; int node; int dirty_list; int root_key; } ;
struct btrfs_fs_info {struct btrfs_root* free_space_root; struct btrfs_root* tree_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct btrfs_fs_info*,int ) ;
 int FUNC_5 (struct btrfs_trans_handle*) ;
 int FUNC_6 (struct btrfs_trans_handle*,int *) ;
 int FUNC_7 (struct btrfs_trans_handle*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,int ,int ,int) ;
 struct btrfs_trans_handle* FUNC_9 (struct btrfs_root*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct btrfs_root*) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct btrfs_fs_info *VAR_2)
{
 struct btrfs_trans_handle *VAR_3;
 struct btrfs_root *VAR_4 = VAR_2->tree_root;
 struct btrfs_root *VAR_5 = VAR_2->free_space_root;
 int VAR_6;

 VAR_3 = FUNC_9(VAR_4, 0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_4(VAR_2, VAR_0);
 FUNC_4(VAR_2, VAR_1);
 VAR_2->free_space_root = ((void*)0);

 VAR_6 = FUNC_12(VAR_3, VAR_5);
 if (VAR_6)
  goto abort;

 VAR_6 = FUNC_6(VAR_3, &VAR_5->root_key);
 if (VAR_6)
  goto abort;

 FUNC_15(&VAR_5->dirty_list);

 FUNC_10(VAR_5->node);
 FUNC_3(VAR_5->node);
 FUNC_11(VAR_5->node);
 FUNC_8(VAR_3, VAR_5, VAR_5->node,
         0, 1);

 FUNC_13(VAR_5->node);
 FUNC_13(VAR_5->commit_root);
 FUNC_14(VAR_5);

 return FUNC_5(VAR_3);

abort:
 FUNC_2(VAR_3, VAR_6);
 FUNC_7(VAR_3);
 return VAR_6;
}
