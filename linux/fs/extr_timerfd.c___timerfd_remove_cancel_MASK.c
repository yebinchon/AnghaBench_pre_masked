
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timerfd_ctx {int might_cancel; int clist; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct timerfd_ctx *VAR_1)
{
 if (VAR_1->might_cancel) {
  VAR_1->might_cancel = 0;
  FUNC_1(&VAR_0);
  FUNC_0(&VAR_1->clist);
  FUNC_2(&VAR_0);
 }
}
