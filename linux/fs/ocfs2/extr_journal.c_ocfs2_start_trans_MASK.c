
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {TYPE_1__* journal; int sb; } ;
typedef int journal_t ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ j_state; int j_num_trans; int j_trans_barrier; int * j_journal; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (struct ocfs2_super*) ;
 int FUNC_12 (struct ocfs2_super*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;

handle_t *FUNC_16(struct ocfs2_super *VAR_2, int VAR_3)
{
 journal_t *VAR_4 = VAR_2->journal->j_journal;
 handle_t *VAR_5;

 FUNC_0(!VAR_2 || !VAR_2->journal->j_journal);

 if (FUNC_11(VAR_2))
  return FUNC_1(-VAR_0);

 FUNC_0(VAR_2->journal->j_state == VAR_1);
 FUNC_0(VAR_3 <= 0);


 if (FUNC_8())
  return FUNC_7(VAR_4, VAR_3);

 FUNC_14(VAR_2->sb);

 FUNC_5(&VAR_2->journal->j_trans_barrier);

 VAR_5 = FUNC_7(VAR_4, VAR_3);
 if (FUNC_2(VAR_5)) {
  FUNC_15(&VAR_2->journal->j_trans_barrier);
  FUNC_13(VAR_2->sb);

  FUNC_9(FUNC_3(VAR_5));

  if (FUNC_6(VAR_4)) {
   FUNC_10(VAR_2->sb, "Detected aborted journal\n");
   VAR_5 = FUNC_1(-VAR_0);
  }
 } else {
  if (!FUNC_12(VAR_2))
   FUNC_4(&(VAR_2->journal->j_num_trans));
 }

 return VAR_5;
}
