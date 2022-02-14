
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; int s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; } ;
struct inode {int i_fop; int * i_op; } ;
struct fs_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*) ;
 int VAR_5 ;
 struct inode* FUNC_2 (struct super_block*,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_8, struct fs_context *VAR_9)
{
 struct inode *VAR_10;

 VAR_8->s_blocksize = VAR_3;
 VAR_8->s_blocksize_bits = VAR_2;
 VAR_8->s_magic = VAR_1;
 VAR_8->s_op = &VAR_6;
 VAR_8->s_time_gran = 1;

 VAR_10 = FUNC_2 (VAR_8, VAR_4 | 0500);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->i_op = &VAR_7;
 VAR_10->i_fop = VAR_5;

 VAR_8->s_root = FUNC_0(VAR_10);
 if (!VAR_8->s_root)
  return -VAR_0;

 FUNC_1(VAR_8);
 return 0;
}
