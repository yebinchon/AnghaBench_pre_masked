
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; struct dentry* s_root; int * s_d_op; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; } ;
struct inode {int * i_op; } ;
struct fs_context {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int *,int *) ;
 struct dentry* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,void*,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct inode* FUNC_4 (struct super_block*,int *,int,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_12, struct fs_context *VAR_13)
{
 struct inode *VAR_14 = ((void*)0);
 struct dentry *VAR_15;
 int VAR_16;

 VAR_12->s_maxbytes = VAR_2;
 VAR_12->s_blocksize = VAR_4;
 VAR_12->s_blocksize_bits = VAR_3;
 VAR_12->s_magic = VAR_0;
 VAR_12->s_op = &VAR_11;
 VAR_12->s_d_op = &VAR_7;
 VAR_12->s_time_gran = 1;

 VAR_14 = FUNC_4(VAR_12, ((void*)0), VAR_5 | 0755, 0, 1);
 if (!VAR_14)
  return -VAR_1;
 VAR_14->i_op = &VAR_9;

 VAR_15 = FUNC_2(VAR_14);
 VAR_12->s_root = VAR_15;
 if (!VAR_15)
  return -VAR_1;

 FUNC_0(&VAR_10);

 VAR_16 = FUNC_3(VAR_6, (void *)VAR_12, 1, &VAR_10);
 if (VAR_16)
  FUNC_1(VAR_8, &VAR_10, ((void*)0), ((void*)0));

 return VAR_16;
}
