
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_renamedata {int old_dir; } ;
struct TYPE_2__ {int (* rename_rpc_prepare ) (struct rpc_task*,struct nfs_renamedata*) ;} ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_task*,struct nfs_renamedata*) ;

__attribute__((used)) static void FUNC_2(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs_renamedata *VAR_2 = VAR_1;
 FUNC_0(VAR_2->old_dir)->rename_rpc_prepare(VAR_0, VAR_2);
}
