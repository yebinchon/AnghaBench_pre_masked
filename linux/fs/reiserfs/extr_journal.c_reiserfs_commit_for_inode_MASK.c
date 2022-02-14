
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_journal_list {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {unsigned int i_trans_id; struct reiserfs_journal_list* i_jl; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,unsigned int,struct reiserfs_journal_list*) ;
 int FUNC_2 (struct inode*) ;

int FUNC_3(struct inode *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0)->i_trans_id;
 struct reiserfs_journal_list *VAR_2 = FUNC_0(VAR_0)->i_jl;





 if (!VAR_1 || !VAR_2) {
  FUNC_2(VAR_0);
  VAR_1 = FUNC_0(VAR_0)->i_trans_id;

 }

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
