
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {scalar_t__ tk_status; } ;
struct nfs_renamedata {struct dentry* old_dentry; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;

__attribute__((used)) static void
FUNC_1(struct rpc_task *VAR_0, struct nfs_renamedata *VAR_1)
{
 struct dentry *VAR_2 = VAR_1->old_dentry;

 if (VAR_0->tk_status != 0) {
  FUNC_0(VAR_2);
  return;
 }
}
