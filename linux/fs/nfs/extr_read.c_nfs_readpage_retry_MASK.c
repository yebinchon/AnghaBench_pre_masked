
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_ops; } ;
struct nfs_pgio_res {scalar_t__ count; } ;
struct nfs_pgio_args {int count; int pgbase; int offset; } ;
struct nfs_pgio_header {int mds_offset; int pnfs_error; int inode; struct nfs_pgio_res res; struct nfs_pgio_args args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nfs_pgio_header*,int ,int ) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_3,
          struct nfs_pgio_header *VAR_4)
{
 struct nfs_pgio_args *VAR_5 = &VAR_4->args;
 struct nfs_pgio_res *VAR_6 = &VAR_4->res;


 FUNC_0(VAR_4->inode, VAR_2);

 if (VAR_6->count == 0) {
  FUNC_1(VAR_4, -VAR_1, VAR_5->offset);
  return;
 }


 if (!VAR_3->tk_ops) {
  VAR_4->pnfs_error = -VAR_0;
  return;
 }


 VAR_4->mds_offset += VAR_6->count;
 VAR_5->offset += VAR_6->count;
 VAR_5->pgbase += VAR_6->count;
 VAR_5->count -= VAR_6->count;
 FUNC_2(VAR_3);
}
