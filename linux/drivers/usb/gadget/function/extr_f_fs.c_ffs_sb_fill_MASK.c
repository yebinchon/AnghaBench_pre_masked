
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_time_gran; int s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; struct ffs_data* s_fs_info; } ;
struct inode {int dummy; } ;
struct fs_context {struct ffs_sb_fill_data* fs_private; } ;
struct TYPE_2__ {int mode; } ;
struct ffs_sb_fill_data {TYPE_1__ perms; int root_mode; struct ffs_data* ffs_data; } ;
struct ffs_data {struct super_block* sb; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int FUNC_2 (struct super_block*,char*,struct ffs_data*,int *) ;
 struct inode* FUNC_3 (struct super_block*,int *,int *,int *,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_8, struct fs_context *VAR_9)
{
 struct ffs_sb_fill_data *VAR_10 = VAR_9->fs_private;
 struct inode *VAR_11;
 struct ffs_data *VAR_12 = VAR_10->ffs_data;

 FUNC_0();

 VAR_12->sb = VAR_8;
 VAR_10->ffs_data = ((void*)0);
 VAR_8->s_fs_info = VAR_12;
 VAR_8->s_blocksize = VAR_3;
 VAR_8->s_blocksize_bits = VAR_2;
 VAR_8->s_magic = VAR_1;
 VAR_8->s_op = &VAR_5;
 VAR_8->s_time_gran = 1;


 VAR_10->perms.mode = VAR_10->root_mode;
 VAR_11 = FUNC_3(VAR_8, ((void*)0),
      &VAR_7,
      &VAR_6,
      &VAR_10->perms);
 VAR_8->s_root = FUNC_1(VAR_11);
 if (FUNC_4(!VAR_8->s_root))
  return -VAR_0;


 if (FUNC_4(!FUNC_2(VAR_8, "ep0", VAR_12,
      &VAR_4)))
  return -VAR_0;

 return 0;
}
