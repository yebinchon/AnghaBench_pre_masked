
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; int s_flags; int s_root; int s_iflags; int s_xattr; int * s_export_op; int * s_d_op; int * s_op; int s_magic; int s_maxbytes; } ;
struct inode {int dummy; } ;
struct btrfs_key {scalar_t__ offset; int type; int objectid; } ;
struct btrfs_fs_info {int fs_root; } ;
struct btrfs_fs_devices {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int FUNC_1 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct btrfs_fs_info*,char*) ;
 int VAR_10 ;
 struct inode* FUNC_3 (struct super_block*,struct btrfs_key*,int ,int *) ;
 struct btrfs_fs_info* FUNC_4 (struct super_block*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct btrfs_fs_info*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct super_block*,struct btrfs_fs_devices*,char*) ;
 int FUNC_9 (struct super_block*) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_13,
       struct btrfs_fs_devices *VAR_14,
       void *VAR_15)
{
 struct inode *VAR_16;
 struct btrfs_fs_info *VAR_17 = FUNC_4(VAR_13);
 struct btrfs_key VAR_18;
 int VAR_19;

 VAR_13->s_maxbytes = VAR_4;
 VAR_13->s_magic = VAR_2;
 VAR_13->s_op = &VAR_11;
 VAR_13->s_d_op = &VAR_9;
 VAR_13->s_export_op = &VAR_10;
 VAR_13->s_xattr = VAR_12;
 VAR_13->s_time_gran = 1;



 VAR_13->s_flags |= VAR_7;
 VAR_13->s_iflags |= VAR_6;

 VAR_19 = FUNC_9(VAR_13);
 if (VAR_19) {
  FUNC_2(VAR_17, "super_setup_bdi failed");
  return VAR_19;
 }

 VAR_19 = FUNC_8(VAR_13, VAR_14, (char *)VAR_15);
 if (VAR_19) {
  FUNC_2(VAR_17, "open_ctree failed");
  return VAR_19;
 }

 VAR_18.objectid = VAR_0;
 VAR_18.type = VAR_1;
 VAR_18.offset = 0;
 VAR_16 = FUNC_3(VAR_13, &VAR_18, VAR_17->fs_root, ((void*)0));
 if (FUNC_0(VAR_16)) {
  VAR_19 = FUNC_1(VAR_16);
  goto fail_close;
 }

 VAR_13->s_root = FUNC_7(VAR_16);
 if (!VAR_13->s_root) {
  VAR_19 = -VAR_3;
  goto fail_close;
 }

 FUNC_5(VAR_13);
 VAR_13->s_flags |= VAR_5;
 return 0;

fail_close:
 FUNC_6(VAR_17);
 return VAR_19;
}
