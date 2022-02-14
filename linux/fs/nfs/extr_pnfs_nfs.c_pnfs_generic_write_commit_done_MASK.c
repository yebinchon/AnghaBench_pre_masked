
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_commit_data {TYPE_1__* mds_ops; } ;
struct TYPE_2__ {int (* rpc_call_done ) (struct rpc_task*,void*) ;} ;


 int FUNC_0 (struct rpc_task*,void*) ;

void FUNC_1(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs_commit_data *VAR_2 = VAR_1;


 VAR_2->mds_ops->rpc_call_done(VAR_0, VAR_1);
}
