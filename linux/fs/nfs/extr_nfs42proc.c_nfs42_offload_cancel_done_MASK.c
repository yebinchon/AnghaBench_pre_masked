
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct TYPE_2__ {int osr_seq_res; } ;
struct nfs42_offloadcancel_data {int seq_server; TYPE_1__ res; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*,int *) ;
 int FUNC_1 (struct rpc_task*,int ,int *,int *) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_1, void *VAR_2)
{
 struct nfs42_offloadcancel_data *VAR_3 = VAR_2;

 FUNC_0(VAR_1, &VAR_3->res.osr_seq_res);
 if (VAR_1->tk_status &&
  FUNC_1(VAR_1, VAR_3->seq_server, ((void*)0),
   ((void*)0)) == -VAR_0)
  FUNC_2(VAR_1);
}
