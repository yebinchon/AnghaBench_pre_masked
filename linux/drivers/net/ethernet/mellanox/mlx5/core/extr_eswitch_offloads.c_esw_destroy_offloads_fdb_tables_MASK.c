
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ns; int slow_fdb; int miss_grp; int peer_miss_grp; int send_to_vport_grp; int miss_rule_uni; int miss_rule_multi; } ;
struct TYPE_4__ {TYPE_1__ offloads; } ;
struct mlx5_eswitch {TYPE_2__ fdb_table; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlx5_eswitch*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct mlx5_eswitch *VAR_1)
{
 if (!VAR_1->fdb_table.offloads.slow_fdb)
  return;

 FUNC_0(VAR_1->dev, "Destroy offloads FDB Tables\n");
 FUNC_2(VAR_1->fdb_table.offloads.miss_rule_multi);
 FUNC_2(VAR_1->fdb_table.offloads.miss_rule_uni);
 FUNC_3(VAR_1->fdb_table.offloads.send_to_vport_grp);
 FUNC_3(VAR_1->fdb_table.offloads.peer_miss_grp);
 FUNC_3(VAR_1->fdb_table.offloads.miss_grp);

 FUNC_4(VAR_1->fdb_table.offloads.slow_fdb);
 FUNC_1(VAR_1);

 FUNC_5(VAR_1->fdb_table.offloads.ns,
         VAR_0);
}
