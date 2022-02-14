
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {scalar_t__ tk_status; } ;
struct nfs_pgio_header {int (* pgio_done_cb ) (struct rpc_task*,struct nfs_pgio_header*) ;struct inode* inode; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*,struct inode*) ;
 int FUNC_1 (struct nfs_pgio_header*) ;
 int FUNC_2 (struct rpc_task*,struct nfs_pgio_header*) ;

__attribute__((used)) static int FUNC_3(struct rpc_task *VAR_1, struct nfs_pgio_header *VAR_2)
{
 struct inode *VAR_3 = VAR_2->inode;

 if (VAR_2->pgio_done_cb != ((void*)0))
  return VAR_2->pgio_done_cb(VAR_1, VAR_2);

 if (FUNC_0(VAR_1, VAR_3))
  return -VAR_0;
 if (VAR_1->tk_status >= 0)
  FUNC_1(VAR_2);
 return 0;
}
