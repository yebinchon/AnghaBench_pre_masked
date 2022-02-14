
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_enet {int mtu; void (* mtu_cbfn ) (struct bnad*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bna_enet*,int ) ;

void
FUNC_1(struct bna_enet *VAR_1, int VAR_2,
   void (*VAR_3)(struct bnad *))
{
 VAR_1->mtu = VAR_2;

 VAR_1->mtu_cbfn = VAR_3;

 FUNC_0(VAR_1, VAR_0);
}
