
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {int sb; struct ocfs2_journal* journal; } ;
struct ocfs2_journal {int j_trans_barrier; } ;
struct TYPE_4__ {int h_ref; } ;
typedef TYPE_1__ handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ocfs2_super *VAR_0,
         handle_t *VAR_1)
{
 int VAR_2, VAR_3;
 struct ocfs2_journal *VAR_4 = VAR_0->journal;

 FUNC_0(!VAR_1);

 VAR_3 = VAR_1->h_ref > 1;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  FUNC_2(VAR_2);

 if (!VAR_3) {
  FUNC_4(&VAR_4->j_trans_barrier);
  FUNC_3(VAR_0->sb);
 }

 return VAR_2;
}
