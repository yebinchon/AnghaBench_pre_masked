
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; int s_d_op; int s_root; int s_xattr; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; } ;
struct pseudo_fs_context {int dops; int xattr; scalar_t__ ops; int magic; } ;
struct inode {int i_ino; int i_mode; int i_ctime; int i_mtime; int i_atime; } ;
struct fs_context {struct pseudo_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct super_block*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_8, struct fs_context *VAR_9)
{
 struct pseudo_fs_context *VAR_10 = VAR_9->fs_private;
 struct inode *VAR_11;

 VAR_8->s_maxbytes = VAR_1;
 VAR_8->s_blocksize = VAR_3;
 VAR_8->s_blocksize_bits = VAR_2;
 VAR_8->s_magic = VAR_10->magic;
 VAR_8->s_op = VAR_10->ops ?: &VAR_7;
 VAR_8->s_xattr = VAR_10->xattr;
 VAR_8->s_time_gran = 1;
 VAR_11 = FUNC_2(VAR_8);
 if (!VAR_11)
  return -VAR_0;






 VAR_11->i_ino = 1;
 VAR_11->i_mode = VAR_4 | VAR_5 | VAR_6;
 VAR_11->i_atime = VAR_11->i_mtime = VAR_11->i_ctime = FUNC_0(VAR_11);
 VAR_8->s_root = FUNC_1(VAR_11);
 if (!VAR_8->s_root)
  return -VAR_0;
 VAR_8->s_d_op = VAR_10->dops;
 return 0;
}
