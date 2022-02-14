
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_journal {unsigned long j_bcount; unsigned int j_trans_id; int j_jlock; int j_wcount; TYPE_1__* j_current_jl; } ;
struct TYPE_2__ {int j_state; } ;


 int VAR_0 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_1, unsigned int VAR_2)
{
 struct reiserfs_journal *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4 = VAR_3->j_bcount;
 while (1) {
  int VAR_5;

  VAR_5 = FUNC_4(VAR_1);
  FUNC_5(1);
  FUNC_3(VAR_1, VAR_5);

  VAR_3->j_current_jl->j_state |= VAR_0;
  while ((FUNC_1(&VAR_3->j_wcount) > 0 ||
   FUNC_1(&VAR_3->j_jlock)) &&
         VAR_3->j_trans_id == VAR_2) {
   FUNC_2(VAR_1);
  }
  if (VAR_3->j_trans_id != VAR_2)
   break;
  if (VAR_4 == VAR_3->j_bcount)
   break;
  VAR_4 = VAR_3->j_bcount;
 }
}
