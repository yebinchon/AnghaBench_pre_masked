
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_rx {int rxf; TYPE_1__* bna; int (* rx_post_cbfn ) (int ,struct bna_rx*) ;} ;
struct TYPE_2__ {int bnad; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct bna_rx*) ;

__attribute__((used)) static void FUNC_2(struct bna_rx *VAR_0)
{
 VAR_0->rx_post_cbfn(VAR_0->bna->bnad, VAR_0);
 FUNC_0(&VAR_0->rxf);
}
