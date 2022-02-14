
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_ctrls {int ready; int * alpha; int handler; } ;
struct fimc_ctx {struct fimc_ctrls ctrls; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct fimc_ctx *VAR_0)
{
 struct fimc_ctrls *VAR_1 = &VAR_0->ctrls;

 if (VAR_1->ready) {
  FUNC_0(&VAR_1->handler);
  VAR_1->ready = 0;
  VAR_1->alpha = ((void*)0);
 }
}
