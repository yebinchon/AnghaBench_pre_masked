
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_unlinkdata {TYPE_1__* dentry; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int (* unlink_rpc_prepare ) (struct rpc_task*,struct nfs_unlinkdata*) ;} ;
struct TYPE_3__ {int d_parent; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_task*,struct nfs_unlinkdata*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs_unlinkdata *VAR_2 = VAR_1;
 struct inode *VAR_3 = FUNC_1(VAR_2->dentry->d_parent);
 FUNC_0(VAR_3)->unlink_rpc_prepare(VAR_0, VAR_2);
}
