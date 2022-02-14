
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_pgio_header {int inode; } ;
struct TYPE_2__ {int (* pgio_rpc_prepare ) (struct rpc_task*,struct nfs_pgio_header*) ;} ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_task*,int) ;
 int FUNC_2 (struct rpc_task*,struct nfs_pgio_header*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs_pgio_header *VAR_2 = VAR_1;
 int VAR_3;
 VAR_3 = FUNC_0(VAR_2->inode)->pgio_rpc_prepare(VAR_0, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_0, VAR_3);
}
