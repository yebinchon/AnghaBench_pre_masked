
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * promisc_grp; int * allmulti_grp; int * addr_grp; int * fdb; } ;
struct TYPE_4__ {TYPE_1__ legacy; } ;
struct mlx5_eswitch {TYPE_2__ fdb_table; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5_eswitch *VAR_0)
{
 FUNC_0(VAR_0->dev, "Destroy FDB Table\n");
 if (!VAR_0->fdb_table.legacy.fdb)
  return;

 if (VAR_0->fdb_table.legacy.promisc_grp)
  FUNC_1(VAR_0->fdb_table.legacy.promisc_grp);
 if (VAR_0->fdb_table.legacy.allmulti_grp)
  FUNC_1(VAR_0->fdb_table.legacy.allmulti_grp);
 if (VAR_0->fdb_table.legacy.addr_grp)
  FUNC_1(VAR_0->fdb_table.legacy.addr_grp);
 FUNC_2(VAR_0->fdb_table.legacy.fdb);

 VAR_0->fdb_table.legacy.fdb = ((void*)0);
 VAR_0->fdb_table.legacy.addr_grp = ((void*)0);
 VAR_0->fdb_table.legacy.allmulti_grp = ((void*)0);
 VAR_0->fdb_table.legacy.promisc_grp = ((void*)0);
}
