
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task_setup {int flags; int workqueue; struct nfs_pgio_header* callback_data; struct rpc_call_ops const* callback_ops; struct rpc_message* rpc_message; int * task; struct rpc_clnt* rpc_client; } ;
struct rpc_task {int tk_status; } ;
struct rpc_message {struct cred const* rpc_cred; int * rpc_resp; TYPE_3__* rpc_argp; } ;
struct rpc_clnt {int dummy; } ;
struct rpc_call_ops {int dummy; } ;
struct nfs_rpc_ops {int dummy; } ;
struct TYPE_7__ {scalar_t__ offset; int count; } ;
struct nfs_pgio_header {TYPE_3__ args; TYPE_4__* inode; TYPE_1__* rw_ops; int task; int res; } ;
struct cred {int dummy; } ;
struct TYPE_8__ {TYPE_2__* i_sb; } ;
struct TYPE_6__ {int s_id; } ;
struct TYPE_5__ {int (* rw_initiate ) (struct nfs_pgio_header*,struct rpc_message*,struct nfs_rpc_ops const*,struct rpc_task_setup*,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct rpc_task*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,unsigned long long,int ,unsigned long long) ;
 int VAR_2 ;
 int FUNC_4 (struct rpc_task*) ;
 struct rpc_task* FUNC_5 (struct rpc_task_setup*) ;
 int FUNC_6 (struct rpc_task*) ;
 int FUNC_7 (struct nfs_pgio_header*,struct rpc_message*,struct nfs_rpc_ops const*,struct rpc_task_setup*,int) ;

int FUNC_8(struct rpc_clnt *VAR_3, struct nfs_pgio_header *VAR_4,
        const struct cred *VAR_5, const struct nfs_rpc_ops *VAR_6,
        const struct rpc_call_ops *VAR_7, int VAR_8, int VAR_9)
{
 struct rpc_task *VAR_10;
 struct rpc_message VAR_11 = {
  .rpc_argp = &VAR_4->args,
  .rpc_resp = &VAR_4->res,
  .rpc_cred = VAR_5,
 };
 struct rpc_task_setup VAR_12 = {
  .rpc_client = VAR_3,
  .task = &VAR_4->task,
  .rpc_message = &VAR_11,
  .callback_ops = VAR_7,
  .callback_data = VAR_4,
  .workqueue = VAR_2,
  .flags = VAR_1 | VAR_9,
 };
 int VAR_13 = 0;

 VAR_4->rw_ops->rw_initiate(VAR_4, &VAR_11, VAR_6, &VAR_12, VAR_8);

 FUNC_3("NFS: initiated pgio call "
  "(req %s/%llu, %u bytes @ offset %llu)\n",
  VAR_4->inode->i_sb->s_id,
  (unsigned long long)FUNC_1(VAR_4->inode),
  VAR_4->args.count,
  (unsigned long long)VAR_4->args.offset);

 VAR_10 = FUNC_5(&VAR_12);
 if (FUNC_0(VAR_10)) {
  VAR_13 = FUNC_2(VAR_10);
  goto out;
 }
 if (VAR_8 & VAR_0) {
  VAR_13 = FUNC_6(VAR_10);
  if (VAR_13 == 0)
   VAR_13 = VAR_10->tk_status;
 }
 FUNC_4(VAR_10);
out:
 return VAR_13;
}
