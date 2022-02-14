
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vol_id; int ubi_num; } ;
struct ubifs_info {scalar_t__ max_inode_sz; struct inode* ubi; int umount_mutex; TYPE_1__ vi; struct super_block* vfs_sb; } ;
struct super_block {scalar_t__ s_maxbytes; int s_root; int s_xattr; int * s_op; int s_blocksize_bits; int s_blocksize; int s_magic; struct ubifs_info* s_fs_info; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct super_block*,int *) ;
 scalar_t__ FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct super_block*,char*,int ,int ) ;
 int FUNC_9 (struct inode*) ;
 struct inode* FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct ubifs_info*,int) ;
 int VAR_7 ;
 struct inode* FUNC_12 (struct super_block*,int ) ;
 int FUNC_13 (struct ubifs_info*,void*,int ) ;
 int VAR_8 ;
 int FUNC_14 (struct ubifs_info*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_10, void *VAR_11, int VAR_12)
{
 struct ubifs_info *VAR_13 = VAR_10->s_fs_info;
 struct inode *VAR_14;
 int VAR_15;

 VAR_13->vfs_sb = VAR_10;

 VAR_13->ubi = FUNC_10(VAR_13->vi.ubi_num, VAR_13->vi.vol_id, VAR_6);
 if (FUNC_0(VAR_13->ubi)) {
  VAR_15 = FUNC_1(VAR_13->ubi);
  goto out;
 }

 VAR_15 = FUNC_13(VAR_13, VAR_11, 0);
 if (VAR_15)
  goto out_close;
 VAR_15 = FUNC_8(VAR_10, "ubifs_%d_%d", VAR_13->vi.ubi_num,
       VAR_13->vi.vol_id);
 if (VAR_15)
  goto out_close;

 VAR_10->s_fs_info = VAR_13;
 VAR_10->s_magic = VAR_5;
 VAR_10->s_blocksize = VAR_3;
 VAR_10->s_blocksize_bits = VAR_2;
 VAR_10->s_maxbytes = VAR_13->max_inode_sz = FUNC_4(VAR_13);
 if (VAR_13->max_inode_sz > VAR_1)
  VAR_10->s_maxbytes = VAR_13->max_inode_sz = VAR_1;
 VAR_10->s_op = &VAR_8;



 FUNC_3(VAR_10, &VAR_7);

 FUNC_6(&VAR_13->umount_mutex);
 VAR_15 = FUNC_5(VAR_13);
 if (VAR_15) {
  FUNC_11(VAR_13, VAR_15 < 0);
  goto out_unlock;
 }


 VAR_14 = FUNC_12(VAR_10, VAR_4);
 if (FUNC_0(VAR_14)) {
  VAR_15 = FUNC_1(VAR_14);
  goto out_umount;
 }

 VAR_10->s_root = FUNC_2(VAR_14);
 if (!VAR_10->s_root) {
  VAR_15 = -VAR_0;
  goto out_umount;
 }

 FUNC_7(&VAR_13->umount_mutex);
 return 0;

out_umount:
 FUNC_14(VAR_13);
out_unlock:
 FUNC_7(&VAR_13->umount_mutex);
out_close:
 FUNC_9(VAR_13->ubi);
out:
 return VAR_15;
}
