
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct nilfs_transaction_info {int dummy; } ;
struct inode {int i_sb; int i_mode; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ,int ) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct nilfs_transaction_info*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_0, struct dentry *VAR_1, umode_t VAR_2, dev_t VAR_3)
{
 struct inode *VAR_4;
 struct nilfs_transaction_info VAR_5;
 int VAR_6;

 VAR_6 = FUNC_7(VAR_0->i_sb, &VAR_5, 1);
 if (VAR_6)
  return VAR_6;
 VAR_4 = FUNC_5(VAR_0, VAR_2);
 VAR_6 = FUNC_1(VAR_4);
 if (!FUNC_0(VAR_4)) {
  FUNC_2(VAR_4, VAR_4->i_mode, VAR_3);
  FUNC_4(VAR_4);
  VAR_6 = FUNC_3(VAR_1, VAR_4);
 }
 if (!VAR_6)
  VAR_6 = FUNC_8(VAR_0->i_sb);
 else
  FUNC_6(VAR_0->i_sb);

 return VAR_6;
}
