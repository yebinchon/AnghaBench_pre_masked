
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gigaset_capi_ctr {int ctr; } ;
struct cardstate {struct gigaset_capi_ctr* iif; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gigaset_capi_ctr*) ;

void FUNC_2(struct cardstate *VAR_0)
{
 struct gigaset_capi_ctr *VAR_1 = VAR_0->iif;

 FUNC_0(&VAR_1->ctr);
 FUNC_1(VAR_1);
 VAR_0->iif = ((void*)0);
}
