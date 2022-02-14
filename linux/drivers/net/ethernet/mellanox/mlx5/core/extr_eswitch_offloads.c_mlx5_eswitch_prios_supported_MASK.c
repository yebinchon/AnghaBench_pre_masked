
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct mlx5_eswitch {TYPE_1__ fdb_table; } ;


 int VAR_0 ;

bool FUNC_0(struct mlx5_eswitch *VAR_1)
{
 return (!!(VAR_1->fdb_table.flags & VAR_0));
}
