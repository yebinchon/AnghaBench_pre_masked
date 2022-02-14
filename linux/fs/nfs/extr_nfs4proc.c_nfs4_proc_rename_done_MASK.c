
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; struct nfs_renamedata* tk_calldata; } ;
struct nfs_renameres {TYPE_2__* old_fattr; int old_cinfo; TYPE_1__* new_fattr; int new_cinfo; int server; int seq_res; } ;
struct nfs_renamedata {int timeout; struct nfs_renameres res; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int time_start; } ;
struct TYPE_3__ {int time_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpc_task*,int ,int *,int *) ;
 int FUNC_1 (struct rpc_task*,int *) ;
 int FUNC_2 (struct inode*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rpc_task *VAR_2, struct inode *VAR_3,
     struct inode *VAR_4)
{
 struct nfs_renamedata *VAR_5 = VAR_2->tk_calldata;
 struct nfs_renameres *VAR_6 = &VAR_5->res;

 if (!FUNC_1(VAR_2, &VAR_6->seq_res))
  return 0;
 if (FUNC_0(VAR_2, VAR_6->server, ((void*)0), &VAR_5->timeout) == -VAR_0)
  return 0;

 if (VAR_2->tk_status == 0) {
  if (VAR_4 != VAR_3) {

   FUNC_2(VAR_3, &VAR_6->old_cinfo,
     VAR_6->old_fattr->time_start,
     VAR_1);
   FUNC_2(VAR_4, &VAR_6->new_cinfo,
     VAR_6->new_fattr->time_start,
     VAR_1);
  } else
   FUNC_2(VAR_3, &VAR_6->old_cinfo,
     VAR_6->old_fattr->time_start,
     0);
 }
 return 1;
}
