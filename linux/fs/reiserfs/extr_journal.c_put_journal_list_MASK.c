
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_list {int j_refcount; int j_trans_id; } ;


 int FUNC_0 (struct reiserfs_journal_list*) ;
 int FUNC_1 (struct super_block*,char*,char*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct super_block *VAR_0,
        struct reiserfs_journal_list *VAR_1)
{
 if (VAR_1->j_refcount < 1) {
  FUNC_1(VAR_0, "journal-2", "trans id %u, refcount at %d",
          VAR_1->j_trans_id, VAR_1->j_refcount);
 }
 if (--VAR_1->j_refcount == 0)
  FUNC_0(VAR_1);
}
