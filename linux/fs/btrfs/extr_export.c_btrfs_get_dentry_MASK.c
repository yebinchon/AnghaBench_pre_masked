
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;
struct dentry {int dummy; } ;
struct btrfs_root {scalar_t__ i_generation; } ;
struct btrfs_key {scalar_t__ offset; int type; scalar_t__ objectid; } ;
struct btrfs_fs_info {int subvol_srcu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,struct btrfs_key*,struct inode*,int *) ;
 struct inode* FUNC_4 (struct btrfs_fs_info*,struct btrfs_key*) ;
 struct btrfs_fs_info* FUNC_5 (struct super_block*) ;
 struct dentry* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static struct dentry *FUNC_10(struct super_block *VAR_4, u64 VAR_5,
           u64 VAR_6, u32 VAR_7,
           int VAR_8)
{
 struct btrfs_fs_info *VAR_9 = FUNC_5(VAR_4);
 struct btrfs_root *VAR_10;
 struct inode *VAR_11;
 struct btrfs_key VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 if (VAR_5 < VAR_0)
  return FUNC_0(-VAR_3);

 VAR_12.objectid = VAR_6;
 VAR_12.type = VAR_2;
 VAR_12.offset = (u64)-1;

 VAR_13 = FUNC_8(&VAR_9->subvol_srcu);

 VAR_10 = FUNC_4(VAR_9, &VAR_12);
 if (FUNC_1(VAR_10)) {
  VAR_14 = FUNC_2(VAR_10);
  goto fail;
 }

 VAR_12.objectid = VAR_5;
 VAR_12.type = VAR_1;
 VAR_12.offset = 0;

 VAR_11 = FUNC_3(VAR_4, &VAR_12, VAR_10, ((void*)0));
 if (FUNC_1(VAR_11)) {
  VAR_14 = FUNC_2(VAR_11);
  goto fail;
 }

 FUNC_9(&VAR_9->subvol_srcu, VAR_13);

 if (VAR_8 && VAR_7 != VAR_11->i_generation) {
  FUNC_7(VAR_11);
  return FUNC_0(-VAR_3);
 }

 return FUNC_6(VAR_11);
fail:
 FUNC_9(&VAR_9->subvol_srcu, VAR_13);
 return FUNC_0(VAR_14);
}
