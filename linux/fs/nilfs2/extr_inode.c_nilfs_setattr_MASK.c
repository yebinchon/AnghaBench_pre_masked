
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_transaction_info {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*,struct nilfs_transaction_info*,int ) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct iattr*) ;
 int FUNC_10 (struct dentry*,struct iattr*) ;
 int FUNC_11 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct dentry *VAR_2, struct iattr *VAR_3)
{
 struct nilfs_transaction_info VAR_4;
 struct inode *VAR_5 = FUNC_0(VAR_2);
 struct super_block *VAR_6 = VAR_5->i_sb;
 int VAR_7;

 VAR_7 = FUNC_10(VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_6, &VAR_4, 0);
 if (FUNC_12(VAR_7))
  return VAR_7;

 if ((VAR_3->ia_valid & VAR_1) &&
     VAR_3->ia_size != FUNC_1(VAR_5)) {
  FUNC_2(VAR_5);
  FUNC_11(VAR_5, VAR_3->ia_size);
  FUNC_8(VAR_5);
 }

 FUNC_9(VAR_5, VAR_3);
 FUNC_3(VAR_5);

 if (VAR_3->ia_valid & VAR_0) {
  VAR_7 = FUNC_4(VAR_5);
  if (FUNC_12(VAR_7))
   goto out_err;
 }

 return FUNC_7(VAR_6);

out_err:
 FUNC_5(VAR_6);
 return VAR_7;
}
