
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int s_quota_types; int s_time_gran; scalar_t__ s_blocksize; int s_maxbytes; int s_root; int * s_d_op; int s_magic; TYPE_1__* s_bdev; int * s_qcop; int * dq_op; int s_xattr; int * s_export_op; int * s_op; int s_flags; int s_time_max; scalar_t__ s_time_min; int s_max_links; struct jfs_sb_info* s_fs_info; } ;
struct jfs_sb_info {int umask; int flag; int mntflag; int nls_tab; struct inode* direct_inode; int * log; int gid; int uid; struct super_block* sb; } ;
struct inode {TYPE_2__* i_mapping; int i_size; scalar_t__ i_ino; } ;
typedef scalar_t__ s64 ;
typedef int loff_t ;
struct TYPE_6__ {int * a_ops; } ;
struct TYPE_5__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct inode*) ;
 int VAR_17 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int VAR_18 ;
 int FUNC_7 (char*,...) ;
 int VAR_19 ;
 struct inode* FUNC_8 (struct super_block*,int ) ;
 int FUNC_9 (char*,int ) ;
 int VAR_20 ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct super_block*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_12 (struct super_block*) ;
 int VAR_23 ;
 int FUNC_13 (struct jfs_sb_info*) ;
 struct jfs_sb_info* FUNC_14 (int,int ) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (int,int ) ;
 struct inode* FUNC_18 (struct super_block*) ;
 int FUNC_19 (char*,struct super_block*,scalar_t__*,int*) ;
 int FUNC_20 (char*) ;
 scalar_t__ FUNC_21 (struct super_block*) ;
 int FUNC_22 (struct super_block*,int ) ;
 int FUNC_23 (TYPE_2__*,int ) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static int FUNC_25(struct super_block *VAR_24, void *VAR_25, int VAR_26)
{
 struct jfs_sb_info *VAR_27;
 struct inode *VAR_28;
 int VAR_29;
 s64 VAR_30 = 0;
 int VAR_31, VAR_32 = -VAR_0;

 FUNC_9("In jfs_read_super: s_flags=0x%lx", VAR_24->s_flags);

 VAR_27 = FUNC_14(sizeof(struct jfs_sb_info), VAR_2);
 if (!VAR_27)
  return -VAR_1;

 VAR_24->s_fs_info = VAR_27;
 VAR_24->s_max_links = VAR_7;
 VAR_24->s_time_min = 0;
 VAR_24->s_time_max = VAR_16;
 VAR_27->sb = VAR_24;
 VAR_27->uid = VAR_5;
 VAR_27->gid = VAR_4;
 VAR_27->umask = -1;


 VAR_31 = VAR_6;

 if (!FUNC_19((char *) VAR_25, VAR_24, &VAR_30, &VAR_31))
  goto out_kfree;
 VAR_27->flag = VAR_31;





 if (VAR_30) {
  FUNC_20("resize option for remount only\n");
  goto out_kfree;
 }




 FUNC_22(VAR_24, VAR_11);




 VAR_24->s_op = &VAR_22;
 VAR_24->s_export_op = &VAR_19;
 VAR_24->s_xattr = VAR_23;
 VAR_28 = FUNC_18(VAR_24);
 if (VAR_28 == ((void*)0)) {
  VAR_32 = -VAR_1;
  goto out_unload;
 }
 VAR_28->i_ino = 0;
 VAR_28->i_size = FUNC_4(VAR_24->s_bdev->bd_inode);
 VAR_28->i_mapping->a_ops = &VAR_20;
 FUNC_5(VAR_28);
 FUNC_16(VAR_28->i_mapping, VAR_3);

 VAR_27->direct_inode = VAR_28;

 VAR_29 = FUNC_10(VAR_24);
 if (VAR_29) {
  if (!VAR_26)
   FUNC_7("jfs_mount failed w/return code = %d", VAR_29);
  goto out_mount_failed;
 }
 if (FUNC_21(VAR_24))
  VAR_27->log = ((void*)0);
 else {
  VAR_29 = FUNC_11(VAR_24, 0);
  if (VAR_29) {
   if (!VAR_26) {
    FUNC_7("jfs_mount_rw failed, return code = %d",
     VAR_29);
   }
   goto out_no_rw;
  }
 }

 VAR_24->s_magic = VAR_9;

 if (VAR_27->mntflag & VAR_8)
  VAR_24->s_d_op = &VAR_18;

 VAR_28 = FUNC_8(VAR_24, VAR_14);
 if (FUNC_0(VAR_28)) {
  VAR_32 = FUNC_1(VAR_28);
  goto out_no_rw;
 }
 VAR_24->s_root = FUNC_2(VAR_28);
 if (!VAR_24->s_root)
  goto out_no_root;




 VAR_24->s_maxbytes = FUNC_17(((loff_t)VAR_24->s_blocksize) << 40, VAR_10);
 VAR_24->s_time_gran = 1;
 return 0;

out_no_root:
 FUNC_7("jfs_read_super: get root dentry failed");

out_no_rw:
 VAR_29 = FUNC_12(VAR_24);
 if (VAR_29)
  FUNC_7("jfs_umount failed with return code %d", VAR_29);
out_mount_failed:
 FUNC_3(VAR_27->direct_inode->i_mapping);
 FUNC_23(VAR_27->direct_inode->i_mapping, 0);
 FUNC_15(VAR_27->direct_inode);
 FUNC_6(VAR_27->direct_inode);
 VAR_27->direct_inode = ((void*)0);
out_unload:
 FUNC_24(VAR_27->nls_tab);
out_kfree:
 FUNC_13(VAR_27);
 return VAR_32;
}
