
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_4__ {int count; } ;
struct nfs_pgio_header {TYPE_3__* lseg; TYPE_2__ res; TYPE_1__ args; int pgio_mirror_idx; int flags; } ;
struct TYPE_6__ {int pls_flags; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rpc_task*,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct rpc_task *VAR_2,
  struct nfs_pgio_header *VAR_3)
{
 if (!FUNC_3(VAR_0, &VAR_3->flags))
  return;
 FUNC_1(VAR_2,
   FUNC_0(VAR_3->lseg, VAR_3->pgio_mirror_idx),
   VAR_3->args.count,
   VAR_3->res.count);
 FUNC_2(VAR_1, &VAR_3->lseg->pls_flags);
}
