
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int umode_t ;
typedef int u64 ;
struct inode {TYPE_1__* i_mapping; int * i_op; int * i_fop; int i_sb; } ;
struct TYPE_11__ {int len; int name; } ;
struct dentry {TYPE_4__ d_name; } ;
struct btrfs_trans_handle {TYPE_1__* i_mapping; int * i_op; int * i_fop; int i_sb; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_9__ {int * ops; } ;
struct TYPE_10__ {TYPE_2__ io_tree; struct btrfs_root* root; } ;
struct TYPE_8__ {int * a_ops; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,TYPE_3__*,struct dentry*,TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct btrfs_root*,int *) ;
 int FUNC_7 (struct inode*,struct inode*,struct inode*,TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*) ;
 struct inode* FUNC_9 (struct inode*,struct btrfs_root*,struct inode*,int ,int ,int ,int ,int ,int *) ;
 struct btrfs_fs_info* FUNC_10 (int ) ;
 struct inode* FUNC_11 (struct btrfs_root*,int) ;
 int FUNC_12 (struct inode*,struct btrfs_root*,struct inode*) ;
 int FUNC_13 (struct dentry*,struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_4, struct dentry *VAR_5,
   umode_t VAR_6, bool VAR_7)
{
 struct btrfs_fs_info *VAR_8 = FUNC_10(VAR_4->i_sb);
 struct btrfs_trans_handle *VAR_9;
 struct btrfs_root *VAR_10 = FUNC_0(VAR_4)->root;
 struct inode *VAR_11 = ((void*)0);
 int VAR_12;
 u64 VAR_13;
 u64 VAR_14 = 0;






 VAR_9 = FUNC_11(VAR_10, 5);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 VAR_12 = FUNC_6(VAR_10, &VAR_13);
 if (VAR_12)
  goto out_unlock;

 VAR_11 = FUNC_9(VAR_9, VAR_10, VAR_4, VAR_5->d_name.name,
   VAR_5->d_name.len, FUNC_8(FUNC_0(VAR_4)), VAR_13,
   VAR_6, &VAR_14);
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  VAR_11 = ((void*)0);
  goto out_unlock;
 }






 VAR_11->i_fop = &VAR_3;
 VAR_11->i_op = &VAR_2;
 VAR_11->i_mapping->a_ops = &VAR_0;

 VAR_12 = FUNC_7(VAR_9, VAR_11, VAR_4, &VAR_5->d_name);
 if (VAR_12)
  goto out_unlock;

 VAR_12 = FUNC_12(VAR_9, VAR_10, VAR_11);
 if (VAR_12)
  goto out_unlock;

 VAR_12 = FUNC_3(VAR_9, FUNC_0(VAR_4), VAR_5, FUNC_0(VAR_11),
   0, VAR_14);
 if (VAR_12)
  goto out_unlock;

 FUNC_0(VAR_11)->io_tree.ops = &VAR_1;
 FUNC_13(VAR_5, VAR_11);

out_unlock:
 FUNC_5(VAR_9);
 if (VAR_12 && VAR_11) {
  FUNC_15(VAR_11);
  FUNC_14(VAR_11);
 }
 FUNC_4(VAR_8);
 return VAR_12;
}
