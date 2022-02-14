
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct super_block {int dummy; } ;
struct ocfs2_super {TYPE_1__* journal; } ;
struct TYPE_2__ {int j_journal; } ;


 int VAR_0 ;
 struct ocfs2_super* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*) ;
 int FUNC_6 (struct ocfs2_super*,int ) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_1, int VAR_2)
{
 int VAR_3;
 tid_t VAR_4;
 struct ocfs2_super *VAR_5 = FUNC_0(VAR_1);

 if (FUNC_5(VAR_5))
  return -VAR_0;

 if (VAR_2) {
  VAR_3 = FUNC_4(VAR_5);
  if (VAR_3 < 0)
   FUNC_3(VAR_3);
 } else {
  FUNC_6(VAR_5, 0);
 }

 if (FUNC_1(VAR_5->journal->j_journal,
          &VAR_4)) {
  if (VAR_2)
   FUNC_2(VAR_5->journal->j_journal,
          VAR_4);
 }
 return 0;
}
