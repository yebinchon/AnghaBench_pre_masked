
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned int s_blocksize; unsigned int s_blocksize_bits; } ;
struct nilfs_transaction_info {int dummy; } ;
struct nilfs_inode_info {int i_state; } ;
struct inode {unsigned int i_size; int i_ctime; int i_mtime; int i_mapping; struct super_block* i_sb; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct nilfs_inode_info* FUNC_3 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,unsigned int,int ) ;
 int FUNC_5 (struct inode*) ;
 int VAR_2 ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct super_block*,struct nilfs_transaction_info*,int ) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct nilfs_inode_info*,unsigned long) ;
 int FUNC_12 (int ,int *) ;

void FUNC_13(struct inode *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;
 struct nilfs_transaction_info VAR_6;
 struct super_block *VAR_7 = VAR_3->i_sb;
 struct nilfs_inode_info *VAR_8 = FUNC_3(VAR_3);

 if (!FUNC_12(VAR_0, &VAR_8->i_state))
  return;
 if (FUNC_0(VAR_3) || FUNC_1(VAR_3))
  return;

 VAR_5 = VAR_7->s_blocksize;
 VAR_4 = (VAR_3->i_size + VAR_5 - 1) >> VAR_7->s_blocksize_bits;
 FUNC_9(VAR_7, &VAR_6, 0);

 FUNC_4(VAR_3->i_mapping, VAR_3->i_size, VAR_2);

 FUNC_11(VAR_8, VAR_4);

 VAR_3->i_mtime = VAR_3->i_ctime = FUNC_5(VAR_3);
 if (FUNC_2(VAR_3))
  FUNC_8(VAR_1);

 FUNC_6(VAR_3);
 FUNC_7(VAR_3, 0);
 FUNC_10(VAR_7);




}
