
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int tk_status; } ;
struct nfs_renamedata {int (* complete ) (struct rpc_task*,struct nfs_renamedata*) ;int new_dentry; struct dentry* old_dentry; struct inode* new_dir; struct inode* old_dir; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* rename_done ) (struct rpc_task*,struct inode*,struct inode*) ;} ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*,struct inode*,struct inode*) ;
 int FUNC_3 (struct rpc_task*,struct nfs_renamedata*) ;
 int FUNC_4 (struct inode*,struct dentry*,struct inode*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs_renamedata *VAR_2 = VAR_1;
 struct inode *VAR_3 = VAR_2->old_dir;
 struct inode *VAR_4 = VAR_2->new_dir;
 struct dentry *VAR_5 = VAR_2->old_dentry;

 FUNC_4(VAR_3, VAR_5,
   VAR_4, VAR_2->new_dentry, VAR_0->tk_status);
 if (!FUNC_0(VAR_3)->rename_done(VAR_0, VAR_3, VAR_4)) {
  FUNC_1(VAR_0);
  return;
 }

 if (VAR_2->complete)
  VAR_2->complete(VAR_0, VAR_2);
}
