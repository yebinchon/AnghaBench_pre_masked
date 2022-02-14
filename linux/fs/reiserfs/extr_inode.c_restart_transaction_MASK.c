
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int dummy; } ;
struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_refcount; int t_trans_id; struct super_block* t_super; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_2 (struct reiserfs_transaction_handle*) ;
 int FUNC_3 (struct treepath*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct inode*) ;

__attribute__((used)) static int FUNC_6(struct reiserfs_transaction_handle *VAR_1,
          struct inode *VAR_2, struct treepath *VAR_3)
{
 struct super_block *VAR_4 = VAR_1->t_super;
 int VAR_5;

 FUNC_0(!VAR_1->t_trans_id);
 FUNC_0(!VAR_1->t_refcount);

 FUNC_3(VAR_3);


 if (VAR_1->t_refcount > 1) {
  return 0;
 }
 FUNC_5(VAR_1, VAR_2);
 VAR_5 = FUNC_2(VAR_1);
 if (!VAR_5) {
  VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_0 * 6);
  if (!VAR_5)
   FUNC_4(VAR_2);
 }
 return VAR_5;
}
