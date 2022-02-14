
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_blocksize_bits; int s_time_gran; int * s_root; int s_fs_info; int * s_d_op; int * s_op; int s_magic; int s_iflags; } ;
struct inode {int i_ino; int i_mode; int * i_fop; int * i_op; int i_ctime; int i_atime; int i_mtime; } ;
struct TYPE_2__ {int mount_opts; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct inode*) ;
 int * FUNC_2 (struct inode*) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct super_block*) ;
 struct inode* FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (void*,int ,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct inode*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_10(struct super_block *VAR_12, void *VAR_13, int VAR_14)
{
 struct inode *VAR_15;
 int VAR_16;

 VAR_12->s_iflags &= ~VAR_3;
 VAR_12->s_blocksize = 1024;
 VAR_12->s_blocksize_bits = 10;
 VAR_12->s_magic = VAR_0;
 VAR_12->s_op = &VAR_8;
 VAR_12->s_d_op = &VAR_9;
 VAR_12->s_time_gran = 1;

 VAR_16 = -VAR_1;
 VAR_12->s_fs_info = FUNC_6(VAR_12);
 if (!VAR_12->s_fs_info)
  goto fail;

 VAR_16 = FUNC_7(VAR_13, VAR_2, &FUNC_0(VAR_12)->mount_opts);
 if (VAR_16)
  goto fail;

 VAR_16 = -VAR_1;
 VAR_15 = FUNC_5(VAR_12);
 if (!VAR_15)
  goto fail;
 VAR_15->i_ino = 1;
 VAR_15->i_mtime = VAR_15->i_atime = VAR_15->i_ctime = FUNC_1(VAR_15);
 VAR_15->i_mode = VAR_4 | VAR_5 | VAR_7 | VAR_6;
 VAR_15->i_op = &VAR_10;
 VAR_15->i_fop = &VAR_11;
 FUNC_9(VAR_15, 2);

 VAR_12->s_root = FUNC_2(VAR_15);
 if (!VAR_12->s_root) {
  FUNC_8("get root dentry failed\n");
  goto fail;
 }

 VAR_16 = FUNC_4(VAR_12);
 if (VAR_16)
  goto fail_dput;

 return 0;
fail_dput:
 FUNC_3(VAR_12->s_root);
 VAR_12->s_root = ((void*)0);
fail:
 return VAR_16;
}
