
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_refcount; scalar_t__ t_trans_id; struct super_block* t_super; } ;
struct TYPE_2__ {struct reiserfs_transaction_handle* journal_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_3 (struct reiserfs_transaction_handle*,struct reiserfs_transaction_handle*,int) ;
 int FUNC_4 (struct super_block*,char*,char*,int) ;

int FUNC_5(struct reiserfs_transaction_handle *VAR_2)
{
 struct super_block *VAR_3 = VAR_2->t_super;
 if (!VAR_1->journal_info && VAR_2->t_refcount > 1)
  FUNC_4(VAR_3, "REISER-NESTING",
     "th NULL, refcount %d", VAR_2->t_refcount);

 if (!VAR_2->t_trans_id) {
  FUNC_1(1);
  return -VAR_0;
 }

 VAR_2->t_refcount--;
 if (VAR_2->t_refcount > 0) {
  struct reiserfs_transaction_handle *VAR_4 =
      VAR_1->journal_info;





  FUNC_0(VAR_4->t_super != VAR_2->t_super);

  if (VAR_2 != VAR_4) {
   FUNC_3(VAR_1->journal_info, VAR_2, sizeof(*VAR_2));
   VAR_2->t_trans_id = 0;
  }
  return 0;
 } else {
  return FUNC_2(VAR_2, 0);
 }
}
