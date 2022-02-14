
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_2__ {int fattr; } ;
struct nfs_commit_data {int (* commit_done_cb ) (struct rpc_task*,struct nfs_commit_data*) ;TYPE_1__ res; int inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rpc_task*,struct nfs_commit_data*) ;

__attribute__((used)) static int FUNC_3(struct rpc_task *VAR_1, struct nfs_commit_data *VAR_2)
{
 if (VAR_2->commit_done_cb != ((void*)0))
  return VAR_2->commit_done_cb(VAR_1, VAR_2);

 if (FUNC_0(VAR_1, VAR_2->inode))
  return -VAR_0;
 FUNC_1(VAR_2->inode, VAR_2->res.fattr);
 return 0;
}
