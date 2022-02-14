
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {int * rpc_proc; } ;
struct nfs_server {int caps; } ;
struct nfs_lock_context {TYPE_1__* open_context; } ;
struct nfs4_exception {scalar_t__ retry; int state; struct inode* inode; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfs_lock_context*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs_lock_context*) ;
 int FUNC_3 (struct rpc_message*,struct file*,struct file*,struct nfs_lock_context*,struct nfs_lock_context*,int ,int ,int ) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct nfs_server*,int,struct nfs4_exception*) ;
 int * VAR_4 ;
 int FUNC_6 (struct file*) ;
 struct nfs_lock_context* FUNC_7 (int ) ;
 int FUNC_8 (struct nfs_lock_context*) ;
 int FUNC_9 (struct inode*,int ) ;

int FUNC_10(struct file *VAR_5, struct file *VAR_6,
       loff_t VAR_7, loff_t VAR_8, loff_t VAR_9)
{
 struct rpc_message VAR_10 = {
  .rpc_proc = &VAR_4[VAR_2],
 };
 struct inode *VAR_11 = FUNC_4(VAR_5);
 struct nfs_server *VAR_12 = FUNC_1(FUNC_4(VAR_5));
 struct nfs_lock_context *VAR_13;
 struct nfs_lock_context *VAR_14;
 struct nfs4_exception VAR_15 = { };
 struct nfs4_exception VAR_16 = { };
 int VAR_17, VAR_18;

 if (!FUNC_9(VAR_11, VAR_3))
  return -VAR_1;

 VAR_13 = FUNC_7(FUNC_6(VAR_5));
 if (FUNC_0(VAR_13))
  return FUNC_2(VAR_13);

 VAR_15.inode = FUNC_4(VAR_5);
 VAR_15.state = VAR_13->open_context->state;

 VAR_14 = FUNC_7(FUNC_6(VAR_6));
 if (FUNC_0(VAR_14)) {
  VAR_17 = FUNC_2(VAR_14);
  goto out_put_src_lock;
 }

 VAR_16.inode = FUNC_4(VAR_6);
 VAR_16.state = VAR_14->open_context->state;

 do {
  VAR_17 = FUNC_3(&VAR_10, VAR_5, VAR_6, VAR_13, VAR_14,
     VAR_7, VAR_8, VAR_9);
  if (VAR_17 == -VAR_0 || VAR_17 == -VAR_1) {
   FUNC_1(VAR_11)->caps &= ~VAR_3;
   VAR_17 = -VAR_1;
   break;
  }

  VAR_18 = FUNC_5(VAR_12, VAR_17, &VAR_15);
  VAR_17 = FUNC_5(VAR_12, VAR_17, &VAR_16);
  if (!VAR_17)
   VAR_17 = VAR_18;
 } while (VAR_15.retry || VAR_16.retry);

 FUNC_8(VAR_14);
out_put_src_lock:
 FUNC_8(VAR_13);
 return VAR_17;
}
