
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_time_gran; int s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; struct ramfs_fs_info* s_fs_info; } ;
struct TYPE_2__ {int mode; } ;
struct ramfs_fs_info {TYPE_1__ mount_opts; } ;
struct inode {int dummy; } ;
struct fs_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*,int *,int,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_7, struct fs_context *VAR_8)
{
 struct ramfs_fs_info *VAR_9 = VAR_7->s_fs_info;
 struct inode *VAR_10;

 VAR_7->s_maxbytes = VAR_1;
 VAR_7->s_blocksize = VAR_3;
 VAR_7->s_blocksize_bits = VAR_2;
 VAR_7->s_magic = VAR_4;
 VAR_7->s_op = &VAR_6;
 VAR_7->s_time_gran = 1;

 VAR_10 = FUNC_1(VAR_7, ((void*)0), VAR_5 | VAR_9->mount_opts.mode, 0);
 VAR_7->s_root = FUNC_0(VAR_10);
 if (!VAR_7->s_root)
  return -VAR_0;

 return 0;
}
