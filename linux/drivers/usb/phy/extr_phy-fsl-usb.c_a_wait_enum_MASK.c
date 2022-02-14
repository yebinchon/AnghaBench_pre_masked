
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* otg; } ;
struct TYPE_8__ {int fsm; TYPE_3__ phy; } ;
struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {int b_hnp_enable; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (int *) ;

void FUNC_3(unsigned long VAR_2)
{
 FUNC_0("a_wait_enum timeout\n");
 if (!VAR_1->phy.otg->host->b_hnp_enable)
  FUNC_1(&VAR_1->fsm, VAR_0);
 else
  FUNC_2(&VAR_1->fsm);
}
