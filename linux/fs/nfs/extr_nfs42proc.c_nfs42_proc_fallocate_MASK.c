
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {int dummy; } ;
struct nfs_server {int dummy; } ;
struct nfs_lock_context {TYPE_1__* open_context; } ;
struct nfs4_exception {scalar_t__ retry; int state; int inode; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfs_lock_context*) ;
 struct nfs_server* FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_lock_context*) ;
 int FUNC_3 (struct rpc_message*,struct file*,struct nfs_lock_context*,int ,int ) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct nfs_server*,int,struct nfs4_exception*) ;
 int FUNC_6 (struct file*) ;
 struct nfs_lock_context* FUNC_7 (int ) ;
 int FUNC_8 (struct nfs_lock_context*) ;

__attribute__((used)) static int FUNC_9(struct rpc_message *VAR_2, struct file *VAR_3,
    loff_t VAR_4, loff_t VAR_5)
{
 struct nfs_server *VAR_6 = FUNC_1(FUNC_4(VAR_3));
 struct nfs4_exception VAR_7 = { };
 struct nfs_lock_context *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(FUNC_6(VAR_3));
 if (FUNC_0(VAR_8))
  return FUNC_2(VAR_8);

 VAR_7.inode = FUNC_4(VAR_3);
 VAR_7.state = VAR_8->open_context->state;

 do {
  VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_8, VAR_4, VAR_5);
  if (VAR_9 == -VAR_0) {
   VAR_9 = -VAR_1;
   break;
  }
  VAR_9 = FUNC_5(VAR_6, VAR_9, &VAR_7);
 } while (VAR_7.retry);

 FUNC_8(VAR_8);
 return VAR_9;
}
