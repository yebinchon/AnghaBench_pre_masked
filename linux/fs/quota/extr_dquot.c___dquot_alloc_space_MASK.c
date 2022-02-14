
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
struct dquot_warn {int w_type; } ;
struct dquot {int dq_dqb_lock; } ;
typedef scalar_t__ qsize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,scalar_t__) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dquot*,scalar_t__,scalar_t__,int,struct dquot_warn*) ;
 int FUNC_3 (struct dquot*,scalar_t__) ;
 int FUNC_4 (struct dquot*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (struct dquot_warn*) ;
 struct dquot** FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,scalar_t__) ;
 int * FUNC_8 (struct inode*) ;
 int FUNC_9 (struct dquot**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;

int FUNC_14(struct inode *VAR_4, qsize_t VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = 0, VAR_9;
 struct dquot_warn VAR_10[VAR_1];
 int VAR_11 = VAR_6 & VAR_0;
 struct dquot **VAR_12;

 if (!FUNC_1(VAR_4)) {
  if (VAR_11) {
   FUNC_10(&VAR_4->i_lock);
   *FUNC_8(VAR_4) += VAR_5;
   FUNC_11(&VAR_4->i_lock);
  } else {
   FUNC_7(VAR_4, VAR_5);
  }
  goto out;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_10[VAR_7].w_type = VAR_2;

 VAR_12 = FUNC_6(VAR_4);
 VAR_9 = FUNC_12(&VAR_3);
 FUNC_10(&VAR_4->i_lock);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!VAR_12[VAR_7])
   continue;
  if (VAR_11) {
   VAR_8 = FUNC_2(VAR_12[VAR_7], 0, VAR_5, VAR_6,
           &VAR_10[VAR_7]);
  } else {
   VAR_8 = FUNC_2(VAR_12[VAR_7], VAR_5, 0, VAR_6,
           &VAR_10[VAR_7]);
  }
  if (VAR_8) {

   for (VAR_7--; VAR_7 >= 0; VAR_7--) {
    if (!VAR_12[VAR_7])
     continue;
    FUNC_10(&VAR_12[VAR_7]->dq_dqb_lock);
    if (VAR_11)
     FUNC_4(VAR_12[VAR_7],
          VAR_5);
    else
     FUNC_3(VAR_12[VAR_7], VAR_5);
    FUNC_11(&VAR_12[VAR_7]->dq_dqb_lock);
   }
   FUNC_11(&VAR_4->i_lock);
   goto out_flush_warn;
  }
 }
 if (VAR_11)
  *FUNC_8(VAR_4) += VAR_5;
 else
  FUNC_0(VAR_4, VAR_5);
 FUNC_11(&VAR_4->i_lock);

 if (VAR_11)
  goto out_flush_warn;
 FUNC_9(VAR_12);
out_flush_warn:
 FUNC_13(&VAR_3, VAR_9);
 FUNC_5(VAR_10);
out:
 return VAR_8;
}
