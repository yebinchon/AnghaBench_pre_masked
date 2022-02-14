
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
struct dquot_warn {int w_type; } ;
struct dquot {int dq_dqb_lock; } ;
typedef int qsize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dquot*,int ) ;
 int FUNC_3 (struct dquot*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct dquot_warn*) ;
 struct dquot** FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dquot*,int ) ;
 int * FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct dquot**) ;
 int FUNC_10 (struct dquot_warn*,struct dquot*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;

void FUNC_15(struct inode *VAR_4, qsize_t VAR_5, int VAR_6)
{
 unsigned int VAR_7;
 struct dquot_warn VAR_8[VAR_1];
 struct dquot **VAR_9;
 int VAR_10 = VAR_6 & VAR_0, VAR_11;

 if (!FUNC_1(VAR_4)) {
  if (VAR_10) {
   FUNC_11(&VAR_4->i_lock);
   *FUNC_7(VAR_4) -= VAR_5;
   FUNC_12(&VAR_4->i_lock);
  } else {
   FUNC_8(VAR_4, VAR_5);
  }
  return;
 }

 VAR_9 = FUNC_5(VAR_4);
 VAR_11 = FUNC_13(&VAR_3);
 FUNC_11(&VAR_4->i_lock);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  int VAR_12;

  VAR_8[VAR_7].w_type = VAR_2;
  if (!VAR_9[VAR_7])
   continue;
  FUNC_11(&VAR_9[VAR_7]->dq_dqb_lock);
  VAR_12 = FUNC_6(VAR_9[VAR_7], VAR_5);
  if (VAR_12 != VAR_2)
   FUNC_10(&VAR_8[VAR_7], VAR_9[VAR_7], VAR_12);
  if (VAR_10)
   FUNC_3(VAR_9[VAR_7], VAR_5);
  else
   FUNC_2(VAR_9[VAR_7], VAR_5);
  FUNC_12(&VAR_9[VAR_7]->dq_dqb_lock);
 }
 if (VAR_10)
  *FUNC_7(VAR_4) -= VAR_5;
 else
  FUNC_0(VAR_4, VAR_5);
 FUNC_12(&VAR_4->i_lock);

 if (VAR_10)
  goto out_unlock;
 FUNC_9(VAR_9);
out_unlock:
 FUNC_14(&VAR_3, VAR_11);
 FUNC_4(VAR_8);
}
