
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_journal_cnode {struct reiserfs_journal_cnode* next; struct reiserfs_journal_cnode* prev; } ;


 int FUNC_0 (int,int) ;
 struct reiserfs_journal_cnode* FUNC_1 (int ) ;

__attribute__((used)) static struct reiserfs_journal_cnode *FUNC_2(int VAR_0)
{
 struct reiserfs_journal_cnode *VAR_1;
 int VAR_2;
 if (VAR_0 <= 0) {
  return ((void*)0);
 }
 VAR_1 = FUNC_1(FUNC_0(VAR_0,
      sizeof(struct reiserfs_journal_cnode)));
 if (!VAR_1) {
  return ((void*)0);
 }
 VAR_1[0].prev = ((void*)0);
 VAR_1[0].next = VAR_1 + 1;
 for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
  VAR_1[VAR_2].prev = VAR_1 + (VAR_2 - 1);
  VAR_1[VAR_2].next = VAR_1 + (VAR_2 + 1);
 }
 VAR_1[VAR_0 - 1].next = ((void*)0);
 return VAR_1;
}
