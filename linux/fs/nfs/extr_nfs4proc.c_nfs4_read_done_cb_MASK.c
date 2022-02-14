
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int tk_status; } ;
struct nfs_server {int dummy; } ;
struct TYPE_4__ {int stateid; TYPE_1__* context; } ;
struct nfs_pgio_header {int timestamp; TYPE_2__ args; int inode; } ;
struct nfs4_exception {scalar_t__ retry; int * stateid; int state; int inode; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_task*,struct nfs_server*,int ,struct nfs4_exception*) ;
 int FUNC_2 (struct nfs_server*,int ) ;
 int FUNC_3 (struct rpc_task*) ;
 int FUNC_4 (struct nfs_pgio_header*,int ) ;

__attribute__((used)) static int FUNC_5(struct rpc_task *VAR_1, struct nfs_pgio_header *VAR_2)
{
 struct nfs_server *VAR_3 = FUNC_0(VAR_2->inode);

 FUNC_4(VAR_2, VAR_1->tk_status);
 if (VAR_1->tk_status < 0) {
  struct nfs4_exception VAR_4 = {
   .inode = VAR_2->inode,
   .state = VAR_2->args.context->state,
   .stateid = &VAR_2->args.stateid,
  };
  VAR_1->tk_status = FUNC_1(VAR_1,
    VAR_3, VAR_1->tk_status, &VAR_4);
  if (VAR_4.retry) {
   FUNC_3(VAR_1);
   return -VAR_0;
  }
 }

 if (VAR_1->tk_status > 0)
  FUNC_2(VAR_3, VAR_2->timestamp);
 return 0;
}
