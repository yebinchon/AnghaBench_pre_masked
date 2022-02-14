
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_refcount; struct reiserfs_transaction_handle* t_handle_save; } ;
struct TYPE_2__ {struct reiserfs_transaction_handle* journal_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct reiserfs_transaction_handle*,struct super_block*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct reiserfs_transaction_handle *VAR_2,
   struct super_block *VAR_3)
{
 struct reiserfs_transaction_handle *VAR_4 = VAR_1->journal_info;





 VAR_2->t_handle_save = VAR_4;
 FUNC_0(VAR_4 && VAR_4->t_refcount > 1);
 return FUNC_1(VAR_2, VAR_3, 1, VAR_0);
}
