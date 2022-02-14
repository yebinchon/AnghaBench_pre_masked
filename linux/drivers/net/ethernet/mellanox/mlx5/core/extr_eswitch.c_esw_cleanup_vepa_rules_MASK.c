
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vepa_star_rule; int * vepa_uplink_rule; } ;
struct TYPE_4__ {TYPE_1__ legacy; } ;
struct mlx5_eswitch {TYPE_2__ fdb_table; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mlx5_eswitch *VAR_0)
{
 if (VAR_0->fdb_table.legacy.vepa_uplink_rule)
  FUNC_0(VAR_0->fdb_table.legacy.vepa_uplink_rule);

 if (VAR_0->fdb_table.legacy.vepa_star_rule)
  FUNC_0(VAR_0->fdb_table.legacy.vepa_star_rule);

 VAR_0->fdb_table.legacy.vepa_uplink_rule = ((void*)0);
 VAR_0->fdb_table.legacy.vepa_star_rule = ((void*)0);
}
