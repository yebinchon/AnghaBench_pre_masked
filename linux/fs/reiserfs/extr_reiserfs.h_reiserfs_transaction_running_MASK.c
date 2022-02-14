
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {struct super_block* t_super; } ;
struct TYPE_2__ {struct reiserfs_transaction_handle* journal_info; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct super_block *VAR_1)
{
 struct reiserfs_transaction_handle *VAR_2 = VAR_0->journal_info;
 if (VAR_2 && VAR_2->t_super == VAR_1)
  return 1;
 if (VAR_2 && VAR_2->t_super == ((void*)0))
  FUNC_0();
 return 0;
}
