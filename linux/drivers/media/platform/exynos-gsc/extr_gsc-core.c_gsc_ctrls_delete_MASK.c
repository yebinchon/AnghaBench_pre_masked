
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_ctx {int ctrls_rdy; int ctrl_handler; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct gsc_ctx *VAR_0)
{
 if (VAR_0->ctrls_rdy) {
  FUNC_0(&VAR_0->ctrl_handler);
  VAR_0->ctrls_rdy = 0;
 }
}
