
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_cnode {long blocknr; struct reiserfs_journal_cnode* hnext; struct super_block* sb; } ;


 struct reiserfs_journal_cnode* FUNC_0 (struct reiserfs_journal_cnode**,struct super_block*,long) ;

__attribute__((used)) static inline struct reiserfs_journal_cnode *FUNC_1(struct
          super_block
          *VAR_0,
          struct
          reiserfs_journal_cnode
          **VAR_1,
          long VAR_2)
{
 struct reiserfs_journal_cnode *VAR_3;
 VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2);
 while (VAR_3) {
  if (VAR_3->blocknr == VAR_2 && VAR_3->sb == VAR_0)
   return VAR_3;
  VAR_3 = VAR_3->hnext;
 }
 return (struct reiserfs_journal_cnode *)0;
}
