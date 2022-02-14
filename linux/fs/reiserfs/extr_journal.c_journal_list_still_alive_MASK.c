
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_list {unsigned int j_trans_id; } ;
struct list_head {int next; } ;
struct reiserfs_journal {struct list_head j_journal_list; } ;


 struct reiserfs_journal_list* FUNC_0 (int ) ;
 struct reiserfs_journal* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct list_head*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0,
        unsigned int VAR_1)
{
 struct reiserfs_journal *VAR_2 = FUNC_1(VAR_0);
 struct list_head *VAR_3 = &VAR_2->j_journal_list;
 struct reiserfs_journal_list *VAR_4;

 if (!FUNC_2(VAR_3)) {
  VAR_4 = FUNC_0(VAR_3->next);
  if (VAR_4->j_trans_id <= VAR_1) {
   return 1;
  }
 }
 return 0;
}
