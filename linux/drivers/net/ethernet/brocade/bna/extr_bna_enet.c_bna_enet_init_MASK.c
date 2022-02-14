
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_enet {int * mtu_cbfn; int * stop_cbarg; int * stop_cbfn; int type; scalar_t__ mtu; scalar_t__ flags; struct bna* bna; } ;
struct bna {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bna_enet*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct bna_enet *VAR_2, struct bna *VAR_3)
{
 VAR_2->bna = VAR_3;
 VAR_2->flags = 0;
 VAR_2->mtu = 0;
 VAR_2->type = VAR_0;

 VAR_2->stop_cbfn = ((void*)0);
 VAR_2->stop_cbarg = ((void*)0);

 VAR_2->mtu_cbfn = ((void*)0);

 FUNC_0(VAR_2, VAR_1);
}
