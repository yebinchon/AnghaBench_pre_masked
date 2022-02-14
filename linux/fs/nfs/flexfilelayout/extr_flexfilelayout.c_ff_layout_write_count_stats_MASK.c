
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_pgio_header {int inode; } ;
struct TYPE_2__ {int * cl_metrics; } ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_task*,struct nfs_pgio_header*) ;
 int FUNC_2 (struct rpc_task*,int *) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_1, void *VAR_2)
{
 struct nfs_pgio_header *VAR_3 = VAR_2;

 FUNC_1(VAR_1, VAR_3);
 FUNC_2(VAR_1,
     &FUNC_0(VAR_3->inode)->cl_metrics[VAR_0]);
}
