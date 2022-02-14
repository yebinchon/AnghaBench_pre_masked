
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task_setup {int rpc_client; int flags; int workqueue; struct nfs_unlinkdata* callback_data; int * callback_ops; struct rpc_message* rpc_message; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int rpc_cred; TYPE_2__* rpc_resp; TYPE_1__* rpc_argp; } ;
struct TYPE_6__ {int dir_attr; } ;
struct TYPE_5__ {int fh; } ;
struct nfs_unlinkdata {TYPE_3__* dentry; TYPE_2__ res; TYPE_1__ args; int cred; } ;
struct inode {int i_sb; } ;
struct TYPE_8__ {int (* unlink_setup ) (struct rpc_message*,TYPE_3__*,struct inode*) ;} ;
struct TYPE_7__ {int d_parent; } ;


 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 TYPE_4__* FUNC_3 (struct inode*) ;
 int VAR_0 ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct rpc_task*) ;
 struct rpc_task* FUNC_8 (struct rpc_task_setup*) ;
 int FUNC_9 (struct rpc_message*,TYPE_3__*,struct inode*) ;

__attribute__((used)) static void FUNC_10(struct inode *VAR_3, struct nfs_unlinkdata *VAR_4)
{
 struct rpc_message VAR_5 = {
  .rpc_argp = &VAR_4->args,
  .rpc_resp = &VAR_4->res,
  .rpc_cred = VAR_4->cred,
 };
 struct rpc_task_setup VAR_6 = {
  .rpc_message = &VAR_5,
  .callback_ops = &VAR_1,
  .callback_data = VAR_4,
  .workqueue = VAR_2,
  .flags = VAR_0,
 };
 struct rpc_task *VAR_7;
 struct inode *VAR_8 = FUNC_4(VAR_4->dentry->d_parent);
 FUNC_6(VAR_8->i_sb);
 VAR_4->args.fh = FUNC_2(VAR_8);
 FUNC_5(VAR_4->res.dir_attr);

 FUNC_3(VAR_8)->unlink_setup(&VAR_5, VAR_4->dentry, VAR_3);

 VAR_6.rpc_client = FUNC_1(VAR_8);
 VAR_7 = FUNC_8(&VAR_6);
 if (!FUNC_0(VAR_7))
  FUNC_7(VAR_7);
}
