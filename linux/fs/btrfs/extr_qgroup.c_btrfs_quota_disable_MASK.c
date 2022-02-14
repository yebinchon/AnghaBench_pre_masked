
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int commit_root; int node; int dirty_list; int root_key; } ;
struct btrfs_fs_info {int qgroup_ioctl_lock; int qgroup_lock; int qgroup_flags; struct btrfs_root* quota_root; int flags; int tree_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*,int) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct btrfs_trans_handle*,int *) ;
 int FUNC_6 (struct btrfs_trans_handle*) ;
 int FUNC_7 (struct btrfs_fs_info*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,int ,int ,int) ;
 int FUNC_9 (struct btrfs_fs_info*,int) ;
 struct btrfs_trans_handle* FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct btrfs_root*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct btrfs_fs_info *VAR_2)
{
 struct btrfs_root *VAR_3;
 struct btrfs_trans_handle *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 FUNC_17(&VAR_2->qgroup_ioctl_lock);
 if (!VAR_2->quota_root)
  goto out;







 VAR_4 = FUNC_10(VAR_2->tree_root, 1);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto out;
 }

 FUNC_13(VAR_0, &VAR_2->flags);
 FUNC_9(VAR_2, 0);
 FUNC_19(&VAR_2->qgroup_lock);
 VAR_3 = VAR_2->quota_root;
 VAR_2->quota_root = ((void*)0);
 VAR_2->qgroup_flags &= ~VAR_1;
 FUNC_20(&VAR_2->qgroup_lock);

 FUNC_7(VAR_2);

 VAR_5 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_4, VAR_5);
  goto end_trans;
 }

 VAR_5 = FUNC_5(VAR_4, &VAR_3->root_key);
 if (VAR_5) {
  FUNC_2(VAR_4, VAR_5);
  goto end_trans;
 }

 FUNC_16(&VAR_3->dirty_list);

 FUNC_11(VAR_3->node);
 FUNC_4(VAR_3->node);
 FUNC_12(VAR_3->node);
 FUNC_8(VAR_4, VAR_3, VAR_3->node, 0, 1);

 FUNC_14(VAR_3->node);
 FUNC_14(VAR_3->commit_root);
 FUNC_15(VAR_3);

end_trans:
 VAR_5 = FUNC_6(VAR_4);
out:
 FUNC_18(&VAR_2->qgroup_ioctl_lock);
 return VAR_5;
}
