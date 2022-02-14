
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; int s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; } ;
struct inode {int i_mode; int * i_fop; int * i_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (void*) ;
 int VAR_6 ;
 struct inode* FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 struct super_block* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_10, void *VAR_11, int VAR_12)
{
 struct inode *VAR_13;

 VAR_8 = VAR_10;

 VAR_10->s_maxbytes = VAR_1;
 VAR_10->s_blocksize = VAR_3;
 VAR_10->s_blocksize_bits = VAR_2;
 VAR_10->s_magic = VAR_4;
 VAR_10->s_op = &VAR_7;
 VAR_10->s_time_gran = 1;

 FUNC_2(VAR_11);

 VAR_13 = FUNC_3(VAR_10);
 if (VAR_13) {
  VAR_13->i_mode = VAR_5 | 0750;
  VAR_13->i_op = &VAR_6;
  VAR_13->i_fop = &VAR_9;
  FUNC_1(VAR_13);
 }
 VAR_10->s_root = FUNC_0(VAR_13);
 if (!VAR_10->s_root)
  return -VAR_0;

 FUNC_4(0);

 return 0;
}
