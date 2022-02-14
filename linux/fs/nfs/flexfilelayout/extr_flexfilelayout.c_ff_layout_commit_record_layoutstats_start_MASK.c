
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_start; } ;
struct nfs_commit_data {int ds_commit_index; int lseg; int inode; int flags; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_1,
  struct nfs_commit_data *VAR_2)
{
 if (FUNC_2(VAR_0, &VAR_2->flags))
  return;
 FUNC_1(VAR_2->inode,
   FUNC_0(VAR_2->lseg, VAR_2->ds_commit_index),
   0, VAR_1->tk_start);
}
