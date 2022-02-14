
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_pnfs_ds {int dummy; } ;
struct TYPE_3__ {int deviceid; } ;
struct nfs4_file_layout_dsaddr {int ds_num; int stripe_indices; struct nfs4_pnfs_ds** ds_list; TYPE_1__ id_node; } ;
struct TYPE_4__ {int rcu; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfs4_file_layout_dsaddr*,int ) ;
 int FUNC_2 (struct nfs4_pnfs_ds*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct nfs4_file_layout_dsaddr *VAR_1)
{
 struct nfs4_pnfs_ds *VAR_2;
 int VAR_3;

 FUNC_3(&VAR_1->id_node.deviceid);

 for (VAR_3 = 0; VAR_3 < VAR_1->ds_num; VAR_3++) {
  VAR_2 = VAR_1->ds_list[VAR_3];
  if (VAR_2 != ((void*)0))
   FUNC_2(VAR_2);
 }
 FUNC_0(VAR_1->stripe_indices);
 FUNC_1(VAR_1, VAR_0.rcu);
}
