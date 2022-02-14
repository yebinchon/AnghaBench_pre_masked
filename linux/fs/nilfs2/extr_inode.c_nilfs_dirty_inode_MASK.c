
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_transaction_info {int dummy; } ;
struct nilfs_mdt_info {int dummy; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 struct nilfs_mdt_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ,struct nilfs_transaction_info*,int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct inode *VAR_1, int VAR_2)
{
 struct nilfs_transaction_info VAR_3;
 struct nilfs_mdt_info *VAR_4 = FUNC_0(VAR_1);

 if (FUNC_3(VAR_1)) {
  FUNC_5(VAR_1->i_sb, VAR_0,
     "tried to mark bad_inode dirty. ignored.");
  FUNC_2();
  return;
 }
 if (VAR_4) {
  FUNC_4(VAR_1);
  return;
 }
 FUNC_6(VAR_1->i_sb, &VAR_3, 0);
 FUNC_1(VAR_1, VAR_2);
 FUNC_7(VAR_1->i_sb);
}
