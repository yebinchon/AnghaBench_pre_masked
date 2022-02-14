
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_tx {TYPE_1__* bna; int (* tx_stall_cbfn ) (int ,struct bna_tx*) ;} ;
struct TYPE_2__ {int bnad; } ;


 int FUNC_0 (struct bna_tx*) ;
 int FUNC_1 (int ,struct bna_tx*) ;

__attribute__((used)) static void
FUNC_2(struct bna_tx *VAR_0)
{
 VAR_0->tx_stall_cbfn(VAR_0->bna->bnad, VAR_0);
 FUNC_0(VAR_0);
}
