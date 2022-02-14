
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int umode_t ;
typedef int u64 ;
struct inode {int i_mode; int * i_op; int i_sb; } ;
struct TYPE_7__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct btrfs_trans_handle {int i_mode; int * i_op; int i_sb; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
typedef int dev_t ;
struct TYPE_6__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,TYPE_1__*,struct dentry*,TYPE_1__*,int ,int ) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct btrfs_root*,int *) ;
 int FUNC_7 (struct inode*,struct inode*,struct inode*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 struct inode* FUNC_9 (struct inode*,struct btrfs_root*,struct inode*,int ,int ,int ,int ,int ,int *) ;
 struct btrfs_fs_info* FUNC_10 (int ) ;
 int VAR_0 ;
 struct inode* FUNC_11 (struct btrfs_root*,int) ;
 int FUNC_12 (struct inode*,struct btrfs_root*,struct inode*) ;
 int FUNC_13 (struct dentry*,struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,int ,int ) ;
 int FUNC_16 (struct inode*) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_1, struct dentry *VAR_2,
   umode_t VAR_3, dev_t VAR_4)
{
 struct btrfs_fs_info *VAR_5 = FUNC_10(VAR_1->i_sb);
 struct btrfs_trans_handle *VAR_6;
 struct btrfs_root *VAR_7 = FUNC_0(VAR_1)->root;
 struct inode *VAR_8 = ((void*)0);
 int VAR_9;
 u64 VAR_10;
 u64 VAR_11 = 0;






 VAR_6 = FUNC_11(VAR_7, 5);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_9 = FUNC_6(VAR_7, &VAR_10);
 if (VAR_9)
  goto out_unlock;

 VAR_8 = FUNC_9(VAR_6, VAR_7, VAR_1, VAR_2->d_name.name,
   VAR_2->d_name.len, FUNC_8(FUNC_0(VAR_1)), VAR_10,
   VAR_3, &VAR_11);
 if (FUNC_1(VAR_8)) {
  VAR_9 = FUNC_2(VAR_8);
  VAR_8 = ((void*)0);
  goto out_unlock;
 }







 VAR_8->i_op = &VAR_0;
 FUNC_15(VAR_8, VAR_8->i_mode, VAR_4);

 VAR_9 = FUNC_7(VAR_6, VAR_8, VAR_1, &VAR_2->d_name);
 if (VAR_9)
  goto out_unlock;

 VAR_9 = FUNC_3(VAR_6, FUNC_0(VAR_1), VAR_2, FUNC_0(VAR_8),
   0, VAR_11);
 if (VAR_9)
  goto out_unlock;

 FUNC_12(VAR_6, VAR_7, VAR_8);
 FUNC_13(VAR_2, VAR_8);

out_unlock:
 FUNC_5(VAR_6);
 FUNC_4(VAR_5);
 if (VAR_9 && VAR_8) {
  FUNC_16(VAR_8);
  FUNC_14(VAR_8);
 }
 return VAR_9;
}
