
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int * next; } ;
struct reiserfs_journal_list {scalar_t__ j_trans_id; TYPE_1__ j_list; int j_state; int j_nonzerolen; int j_commit_left; } ;
struct reiserfs_journal {int j_journal_list; } ;


 struct reiserfs_journal_list* FUNC_0 (int *) ;
 int VAR_0 ;
 struct reiserfs_journal* FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,struct reiserfs_journal_list*,int) ;
 int FUNC_4 (struct reiserfs_journal_list*) ;
 int FUNC_5 (struct super_block*,struct reiserfs_journal_list*,struct reiserfs_journal_list**,unsigned int*,unsigned long,int) ;
 int FUNC_6 (struct super_block*,struct reiserfs_journal_list*) ;
 scalar_t__ FUNC_7 (struct super_block*) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_1,
        struct reiserfs_journal_list *VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned long VAR_4;
 int VAR_5;
 int VAR_6 = 256;
 struct reiserfs_journal_list *VAR_7;
 struct reiserfs_journal_list *VAR_8;
 unsigned int VAR_9;
 struct reiserfs_journal *VAR_10 = FUNC_1(VAR_1);

 VAR_8 = VAR_7 = VAR_2;


 if (FUNC_7(VAR_1))
  VAR_6 = 1024;

 for (VAR_5 = 0; VAR_5 < 256 && VAR_3 < VAR_6; VAR_5++) {
  if (FUNC_2(&VAR_7->j_commit_left) ||
      VAR_7->j_trans_id < VAR_2->j_trans_id) {
   break;
  }
  VAR_4 = FUNC_2(&VAR_7->j_nonzerolen);
  if (VAR_4 > 0) {
   VAR_7->j_state &= ~VAR_0;
  }
  VAR_3 += VAR_4;
  VAR_8 = VAR_7;
  if (VAR_7->j_list.next == &VAR_10->j_journal_list)
   break;
  VAR_7 = FUNC_0(VAR_7->j_list.next);
 }
 FUNC_4(VAR_2);
 FUNC_4(VAR_8);






 if (VAR_8 != VAR_2)
  FUNC_5(VAR_1, VAR_2, &VAR_7, &VAR_9, VAR_3, VAR_5);

 FUNC_3(VAR_1, VAR_8, 1);
 FUNC_6(VAR_1, VAR_8);
 FUNC_6(VAR_1, VAR_2);
 return 0;
}
