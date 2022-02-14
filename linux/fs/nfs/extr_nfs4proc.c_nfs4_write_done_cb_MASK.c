
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int tk_status; } ;
struct TYPE_4__ {int stateid; TYPE_1__* context; } ;
struct nfs_pgio_header {int timestamp; TYPE_2__ args; struct inode* inode; } ;
struct nfs4_exception {scalar_t__ retry; int * stateid; int state; struct inode* inode; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct rpc_task*,int ,int ,struct nfs4_exception*) ;
 int FUNC_2 (struct nfs_pgio_header*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rpc_task*) ;
 int FUNC_5 (struct nfs_pgio_header*,int ) ;

__attribute__((used)) static int FUNC_6(struct rpc_task *VAR_1,
         struct nfs_pgio_header *VAR_2)
{
 struct inode *VAR_3 = VAR_2->inode;

 FUNC_5(VAR_2, VAR_1->tk_status);
 if (VAR_1->tk_status < 0) {
  struct nfs4_exception VAR_4 = {
   .inode = VAR_2->inode,
   .state = VAR_2->args.context->state,
   .stateid = &VAR_2->args.stateid,
  };
  VAR_1->tk_status = FUNC_1(VAR_1,
    FUNC_0(VAR_3), VAR_1->tk_status,
    &VAR_4);
  if (VAR_4.retry) {
   FUNC_4(VAR_1);
   return -VAR_0;
  }
 }
 if (VAR_1->tk_status >= 0) {
  FUNC_3(FUNC_0(VAR_3), VAR_2->timestamp);
  FUNC_2(VAR_2);
 }
 return 0;
}
