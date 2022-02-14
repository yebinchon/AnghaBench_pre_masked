
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_journal {int j_trans_id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline unsigned long FUNC_3(struct ocfs2_journal *VAR_1)
{
 unsigned long VAR_2;
 FUNC_0(&VAR_0);
 VAR_2 = VAR_1->j_trans_id++;
 if (FUNC_2(!VAR_1->j_trans_id))
  VAR_1->j_trans_id = 1;
 FUNC_1(&VAR_0);
 return VAR_2;
}
