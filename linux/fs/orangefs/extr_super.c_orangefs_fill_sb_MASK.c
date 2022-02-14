
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct dentry* s_root; int * s_export_op; int s_maxbytes; int s_blocksize_bits; int s_blocksize; int * s_d_op; int * s_op; int s_magic; int s_xattr; } ;
struct inode {int i_mode; } ;
struct orangefs_object_kref {int fs_id; struct inode khandle; } ;
struct orangefs_fs_mount_response {int id; int fs_id; struct inode root_khandle; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int fs_id; struct inode root_khandle; int id; struct super_block* sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct inode*) ;
 struct dentry* FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,char*,struct inode*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct inode* FUNC_5 (struct super_block*,struct orangefs_object_kref*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct super_block*,void*,int) ;
 int FUNC_7 (struct super_block*) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_10,
  struct orangefs_fs_mount_response *VAR_11,
  void *VAR_12, int VAR_13)
{
 int VAR_14;
 struct inode *VAR_15;
 struct dentry *VAR_16;
 struct orangefs_object_kref VAR_17;

 FUNC_1(VAR_10)->sb = VAR_10;

 FUNC_1(VAR_10)->root_khandle = VAR_11->root_khandle;
 FUNC_1(VAR_10)->fs_id = VAR_11->fs_id;
 FUNC_1(VAR_10)->id = VAR_11->id;

 if (VAR_12) {
  VAR_14 = FUNC_6(VAR_10, VAR_12, VAR_13);
  if (VAR_14)
   return VAR_14;
 }


 VAR_10->s_xattr = VAR_9;
 VAR_10->s_magic = VAR_3;
 VAR_10->s_op = &VAR_8;
 VAR_10->s_d_op = &VAR_6;

 VAR_10->s_blocksize = VAR_5;
 VAR_10->s_blocksize_bits = VAR_4;
 VAR_10->s_maxbytes = VAR_2;

 VAR_14 = FUNC_7(VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_17.khandle = FUNC_1(VAR_10)->root_khandle;
 VAR_17.fs_id = FUNC_1(VAR_10)->fs_id;
 FUNC_4(VAR_1,
       "get inode %pU, fsid %d\n",
       &VAR_17.khandle,
       VAR_17.fs_id);

 VAR_15 = FUNC_5(VAR_10, &VAR_17);
 if (FUNC_0(VAR_15))
  return FUNC_2(VAR_15);

 FUNC_4(VAR_1,
       "Allocated root inode [%p] with mode %x\n",
       VAR_15,
       VAR_15->i_mode);


 VAR_16 = FUNC_3(VAR_15);
 if (!VAR_16)
  return -VAR_0;

 VAR_10->s_export_op = &VAR_7;
 VAR_10->s_root = VAR_16;
 return 0;
}
