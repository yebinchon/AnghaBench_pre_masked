
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_7__ {int seq_res; } ;
struct TYPE_6__ {int seq_args; } ;
struct nfs_unlinkdata {TYPE_3__ res; TYPE_2__ args; TYPE_1__* dentry; } ;
struct TYPE_8__ {int nfs_client; } ;
struct TYPE_5__ {int d_sb; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,struct rpc_task*) ;

__attribute__((used)) static void FUNC_2(struct rpc_task *VAR_0, struct nfs_unlinkdata *VAR_1)
{
 FUNC_1(FUNC_0(VAR_1->dentry->d_sb)->nfs_client,
   &VAR_1->args.seq_args,
   &VAR_1->res.seq_res,
   VAR_0);
}
