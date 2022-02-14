
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {TYPE_1__* pnfs_curr_ld; TYPE_2__* nfs_client; } ;
struct TYPE_4__ {int cl_mds_count; } ;
struct TYPE_3__ {int owner; int (* clear_layoutdriver ) (struct nfs_server*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct nfs_server*) ;

void
FUNC_4(struct nfs_server *VAR_0)
{
 if (VAR_0->pnfs_curr_ld) {
  if (VAR_0->pnfs_curr_ld->clear_layoutdriver)
   VAR_0->pnfs_curr_ld->clear_layoutdriver(VAR_0);

  if (FUNC_0(&VAR_0->nfs_client->cl_mds_count))
   FUNC_2(VAR_0->nfs_client);
  FUNC_1(VAR_0->pnfs_curr_ld->owner);
 }
 VAR_0->pnfs_curr_ld = ((void*)0);
}
