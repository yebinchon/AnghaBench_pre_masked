
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timerfd_ctx {scalar_t__ clockid; int might_cancel; int cancel_lock; int clist; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timerfd_ctx*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct timerfd_ctx *VAR_6, int VAR_7)
{
 FUNC_2(&VAR_6->cancel_lock);
 if ((VAR_6->clockid == VAR_0 ||
      VAR_6->clockid == VAR_1) &&
     (VAR_7 & VAR_2) && (VAR_7 & VAR_3)) {
  if (!VAR_6->might_cancel) {
   VAR_6->might_cancel = 1;
   FUNC_2(&VAR_5);
   FUNC_1(&VAR_6->clist, &VAR_4);
   FUNC_3(&VAR_5);
  }
 } else {
  FUNC_0(VAR_6);
 }
 FUNC_3(&VAR_6->cancel_lock);
}
