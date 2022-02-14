
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tid_t ;
struct page {int dummy; } ;
struct inode {int i_size; int i_mapping; int i_sb; } ;
struct TYPE_6__ {int j_state_lock; TYPE_1__* j_committing_transaction; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_7__ {TYPE_2__* s_journal; } ;
struct TYPE_5__ {scalar_t__ t_tid; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*,unsigned int,int) ;
 struct page* FUNC_2 (int ,int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_3)
{
 struct page *VAR_4;
 unsigned VAR_5;
 journal_t *VAR_6 = FUNC_0(VAR_3->i_sb)->s_journal;
 tid_t VAR_7 = 0;
 int VAR_8;

 VAR_5 = VAR_3->i_size & (VAR_2 - 1);





 if (VAR_5 > VAR_2 - FUNC_3(VAR_3))
  return;
 while (1) {
  VAR_4 = FUNC_2(VAR_3->i_mapping,
          VAR_3->i_size >> VAR_1);
  if (!VAR_4)
   return;
  VAR_8 = FUNC_1(VAR_4, VAR_5,
      VAR_2 - VAR_5);
  FUNC_8(VAR_4);
  FUNC_5(VAR_4);
  if (VAR_8 != -VAR_0)
   return;
  VAR_7 = 0;
  FUNC_6(&VAR_6->j_state_lock);
  if (VAR_6->j_committing_transaction)
   VAR_7 = VAR_6->j_committing_transaction->t_tid;
  FUNC_7(&VAR_6->j_state_lock);
  if (VAR_7)
   FUNC_4(VAR_6, VAR_7);
 }
}
