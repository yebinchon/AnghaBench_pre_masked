
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_ctlr {TYPE_1__* lp; int rnd_state; scalar_t__ probe_tries; } ;
struct TYPE_2__ {int wwpn; } ;


 int FUNC_0 (struct fcoe_ctlr*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct fcoe_ctlr *VAR_0)
{
 VAR_0->probe_tries = 0;
 FUNC_1(&VAR_0->rnd_state, VAR_0->lp->wwpn);
 FUNC_0(VAR_0);
}
