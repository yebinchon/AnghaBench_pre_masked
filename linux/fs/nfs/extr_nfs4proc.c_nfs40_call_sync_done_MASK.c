
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int dummy; } ;
struct nfs4_call_sync_data {int seq_res; } ;


 int FUNC_0 (struct rpc_task*,int ) ;

__attribute__((used)) static void FUNC_1(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs4_call_sync_data *VAR_2 = VAR_1;
 FUNC_0(VAR_0, VAR_2->seq_res);
}
