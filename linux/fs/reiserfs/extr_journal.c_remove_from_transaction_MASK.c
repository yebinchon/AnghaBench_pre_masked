
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_cnode {struct reiserfs_journal_cnode* prev; struct reiserfs_journal_cnode* next; struct buffer_head* bh; } ;
struct reiserfs_journal {int j_len_alloc; int j_len; int j_hash_table; struct reiserfs_journal_cnode* j_last; struct reiserfs_journal_cnode* j_first; } ;
struct buffer_head {int b_count; int b_blocknr; } ;
typedef int b_blocknr_t ;


 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct super_block*,struct reiserfs_journal_cnode*) ;
 struct reiserfs_journal_cnode* FUNC_7 (struct super_block*,int ,int ) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct super_block*,char*,char*) ;
 int FUNC_10 (struct super_block*,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_0,
       b_blocknr_t VAR_1, int VAR_2)
{
 struct buffer_head *VAR_3;
 struct reiserfs_journal_cnode *VAR_4;
 struct reiserfs_journal *VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = 0;

 VAR_4 = FUNC_7(VAR_0, VAR_5->j_hash_table, VAR_1);
 if (!VAR_4 || !VAR_4->bh) {
  return VAR_6;
 }
 VAR_3 = VAR_4->bh;
 if (VAR_4->prev) {
  VAR_4->prev->next = VAR_4->next;
 }
 if (VAR_4->next) {
  VAR_4->next->prev = VAR_4->prev;
 }
 if (VAR_4 == VAR_5->j_first) {
  VAR_5->j_first = VAR_4->next;
 }
 if (VAR_4 == VAR_5->j_last) {
  VAR_5->j_last = VAR_4->prev;
 }
 FUNC_10(VAR_0, VAR_5->j_hash_table, ((void*)0),
       VAR_3->b_blocknr, 0);
 FUNC_5(VAR_3);

 if (!VAR_2) {
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
  FUNC_4(VAR_3);
  FUNC_8(VAR_3);
  if (FUNC_1(&VAR_3->b_count) < 0) {
   FUNC_9(VAR_0, "journal-1752",
      "b_count < 0");
  }
  VAR_6 = 1;
 }
 VAR_5->j_len--;
 VAR_5->j_len_alloc--;
 FUNC_6(VAR_0, VAR_4);
 return VAR_6;
}
