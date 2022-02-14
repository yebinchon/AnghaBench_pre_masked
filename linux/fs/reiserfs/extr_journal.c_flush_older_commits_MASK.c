
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct list_head {struct list_head* next; struct list_head* prev; } ;
struct reiserfs_journal_list {unsigned int j_trans_id; int j_commit_left; struct list_head j_list; int j_older_commits_done; } ;
struct reiserfs_journal {struct list_head j_journal_list; } ;


 struct reiserfs_journal_list* FUNC_0 (struct list_head*) ;
 struct reiserfs_journal* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,struct reiserfs_journal_list*,int ) ;
 int FUNC_4 (struct super_block*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0,
          struct reiserfs_journal_list *VAR_1)
{
 struct reiserfs_journal *VAR_2 = FUNC_1(VAR_0);
 struct reiserfs_journal_list *VAR_3;
 struct reiserfs_journal_list *VAR_4;
 struct list_head *VAR_5;
 unsigned int VAR_6 = VAR_1->j_trans_id;
 unsigned int VAR_7;

find_first:



 VAR_4 = VAR_1;
 VAR_5 = VAR_1->j_list.prev;
 while (1) {
  VAR_3 = FUNC_0(VAR_5);
  if (VAR_5 == &VAR_2->j_journal_list ||
      FUNC_2(&VAR_3->j_older_commits_done))
   break;

  VAR_4 = VAR_3;
  VAR_5 = VAR_3->j_list.prev;
 }


 if (VAR_4 == VAR_1) {
  return 0;
 }

 VAR_5 = &VAR_4->j_list;
 while (1) {
  VAR_3 = FUNC_0(VAR_5);
  VAR_7 = VAR_3->j_trans_id;

  if (VAR_7 < VAR_6) {
   if (FUNC_2(&VAR_3->j_commit_left) != 0) {
    FUNC_3(VAR_0, VAR_3, 0);


    if (!FUNC_4(VAR_0, VAR_6))
     return 1;







    if (!FUNC_4
        (VAR_0, VAR_7)) {
     goto find_first;
    }
   }
   VAR_5 = VAR_5->next;
   if (VAR_5 == &VAR_2->j_journal_list)
    return 0;
  } else {
   return 0;
  }
 }
 return 0;
}
