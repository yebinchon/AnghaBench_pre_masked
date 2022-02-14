
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int tk_start; } ;
struct TYPE_2__ {int count; } ;
struct nfs_pgio_header {TYPE_1__ args; int pgio_mirror_idx; int lseg; int inode; int flags; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_1,
  struct nfs_pgio_header *VAR_2)
{
 if (FUNC_2(VAR_0, &VAR_2->flags))
  return;
 FUNC_1(VAR_2->inode,
   FUNC_0(VAR_2->lseg, VAR_2->pgio_mirror_idx),
   VAR_2->args.count,
   VAR_1->tk_start);
}
