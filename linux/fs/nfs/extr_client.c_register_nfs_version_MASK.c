
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_subversion {int rpc_vers; TYPE_1__* rpc_ops; int list; } ;
struct TYPE_2__ {size_t version; } ;


 int FUNC_0 (int *,int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nfs_subversion *VAR_3)
{
 FUNC_1(&VAR_1);

 FUNC_0(&VAR_3->list, &VAR_2);
 VAR_0[VAR_3->rpc_ops->version] = VAR_3->rpc_vers;

 FUNC_2(&VAR_1);
}
