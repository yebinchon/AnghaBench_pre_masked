
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_mbm {int cbfn_q; int req_q; int * mcurrent; int timer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct csio_mbm *VAR_0)
{
 FUNC_1(&VAR_0->timer);

 FUNC_0(VAR_0->mcurrent == ((void*)0));
 FUNC_0(FUNC_2(&VAR_0->req_q));
 FUNC_0(FUNC_2(&VAR_0->cbfn_q));
}
