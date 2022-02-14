
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_journal_desc {int dummy; } ;
struct reiserfs_journal_commit {int dummy; } ;
struct TYPE_2__ {scalar_t__ j_trans_max; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct reiserfs_journal_commit*) ;
 scalar_t__ FUNC_2 (struct reiserfs_journal_commit*) ;
 scalar_t__ FUNC_3 (struct reiserfs_journal_desc*) ;
 scalar_t__ FUNC_4 (struct reiserfs_journal_desc*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0,
           struct reiserfs_journal_desc *VAR_1,
           struct reiserfs_journal_commit *VAR_2)
{
 if (FUNC_1(VAR_2) != FUNC_3(VAR_1) ||
     FUNC_2(VAR_2) != FUNC_4(VAR_1) ||
     FUNC_2(VAR_2) > FUNC_0(VAR_0)->j_trans_max ||
     FUNC_2(VAR_2) <= 0) {
  return 1;
 }
 return 0;
}
