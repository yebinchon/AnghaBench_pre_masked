
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
 int FUNC_1 (struct dquot* const,int,struct dquot_warn*) ;
 int FUNC_2 (struct dquot* const,int) ;
 int VAR_2 ;
 int FUNC_3 (struct dquot_warn*) ;
 struct dquot** FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dquot* const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;

int FUNC_10(struct inode *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6;
 struct dquot_warn VAR_7[VAR_0];
 struct dquot * const *VAR_8;

 if (!FUNC_0(VAR_3))
  return 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_7[VAR_4].w_type = VAR_1;

 VAR_8 = FUNC_4(VAR_3);
 VAR_6 = FUNC_8(&VAR_2);
 FUNC_6(&VAR_3->i_lock);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_8[VAR_4])
   continue;
  VAR_5 = FUNC_1(VAR_8[VAR_4], 1, &VAR_7[VAR_4]);
  if (VAR_5) {
   for (VAR_4--; VAR_4 >= 0; VAR_4--) {
    if (!VAR_8[VAR_4])
     continue;

    FUNC_6(&VAR_8[VAR_4]->dq_dqb_lock);
    FUNC_2(VAR_8[VAR_4], 1);
    FUNC_7(&VAR_8[VAR_4]->dq_dqb_lock);
   }
   goto warn_put_all;
  }
 }

warn_put_all:
 FUNC_7(&VAR_3->i_lock);
 if (VAR_5 == 0)
  FUNC_5(VAR_8);
 FUNC_9(&VAR_2, VAR_6);
 FUNC_3(VAR_7);
 return VAR_5;
}
