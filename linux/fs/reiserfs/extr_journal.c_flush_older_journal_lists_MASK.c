
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_list {unsigned int j_trans_id; scalar_t__ j_refcount; } ;
struct list_head {struct list_head* next; } ;
struct reiserfs_journal {struct list_head j_journal_list; } ;


 int FUNC_0 (int) ;
 struct reiserfs_journal_list* FUNC_1 (struct list_head*) ;
 struct reiserfs_journal* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,struct reiserfs_journal_list*,int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0,
         struct reiserfs_journal_list *VAR_1)
{
 struct list_head *VAR_2;
 struct reiserfs_journal_list *VAR_3;
 struct reiserfs_journal *VAR_4 = FUNC_2(VAR_0);
 unsigned int VAR_5 = VAR_1->j_trans_id;





restart:
 VAR_2 = VAR_4->j_journal_list.next;

 if (VAR_2 == &VAR_4->j_journal_list)
  return 0;
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3->j_trans_id < VAR_5) {
  FUNC_0(VAR_3->j_refcount <= 0);

  FUNC_3(VAR_0, VAR_3, 0);


  goto restart;
 }
 return 0;
}
