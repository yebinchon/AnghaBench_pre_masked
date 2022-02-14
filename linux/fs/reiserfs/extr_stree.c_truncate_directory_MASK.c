
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int t_trans_id; } ;
struct inode {int i_sb; scalar_t__ i_nlink; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct inode*,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct reiserfs_transaction_handle *VAR_5,
          struct inode *VAR_6)
{
 FUNC_0(!VAR_5->t_trans_id);
 if (VAR_6->i_nlink)
  FUNC_3(VAR_6->i_sb, "vs-5655", "link count != 0");

 FUNC_5(VAR_1, FUNC_1(VAR_6), VAR_0);
 FUNC_6(VAR_1, FUNC_1(VAR_6), VAR_3);
 FUNC_2(VAR_5, VAR_6, FUNC_1(VAR_6));
 FUNC_4(VAR_5, VAR_6);
 FUNC_5(VAR_1, FUNC_1(VAR_6), VAR_2);
 FUNC_6(VAR_1, FUNC_1(VAR_6), VAR_4);
}
