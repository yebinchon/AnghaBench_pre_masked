
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int umode_t ;
typedef int u64 ;
struct inode {int * i_fop; int * i_op; int i_sb; } ;
struct TYPE_8__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct btrfs_trans_handle {int * i_fop; int * i_op; int i_sb; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_7__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int FUNC_3 (struct inode*,TYPE_1__*,TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct btrfs_root*,int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (struct inode*,struct inode*,struct inode*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 struct inode* FUNC_10 (struct inode*,struct btrfs_root*,struct inode*,int ,int ,int ,int ,int,int *) ;
 struct btrfs_fs_info* FUNC_11 (int ) ;
 struct inode* FUNC_12 (struct btrfs_root*,int) ;
 int FUNC_13 (struct inode*,struct btrfs_root*,struct inode*) ;
 int FUNC_14 (struct dentry*,struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_3, struct dentry *VAR_4, umode_t VAR_5)
{
 struct btrfs_fs_info *VAR_6 = FUNC_11(VAR_3->i_sb);
 struct inode *VAR_7 = ((void*)0);
 struct btrfs_trans_handle *VAR_8;
 struct btrfs_root *VAR_9 = FUNC_0(VAR_3)->root;
 int VAR_10 = 0;
 u64 VAR_11 = 0;
 u64 VAR_12 = 0;






 VAR_8 = FUNC_12(VAR_9, 5);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_10 = FUNC_6(VAR_9, &VAR_11);
 if (VAR_10)
  goto out_fail;

 VAR_7 = FUNC_10(VAR_8, VAR_9, VAR_3, VAR_4->d_name.name,
   VAR_4->d_name.len, FUNC_9(FUNC_0(VAR_3)), VAR_11,
   VAR_0 | VAR_5, &VAR_12);
 if (FUNC_1(VAR_7)) {
  VAR_10 = FUNC_2(VAR_7);
  VAR_7 = ((void*)0);
  goto out_fail;
 }


 VAR_7->i_op = &VAR_2;
 VAR_7->i_fop = &VAR_1;

 VAR_10 = FUNC_8(VAR_8, VAR_7, VAR_3, &VAR_4->d_name);
 if (VAR_10)
  goto out_fail;

 FUNC_7(FUNC_0(VAR_7), 0);
 VAR_10 = FUNC_13(VAR_8, VAR_9, VAR_7);
 if (VAR_10)
  goto out_fail;

 VAR_10 = FUNC_3(VAR_8, FUNC_0(VAR_3), FUNC_0(VAR_7),
   VAR_4->d_name.name,
   VAR_4->d_name.len, 0, VAR_12);
 if (VAR_10)
  goto out_fail;

 FUNC_14(VAR_4, VAR_7);

out_fail:
 FUNC_5(VAR_8);
 if (VAR_10 && VAR_7) {
  FUNC_16(VAR_7);
  FUNC_15(VAR_7);
 }
 FUNC_4(VAR_6);
 return VAR_10;
}
