
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; struct nfs_unlinkdata* tk_calldata; } ;
struct nfs_removeres {TYPE_1__* dir_attr; int cinfo; int server; int seq_res; } ;
struct nfs_unlinkdata {int timeout; struct nfs_removeres res; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int time_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*,int ,int *,int *) ;
 int FUNC_1 (struct rpc_task*,int *) ;
 int FUNC_2 (struct inode*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rpc_task *VAR_1, struct inode *VAR_2)
{
 struct nfs_unlinkdata *VAR_3 = VAR_1->tk_calldata;
 struct nfs_removeres *VAR_4 = &VAR_3->res;

 if (!FUNC_1(VAR_1, &VAR_4->seq_res))
  return 0;
 if (FUNC_0(VAR_1, VAR_4->server, ((void*)0),
        &VAR_3->timeout) == -VAR_0)
  return 0;
 if (VAR_1->tk_status == 0)
  FUNC_2(VAR_2, &VAR_4->cinfo,
    VAR_4->dir_attr->time_start, 0);
 return 1;
}
