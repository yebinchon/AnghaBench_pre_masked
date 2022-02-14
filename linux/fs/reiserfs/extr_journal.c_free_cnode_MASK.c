
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_cnode {struct reiserfs_journal_cnode* prev; struct reiserfs_journal_cnode* next; } ;
struct reiserfs_journal {struct reiserfs_journal_cnode* j_cnode_free_list; int j_cnode_free; int j_cnode_used; } ;


 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_0,
         struct reiserfs_journal_cnode *VAR_1)
{
 struct reiserfs_journal *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, "free_cnode");

 VAR_2->j_cnode_used--;
 VAR_2->j_cnode_free++;

 VAR_1->next = VAR_2->j_cnode_free_list;
 if (VAR_2->j_cnode_free_list) {
  VAR_2->j_cnode_free_list->prev = VAR_1;
 }
 VAR_1->prev = ((void*)0);
 VAR_2->j_cnode_free_list = VAR_1;
}
