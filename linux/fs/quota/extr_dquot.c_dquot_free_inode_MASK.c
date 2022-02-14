
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
struct dquot_warn {int w_type; } ;
struct dquot {int dq_dqb_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dquot* const,int) ;
 int VAR_2 ;
 int FUNC_2 (struct dquot_warn*) ;
 struct dquot** FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dquot* const,int) ;
 int FUNC_5 (struct dquot* const*) ;
 int FUNC_6 (struct dquot_warn*,struct dquot* const,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

void FUNC_11(struct inode *VAR_3)
{
 unsigned int VAR_4;
 struct dquot_warn VAR_5[VAR_0];
 struct dquot * const *VAR_6;
 int VAR_7;

 if (!FUNC_0(VAR_3))
  return;

 VAR_6 = FUNC_3(VAR_3);
 VAR_7 = FUNC_9(&VAR_2);
 FUNC_7(&VAR_3->i_lock);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  int VAR_8;

  VAR_5[VAR_4].w_type = VAR_1;
  if (!VAR_6[VAR_4])
   continue;
  FUNC_7(&VAR_6[VAR_4]->dq_dqb_lock);
  VAR_8 = FUNC_4(VAR_6[VAR_4], 1);
  if (VAR_8 != VAR_1)
   FUNC_6(&VAR_5[VAR_4], VAR_6[VAR_4], VAR_8);
  FUNC_1(VAR_6[VAR_4], 1);
  FUNC_8(&VAR_6[VAR_4]->dq_dqb_lock);
 }
 FUNC_8(&VAR_3->i_lock);
 FUNC_5(VAR_6);
 FUNC_10(&VAR_2, VAR_7);
 FUNC_2(VAR_5);
}
