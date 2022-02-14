
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct TYPE_3__ {int seq_res; } ;
struct nfs_pgio_header {TYPE_2__* mds_ops; TYPE_1__ res; int flags; } ;
struct TYPE_4__ {int (* rpc_call_done ) (struct rpc_task*,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*,int *) ;
 int FUNC_1 (struct rpc_task*,void*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_1, void *VAR_2)
{
 struct nfs_pgio_header *VAR_3 = VAR_2;

 if (FUNC_2(VAR_0, &VAR_3->flags) &&
     VAR_1->tk_status == 0) {
  FUNC_0(VAR_1, &VAR_3->res.seq_res);
  return;
 }


 VAR_3->mds_ops->rpc_call_done(VAR_1, VAR_2);
}
