
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vepa_fdb; } ;
struct TYPE_4__ {TYPE_1__ legacy; } ;
struct mlx5_eswitch {TYPE_2__ fdb_table; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5_eswitch *VAR_0)
{
 FUNC_0(VAR_0->dev, "Destroy VEPA Table\n");
 if (!VAR_0->fdb_table.legacy.vepa_fdb)
  return;

 FUNC_1(VAR_0->fdb_table.legacy.vepa_fdb);
 VAR_0->fdb_table.legacy.vepa_fdb = ((void*)0);
}
