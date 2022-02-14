
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nfs_renameres* rpc_resp; } ;
struct rpc_task {TYPE_1__ tk_msg; } ;
struct nfs_renameres {int new_fattr; int old_fattr; } ;
struct inode {int dummy; } ;


 scalar_t__ FUNC_0 (struct rpc_task*,struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;

__attribute__((used)) static int
FUNC_2(struct rpc_task *VAR_0, struct inode *VAR_1,
        struct inode *VAR_2)
{
 struct nfs_renameres *VAR_3;

 if (FUNC_0(VAR_0, VAR_1))
  return 0;
 VAR_3 = VAR_0->tk_msg.rpc_resp;

 FUNC_1(VAR_1, VAR_3->old_fattr);
 FUNC_1(VAR_2, VAR_3->new_fattr);
 return 1;
}
