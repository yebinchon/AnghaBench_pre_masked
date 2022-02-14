
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task_setup {struct nfs_renamedata* callback_data; int flags; int rpc_client; int workqueue; int * callback_ops; struct rpc_message* rpc_message; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int rpc_cred; TYPE_2__* rpc_resp; TYPE_1__* rpc_argp; } ;
struct TYPE_5__ {int * new_fattr; int * old_fattr; } ;
struct TYPE_4__ {int * new_name; void* new_dir; int * old_name; void* old_dir; } ;
struct nfs_renamedata {void (* complete ) (struct rpc_task*,struct nfs_renamedata*) ;struct inode* old_dir; int new_fattr; TYPE_2__ res; int old_fattr; TYPE_1__ args; void* new_dentry; void* old_dentry; struct inode* new_dir; int cred; } ;
struct inode {int i_sb; } ;
struct dentry {int d_name; } ;
struct TYPE_6__ {int (* rename_setup ) (struct rpc_message*,struct dentry*,struct dentry*) ;} ;


 int VAR_0 ;
 struct rpc_task* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 void* FUNC_2 (struct inode*) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int VAR_2 ;
 void* FUNC_4 (struct dentry*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct inode*) ;
 struct nfs_renamedata* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 struct rpc_task* FUNC_10 (struct rpc_task_setup*) ;
 int FUNC_11 (struct rpc_message*,struct dentry*,struct dentry*) ;

struct rpc_task *
FUNC_12(struct inode *VAR_5, struct inode *VAR_6,
   struct dentry *VAR_7, struct dentry *VAR_8,
   void (*VAR_9)(struct rpc_task *, struct nfs_renamedata *))
{
 struct nfs_renamedata *VAR_10;
 struct rpc_message VAR_11 = { };
 struct rpc_task_setup VAR_12 = {
  .rpc_message = &VAR_11,
  .callback_ops = &VAR_3,
  .workqueue = VAR_4,
  .rpc_client = FUNC_1(VAR_5),
  .flags = VAR_2,
 };

 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0))
  return FUNC_0(-VAR_0);
 VAR_12.callback_data = VAR_10;

 VAR_10->cred = FUNC_5();

 VAR_11.rpc_argp = &VAR_10->args;
 VAR_11.rpc_resp = &VAR_10->res;
 VAR_11.rpc_cred = VAR_10->cred;


 VAR_10->old_dir = VAR_5;
 FUNC_6(VAR_5);
 VAR_10->new_dir = VAR_6;
 FUNC_6(VAR_6);
 VAR_10->old_dentry = FUNC_4(VAR_7);
 VAR_10->new_dentry = FUNC_4(VAR_8);
 FUNC_8(&VAR_10->old_fattr);
 FUNC_8(&VAR_10->new_fattr);
 VAR_10->complete = VAR_9;


 VAR_10->args.old_dir = FUNC_2(VAR_5);
 VAR_10->args.old_name = &VAR_7->d_name;
 VAR_10->args.new_dir = FUNC_2(VAR_6);
 VAR_10->args.new_name = &VAR_8->d_name;


 VAR_10->res.old_fattr = &VAR_10->old_fattr;
 VAR_10->res.new_fattr = &VAR_10->new_fattr;

 FUNC_9(VAR_5->i_sb);

 FUNC_3(VAR_10->old_dir)->rename_setup(&VAR_11, VAR_7, VAR_8);

 return FUNC_10(&VAR_12);
}
