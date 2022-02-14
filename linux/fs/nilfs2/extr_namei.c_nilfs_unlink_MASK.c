
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_transaction_info {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;


 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct nilfs_transaction_info*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct nilfs_transaction_info VAR_2;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_0->i_sb, &VAR_2, 0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_3) {
  FUNC_2(VAR_0);
  FUNC_2(FUNC_0(VAR_1));
  VAR_3 = FUNC_5(VAR_0->i_sb);
 } else
  FUNC_3(VAR_0->i_sb);

 return VAR_3;
}
