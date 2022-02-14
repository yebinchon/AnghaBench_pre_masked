
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int b_ssend_srp; TYPE_1__* otg; } ;
struct ci_hdrc {TYPE_2__ fsm; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ci_hdrc *VAR_1)
{
 VAR_1->fsm.b_ssend_srp = 1;

 if (VAR_1->fsm.otg->state == VAR_0)
  return 0;
 else
  return 1;
}
