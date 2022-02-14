
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int b_srp_done; scalar_t__ b_sess_vld; } ;
struct TYPE_6__ {TYPE_1__* otg; } ;
struct TYPE_8__ {TYPE_3__ fsm; TYPE_2__ phy; } ;
struct TYPE_5__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

void FUNC_1(unsigned long VAR_3)
{
 FUNC_0(0);
 VAR_2 = 1;

 if ((VAR_1->phy.otg->state == VAR_0) &&
     VAR_1->fsm.b_sess_vld)
  VAR_1->fsm.b_srp_done = 1;
}
