
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; } ;
struct TYPE_2__ {scalar_t__ dqb_curspace; int dqb_rsvspace; } ;
struct dquot {int dq_dqb_lock; TYPE_1__ dq_dqb; } ;
typedef scalar_t__ qsize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct inode*,scalar_t__) ;
 int FUNC_2 (struct inode*) ;
 int VAR_1 ;
 struct dquot** FUNC_3 (struct inode*) ;
 int * FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dquot**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;

void FUNC_10(struct inode *VAR_2, qsize_t VAR_3)
{
 struct dquot **VAR_4;
 int VAR_5, VAR_6;

 if (!FUNC_2(VAR_2)) {
  FUNC_6(&VAR_2->i_lock);
  *FUNC_4(VAR_2) += VAR_3;
  FUNC_1(VAR_2, VAR_3);
  FUNC_7(&VAR_2->i_lock);
  return;
 }

 VAR_4 = FUNC_3(VAR_2);
 VAR_6 = FUNC_8(&VAR_1);
 FUNC_6(&VAR_2->i_lock);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4[VAR_5]) {
   struct dquot *VAR_7 = VAR_4[VAR_5];

   FUNC_6(&VAR_7->dq_dqb_lock);
   if (FUNC_0(VAR_7->dq_dqb.dqb_curspace < VAR_3))
    VAR_3 = VAR_7->dq_dqb.dqb_curspace;
   VAR_7->dq_dqb.dqb_rsvspace += VAR_3;
   VAR_7->dq_dqb.dqb_curspace -= VAR_3;
   FUNC_7(&VAR_7->dq_dqb_lock);
  }
 }

 *FUNC_4(VAR_2) += VAR_3;
 FUNC_1(VAR_2, VAR_3);
 FUNC_7(&VAR_2->i_lock);
 FUNC_5(VAR_4);
 FUNC_9(&VAR_1, VAR_6);
 return;
}
