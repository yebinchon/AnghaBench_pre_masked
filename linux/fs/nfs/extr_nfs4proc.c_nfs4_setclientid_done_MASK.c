
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; TYPE_1__* tk_rqstp; } ;
struct nfs4_setclientid {int sc_cred; } ;
struct TYPE_2__ {int rq_cred; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs4_setclientid *VAR_2 = VAR_1;

 if (VAR_0->tk_status == 0)
  VAR_2->sc_cred = FUNC_0(VAR_0->tk_rqstp->rq_cred);
}
