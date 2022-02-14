
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_nlink; int i_ctime; int i_sb; } ;
struct dentry {struct dentry* d_parent; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_8__ {scalar_t__ objectid; } ;
struct btrfs_root {TYPE_1__ root_key; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_9__ {unsigned long long dir_index; int runtime_flags; struct btrfs_root* root; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*,TYPE_2__*,struct dentry*,TYPE_2__*,int,int ) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct btrfs_trans_handle*) ;
 int FUNC_6 (struct btrfs_trans_handle*) ;
 int FUNC_7 (struct btrfs_trans_handle*,TYPE_2__*,int *,struct dentry*,int,int *) ;
 int FUNC_8 (struct btrfs_trans_handle*,TYPE_2__*) ;
 struct btrfs_fs_info* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 struct btrfs_trans_handle* FUNC_11 (struct btrfs_root*,int) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_13 (struct inode*) ;
 struct inode* FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct dentry*,struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static int FUNC_22(struct dentry *VAR_5, struct inode *VAR_6,
        struct dentry *VAR_7)
{
 struct btrfs_trans_handle *VAR_8 = ((void*)0);
 struct btrfs_root *VAR_9 = FUNC_0(VAR_6)->root;
 struct inode *VAR_10 = FUNC_14(VAR_5);
 struct btrfs_fs_info *VAR_11 = FUNC_9(VAR_10->i_sb);
 u64 VAR_12;
 int VAR_13;
 int VAR_14 = 0;


 if (VAR_9->root_key.objectid != FUNC_0(VAR_10)->root->root_key.objectid)
  return -VAR_4;

 if (VAR_10->i_nlink >= VAR_1)
  return -VAR_3;

 VAR_13 = FUNC_10(FUNC_0(VAR_6), &VAR_12);
 if (VAR_13)
  goto fail;







 VAR_8 = FUNC_11(VAR_9, VAR_10->i_nlink ? 5 : 6);
 if (FUNC_1(VAR_8)) {
  VAR_13 = FUNC_2(VAR_8);
  VAR_8 = ((void*)0);
  goto fail;
 }


 FUNC_0(VAR_10)->dir_index = 0ULL;
 FUNC_17(VAR_10);
 FUNC_19(VAR_10);
 VAR_10->i_ctime = FUNC_13(VAR_10);
 FUNC_16(VAR_10);
 FUNC_21(VAR_0, &FUNC_0(VAR_10)->runtime_flags);

 VAR_13 = FUNC_3(VAR_8, FUNC_0(VAR_6), VAR_7, FUNC_0(VAR_10),
   1, VAR_12);

 if (VAR_13) {
  VAR_14 = 1;
 } else {
  struct dentry *VAR_15 = VAR_7->d_parent;
  int VAR_16;

  VAR_13 = FUNC_12(VAR_8, VAR_9, VAR_10);
  if (VAR_13)
   goto fail;
  if (VAR_10->i_nlink == 1) {




   VAR_13 = FUNC_8(VAR_8, FUNC_0(VAR_10));
   if (VAR_13)
    goto fail;
  }
  FUNC_15(VAR_7, VAR_10);
  VAR_16 = FUNC_7(VAR_8, FUNC_0(VAR_10), ((void*)0), VAR_15,
      1, ((void*)0));
  if (VAR_16 == VAR_2) {
   VAR_13 = FUNC_5(VAR_8);
   VAR_8 = ((void*)0);
  }
 }

fail:
 if (VAR_8)
  FUNC_6(VAR_8);
 if (VAR_14) {
  FUNC_18(VAR_10);
  FUNC_20(VAR_10);
 }
 FUNC_4(VAR_11);
 return VAR_13;
}
