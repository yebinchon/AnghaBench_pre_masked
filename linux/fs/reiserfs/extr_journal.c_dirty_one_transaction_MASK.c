
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_list {struct reiserfs_journal_cnode* j_realblock; int j_state; } ;
struct reiserfs_journal_cnode {struct reiserfs_journal_cnode* next; scalar_t__ bh; scalar_t__ blocknr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct reiserfs_journal_cnode*) ;
 int FUNC_4 (scalar_t__) ;
 struct reiserfs_journal_list* FUNC_5 (struct reiserfs_journal_cnode*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_1,
     struct reiserfs_journal_list *VAR_2)
{
 struct reiserfs_journal_cnode *VAR_3;
 struct reiserfs_journal_list *VAR_4;

 VAR_2->j_state |= VAR_0;
 VAR_3 = VAR_2->j_realblock;
 while (VAR_3) {





  VAR_4 = FUNC_5(VAR_3);
  if (!VAR_4 && VAR_3->blocknr && VAR_3->bh
      && FUNC_1(VAR_3->bh)) {
   FUNC_0(!FUNC_3(VAR_3));





   FUNC_4(VAR_3->bh);
   if (FUNC_2(VAR_3->bh)) {
    FUNC_7(VAR_3->bh);
   } else {
    FUNC_8(VAR_3->bh);
    FUNC_6(VAR_3->bh);
   }
  }
  VAR_3 = VAR_3->next;
 }
}
