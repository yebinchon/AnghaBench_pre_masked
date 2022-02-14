
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_journal_list {int j_commit_mutex; int j_bh_list; int j_tail_bh_list; int j_working_list; int j_list; } ;
struct TYPE_2__ {int j_num_lists; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_2 (struct reiserfs_journal_list*) ;
 struct reiserfs_journal_list* FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct reiserfs_journal_list *FUNC_5(struct super_block *VAR_2)
{
 struct reiserfs_journal_list *VAR_3;
 VAR_3 = FUNC_3(sizeof(struct reiserfs_journal_list),
       VAR_0 | VAR_1);
 FUNC_0(&VAR_3->j_list);
 FUNC_0(&VAR_3->j_working_list);
 FUNC_0(&VAR_3->j_tail_bh_list);
 FUNC_0(&VAR_3->j_bh_list);
 FUNC_4(&VAR_3->j_commit_mutex);
 FUNC_1(VAR_2)->j_num_lists++;
 FUNC_2(VAR_3);
 return VAR_3;
}
