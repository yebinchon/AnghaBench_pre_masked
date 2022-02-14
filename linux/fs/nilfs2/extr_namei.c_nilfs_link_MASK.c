
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_transaction_info {int dummy; } ;
struct inode {int i_sb; int i_ctime; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct nilfs_transaction_info*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_0, struct inode *VAR_1,
        struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_0);
 struct nilfs_transaction_info VAR_4;
 int VAR_5;

 VAR_5 = FUNC_9(VAR_1->i_sb, &VAR_4, 1);
 if (VAR_5)
  return VAR_5;

 VAR_3->i_ctime = FUNC_0(VAR_3);
 FUNC_5(VAR_3);
 FUNC_3(VAR_3);

 VAR_5 = FUNC_7(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_2(VAR_2, VAR_3);
  VAR_5 = FUNC_10(VAR_1->i_sb);
 } else {
  FUNC_4(VAR_3);
  FUNC_6(VAR_3);
  FUNC_8(VAR_1->i_sb);
 }

 return VAR_5;
}
