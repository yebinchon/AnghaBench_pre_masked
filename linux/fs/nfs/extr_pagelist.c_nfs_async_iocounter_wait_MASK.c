
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_lock_context {int io_count; TYPE_1__* open_context; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int uoc_rpcwaitq; } ;
struct TYPE_3__ {int dentry; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (int *,struct rpc_task*,int *) ;
 int FUNC_4 (int *,struct rpc_task*) ;

bool
FUNC_5(struct rpc_task *VAR_0, struct nfs_lock_context *VAR_1)
{
 struct inode *VAR_2 = FUNC_2(VAR_1->open_context->dentry);
 bool VAR_3 = 0;

 if (FUNC_1(&VAR_1->io_count) > 0) {
  FUNC_3(&FUNC_0(VAR_2)->uoc_rpcwaitq, VAR_0, ((void*)0));
  VAR_3 = 1;
 }

 if (FUNC_1(&VAR_1->io_count) == 0) {
  FUNC_4(&FUNC_0(VAR_2)->uoc_rpcwaitq, VAR_0);
  VAR_3 = 0;
 }

 return VAR_3;
}
