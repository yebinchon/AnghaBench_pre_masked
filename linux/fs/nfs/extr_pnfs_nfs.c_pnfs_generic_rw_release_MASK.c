
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pgio_header {TYPE_1__* mds_ops; int ds_clp; } ;
struct TYPE_2__ {int (* rpc_release ) (void*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

void FUNC_2(void *VAR_0)
{
 struct nfs_pgio_header *VAR_1 = VAR_0;

 FUNC_0(VAR_1->ds_clp);
 VAR_1->mds_ops->rpc_release(VAR_0);
}
