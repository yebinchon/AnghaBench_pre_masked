
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct nfs_server {int read_hdrsize; } ;
struct TYPE_2__ {int replen; } ;
struct nfs_pgio_header {int (* pgio_done_cb ) (struct rpc_task*,struct nfs_pgio_header*) ;int fattr; TYPE_1__ res; struct inode* inode; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct rpc_task*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int *) ;
 int FUNC_5 (struct rpc_task*,struct nfs_pgio_header*) ;

__attribute__((used)) static int FUNC_6(struct rpc_task *VAR_1, struct nfs_pgio_header *VAR_2)
{
 struct inode *VAR_3 = VAR_2->inode;
 struct nfs_server *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2->pgio_done_cb != ((void*)0))
  return VAR_2->pgio_done_cb(VAR_1, VAR_2);

 if (FUNC_2(VAR_1, VAR_3))
  return -VAR_0;

 if (VAR_1->tk_status >= 0 && !VAR_4->read_hdrsize)
  FUNC_1(&VAR_4->read_hdrsize, 0, VAR_2->res.replen);

 FUNC_3(VAR_3);
 FUNC_4(VAR_3, &VAR_2->fattr);
 return 0;
}
