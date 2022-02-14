
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int t_super; int t_trans_id; } ;
struct inode {int dummy; } ;
typedef int b_blocknr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct inode*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct reiserfs_transaction_handle *VAR_0,
      struct inode *VAR_1, b_blocknr_t VAR_2)
{
 FUNC_0(!VAR_0->t_trans_id);
 FUNC_1(!VAR_0->t_super,
        "vs-4060: trying to free block on nonexistent device");
 if (!FUNC_3(VAR_0->t_super, VAR_2, 1))
  return;
 FUNC_2(VAR_0, VAR_1, VAR_2, 1);
}
