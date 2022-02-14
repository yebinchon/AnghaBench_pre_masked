
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_2__ {int seq_res; } ;
struct nfs_pgio_header {int (* pgio_done_cb ) (struct rpc_task*,struct nfs_pgio_header*) ;int args; TYPE_1__ res; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*,int *) ;
 int FUNC_1 (struct rpc_task*,struct nfs_pgio_header*) ;
 scalar_t__ FUNC_2 (struct rpc_task*,int *) ;
 int FUNC_3 (struct rpc_task*,struct nfs_pgio_header*) ;

__attribute__((used)) static int FUNC_4(struct rpc_task *VAR_1, struct nfs_pgio_header *VAR_2)
{
 if (!FUNC_0(VAR_1, &VAR_2->res.seq_res))
  return -VAR_0;
 if (FUNC_2(VAR_1, &VAR_2->args))
  return -VAR_0;
 return VAR_2->pgio_done_cb ? VAR_2->pgio_done_cb(VAR_1, VAR_2) :
  FUNC_1(VAR_1, VAR_2);
}
