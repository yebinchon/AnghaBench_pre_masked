
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pgio_header {TYPE_1__* rw_ops; } ;
struct TYPE_2__ {int (* rw_free_header ) (struct nfs_pgio_header*) ;} ;


 int FUNC_0 (struct nfs_pgio_header*) ;
 int FUNC_1 (struct nfs_pgio_header*) ;

void FUNC_2(struct nfs_pgio_header *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->rw_ops->rw_free_header(VAR_0);
}
