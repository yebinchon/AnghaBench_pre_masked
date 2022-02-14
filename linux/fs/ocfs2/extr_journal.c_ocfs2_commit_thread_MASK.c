
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int checkpoint_event; struct ocfs2_journal* journal; } ;
struct ocfs2_journal {int j_num_trans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*) ;
 scalar_t__ FUNC_5 (unsigned long*,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_3)
{
 int VAR_4;
 struct ocfs2_super *VAR_5 = VAR_3;
 struct ocfs2_journal *VAR_6 = VAR_5->journal;





 while (!(FUNC_1() &&
   FUNC_0(&VAR_6->j_num_trans) == 0)) {

  FUNC_6(VAR_5->checkpoint_event,
      FUNC_0(&VAR_6->j_num_trans)
      || FUNC_1());

  VAR_4 = FUNC_4(VAR_5);
  if (VAR_4 < 0) {
   static unsigned long VAR_7;


   if (FUNC_5(&VAR_7, 60*VAR_0))
    FUNC_2(VAR_1, "status = %d, journal is "
      "already aborted.\n", VAR_4);





   FUNC_3(1000);
  }

  if (FUNC_1() && FUNC_0(&VAR_6->j_num_trans)){
   FUNC_2(VAR_2,
        "commit_thread: %u transactions pending on "
        "shutdown\n",
        FUNC_0(&VAR_6->j_num_trans));
  }
 }

 return 0;
}
