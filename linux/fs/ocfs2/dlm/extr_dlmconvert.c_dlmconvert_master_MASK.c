
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int wq; int spinlock; int state; } ;
struct dlm_lock {int dummy; } ;
struct dlm_ctxt {int dummy; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_lock_resource*) ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,int,int,int*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_5 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_6 (struct dlm_ctxt*,struct dlm_lock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

enum dlm_status FUNC_10(struct dlm_ctxt *VAR_3,
      struct dlm_lock_resource *VAR_4,
      struct dlm_lock *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 enum dlm_status VAR_10;

 FUNC_7(&VAR_4->spinlock);

 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 VAR_4->state |= VAR_0;

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
         &VAR_8, &VAR_9);

 VAR_4->state &= ~VAR_0;
 FUNC_8(&VAR_4->spinlock);
 FUNC_9(&VAR_4->wq);
 if (VAR_10 != VAR_1 && VAR_10 != VAR_2)
  FUNC_3(VAR_10);


 if (VAR_8)
  FUNC_6(VAR_3, VAR_5);
 else
  FUNC_5(VAR_3, VAR_4);

 if (VAR_9)
  FUNC_4(VAR_3, VAR_4);

 return VAR_10;
}
