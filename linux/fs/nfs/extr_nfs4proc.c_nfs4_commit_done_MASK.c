
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_2__ {int seq_res; } ;
struct nfs_commit_data {int (* commit_done_cb ) (struct rpc_task*,struct nfs_commit_data*) ;TYPE_1__ res; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*,int *) ;
 int FUNC_1 (struct rpc_task*,struct nfs_commit_data*) ;

__attribute__((used)) static int FUNC_2(struct rpc_task *VAR_1, struct nfs_commit_data *VAR_2)
{
 if (!FUNC_0(VAR_1, &VAR_2->res.seq_res))
  return -VAR_0;
 return VAR_2->commit_done_cb(VAR_1, VAR_2);
}
