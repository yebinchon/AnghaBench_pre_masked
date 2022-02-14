
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_tx_mod {int (* stop_cbfn ) (int *) ;TYPE_1__* bna; } ;
struct TYPE_2__ {int enet; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct bna_tx_mod *VAR_1 = (struct bna_tx_mod *)VAR_0;

 if (VAR_1->stop_cbfn)
  VAR_1->stop_cbfn(&VAR_1->bna->enet);
 VAR_1->stop_cbfn = ((void*)0);
}
