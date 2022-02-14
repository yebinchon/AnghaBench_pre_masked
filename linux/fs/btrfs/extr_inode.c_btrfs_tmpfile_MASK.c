
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int umode_t ;
typedef int u64 ;
struct inode {TYPE_1__* i_mapping; int * i_op; int * i_fop; int i_sb; } ;
struct dentry {int dummy; } ;
struct btrfs_trans_handle {TYPE_1__* i_mapping; int * i_op; int * i_fop; int i_sb; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_7__ {int * ops; } ;
struct TYPE_8__ {TYPE_2__ io_tree; struct btrfs_root* root; } ;
struct TYPE_6__ {int * a_ops; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct btrfs_root*,int *) ;
 int FUNC_6 (struct inode*,struct inode*,struct inode*,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 struct inode* FUNC_8 (struct inode*,struct btrfs_root*,struct inode*,int *,int ,int ,int ,int ,int *) ;
 int FUNC_9 (struct inode*,TYPE_3__*) ;
 struct btrfs_fs_info* FUNC_10 (int ) ;
 struct inode* FUNC_11 (struct btrfs_root*,int) ;
 int FUNC_12 (struct inode*,struct btrfs_root*,struct inode*) ;
 int FUNC_13 (struct dentry*,struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (struct inode*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_4, struct dentry *VAR_5, umode_t VAR_6)
{
 struct btrfs_fs_info *VAR_7 = FUNC_10(VAR_4->i_sb);
 struct btrfs_trans_handle *VAR_8;
 struct btrfs_root *VAR_9 = FUNC_0(VAR_4)->root;
 struct inode *VAR_10 = ((void*)0);
 u64 VAR_11;
 u64 VAR_12;
 int VAR_13 = 0;




 VAR_8 = FUNC_11(VAR_9, 5);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_13 = FUNC_5(VAR_9, &VAR_11);
 if (VAR_13)
  goto out;

 VAR_10 = FUNC_8(VAR_8, VAR_9, VAR_4, ((void*)0), 0,
   FUNC_7(FUNC_0(VAR_4)), VAR_11, VAR_6, &VAR_12);
 if (FUNC_1(VAR_10)) {
  VAR_13 = FUNC_2(VAR_10);
  VAR_10 = ((void*)0);
  goto out;
 }

 VAR_10->i_fop = &VAR_3;
 VAR_10->i_op = &VAR_2;

 VAR_10->i_mapping->a_ops = &VAR_0;
 FUNC_0(VAR_10)->io_tree.ops = &VAR_1;

 VAR_13 = FUNC_6(VAR_8, VAR_10, VAR_4, ((void*)0));
 if (VAR_13)
  goto out;

 VAR_13 = FUNC_12(VAR_8, VAR_9, VAR_10);
 if (VAR_13)
  goto out;
 VAR_13 = FUNC_9(VAR_8, FUNC_0(VAR_10));
 if (VAR_13)
  goto out;
 FUNC_16(VAR_10, 1);
 FUNC_13(VAR_5, VAR_10);
 FUNC_17(VAR_10);
 FUNC_15(VAR_10);
out:
 FUNC_4(VAR_8);
 if (VAR_13 && VAR_10)
  FUNC_14(VAR_10);
 FUNC_3(VAR_7);
 return VAR_13;
}
