
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct ocfs2_journal* journal; } ;
struct ocfs2_journal {int j_checkpointed; int j_trans_id; int j_trans_barrier; int j_num_trans; int j_journal; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_journal*) ;
 int FUNC_8 (struct ocfs2_super*) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ocfs2_super *VAR_0)
{
 int VAR_1 = 0;
 unsigned int VAR_2;
 struct ocfs2_journal *VAR_3 = ((void*)0);

 VAR_3 = VAR_0->journal;


 FUNC_2(&VAR_3->j_trans_barrier);

 VAR_2 = FUNC_0(&VAR_3->j_num_trans);
 FUNC_9(VAR_2);
 if (VAR_2 == 0) {
  FUNC_11(&VAR_3->j_trans_barrier);
  goto finally;
 }

 FUNC_4(VAR_3->j_journal);
 VAR_1 = FUNC_3(VAR_3->j_journal);
 FUNC_5(VAR_3->j_journal);
 if (VAR_1 < 0) {
  FUNC_11(&VAR_3->j_trans_barrier);
  FUNC_6(VAR_1);
  goto finally;
 }

 FUNC_7(VAR_3);

 VAR_2 = FUNC_0(&VAR_3->j_num_trans);
 FUNC_1(&VAR_3->j_num_trans, 0);
 FUNC_11(&VAR_3->j_trans_barrier);

 FUNC_10(VAR_3->j_trans_id, VAR_2);

 FUNC_8(VAR_0);
 FUNC_12(&VAR_3->j_checkpointed);
finally:
 return VAR_1;
}
