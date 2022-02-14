
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {scalar_t__ t_refcount; scalar_t__ t_trans_id; struct super_block* t_super; } ;
struct TYPE_2__ {int j_persistent_trans; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct reiserfs_transaction_handle*) ;
 int FUNC_2 (struct reiserfs_transaction_handle*) ;

int FUNC_3(struct reiserfs_transaction_handle *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->t_super;
 int VAR_3 = 0;
 if (VAR_1->t_trans_id)
  VAR_3 = FUNC_1(VAR_1);
 else
  VAR_3 = -VAR_0;
 if (VAR_1->t_refcount == 0) {
  FUNC_0(VAR_2)->j_persistent_trans--;
  FUNC_2(VAR_1);
 }
 return VAR_3;
}
