
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_rx {scalar_t__ fsm; TYPE_1__* bna; int * stop_cbarg; int (* stop_cbfn ) (int *,struct bna_rx*) ;int rx_flags; } ;
typedef scalar_t__ bfa_fsm_t ;
struct TYPE_2__ {int rx_mod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bna_rx*,int ) ;
 int FUNC_1 (int *,struct bna_rx*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct bna_rx *VAR_3)
{
 VAR_3->rx_flags &= ~VAR_0;
 if (VAR_3->fsm == (bfa_fsm_t) VAR_2)
  FUNC_1(&VAR_3->bna->rx_mod, VAR_3);
 else {
  VAR_3->stop_cbfn = FUNC_1;
  VAR_3->stop_cbarg = &VAR_3->bna->rx_mod;
  FUNC_0(VAR_3, VAR_1);
 }
}
