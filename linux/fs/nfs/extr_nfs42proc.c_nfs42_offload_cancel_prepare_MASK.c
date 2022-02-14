
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_6__ {int osr_seq_res; } ;
struct TYPE_5__ {int osa_seq_args; } ;
struct nfs42_offloadcancel_data {TYPE_3__ res; TYPE_2__ args; TYPE_1__* seq_server; } ;
struct TYPE_4__ {int nfs_client; } ;


 int FUNC_0 (int ,int *,int *,struct rpc_task*) ;

__attribute__((used)) static void FUNC_1(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs42_offloadcancel_data *VAR_2 = VAR_1;

 FUNC_0(VAR_2->seq_server->nfs_client,
    &VAR_2->args.osa_seq_args,
    &VAR_2->res.osr_seq_res, VAR_0);
}
