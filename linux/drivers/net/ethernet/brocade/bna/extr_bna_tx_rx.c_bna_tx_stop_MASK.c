
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_tx {int flags; TYPE_1__* bna; int * stop_cbarg; int stop_cbfn; } ;
struct TYPE_2__ {int tx_mod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bna_tx*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct bna_tx *VAR_3)
{
 VAR_3->stop_cbfn = VAR_2;
 VAR_3->stop_cbarg = &VAR_3->bna->tx_mod;

 VAR_3->flags &= ~VAR_0;
 FUNC_0(VAR_3, VAR_1);
}
