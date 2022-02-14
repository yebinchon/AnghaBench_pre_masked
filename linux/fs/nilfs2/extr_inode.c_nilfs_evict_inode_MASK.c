
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nilfs_transaction_info {int dummy; } ;
struct nilfs_inode_info {TYPE_1__* i_root; } ;
struct inode {int i_ino; int i_data; scalar_t__ i_nlink; struct super_block* i_sb; } ;
struct TYPE_2__ {int inodes_count; int ifile; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 struct nilfs_inode_info* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct super_block*,struct nilfs_transaction_info*,int ) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct nilfs_inode_info*,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;

void FUNC_14(struct inode *VAR_1)
{
 struct nilfs_transaction_info VAR_2;
 struct super_block *VAR_3 = VAR_1->i_sb;
 struct nilfs_inode_info *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 if (VAR_1->i_nlink || !VAR_4->i_root || FUNC_13(FUNC_4(VAR_1))) {
  FUNC_12(&VAR_1->i_data);
  FUNC_3(VAR_1);
  FUNC_5(VAR_1);
  return;
 }
 FUNC_9(VAR_3, &VAR_2, 0);

 FUNC_12(&VAR_1->i_data);


 FUNC_11(VAR_4, 0);
 FUNC_7(VAR_1);
 FUNC_3(VAR_1);

 VAR_5 = FUNC_6(VAR_4->i_root->ifile, VAR_1->i_ino);
 if (!VAR_5)
  FUNC_2(&VAR_4->i_root->inodes_count);

 FUNC_5(VAR_1);

 if (FUNC_0(VAR_1))
  FUNC_8(VAR_0);
 FUNC_10(VAR_3);




}
