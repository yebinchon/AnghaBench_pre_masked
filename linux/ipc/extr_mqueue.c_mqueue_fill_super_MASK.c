
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_iflags; int s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; struct ipc_namespace* s_fs_info; } ;
struct ipc_namespace {int dummy; } ;
struct inode {int dummy; } ;
struct fs_context {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,struct ipc_namespace*,int,int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_10, struct fs_context *VAR_11)
{
 struct inode *VAR_12;
 struct ipc_namespace *VAR_13 = VAR_10->s_fs_info;

 VAR_10->s_iflags |= VAR_5 | VAR_4;
 VAR_10->s_blocksize = VAR_3;
 VAR_10->s_blocksize_bits = VAR_2;
 VAR_10->s_magic = VAR_1;
 VAR_10->s_op = &VAR_9;

 VAR_12 = FUNC_3(VAR_10, VAR_13, VAR_6 | VAR_8 | VAR_7, ((void*)0));
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_10->s_root = FUNC_2(VAR_12);
 if (!VAR_10->s_root)
  return -VAR_0;
 return 0;
}
