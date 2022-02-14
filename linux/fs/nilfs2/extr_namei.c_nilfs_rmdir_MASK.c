
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_transaction_info {int dummy; } ;
struct inode {int i_sb; scalar_t__ i_size; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct dentry*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct nilfs_transaction_info*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_0(VAR_2);
 struct nilfs_transaction_info VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(VAR_1->i_sb, &VAR_4, 0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = -VAR_0;
 if (FUNC_3(VAR_3)) {
  VAR_5 = FUNC_2(VAR_1, VAR_2);
  if (!VAR_5) {
   VAR_3->i_size = 0;
   FUNC_1(VAR_3);
   FUNC_4(VAR_3);
   FUNC_1(VAR_1);
   FUNC_4(VAR_1);
  }
 }
 if (!VAR_5)
  VAR_5 = FUNC_7(VAR_1->i_sb);
 else
  FUNC_5(VAR_1->i_sb);

 return VAR_5;
}
