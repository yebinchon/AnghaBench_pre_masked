
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct mlx5_eswitch {TYPE_1__ fdb_table; } ;


 int VAR_0 ;
 int VAR_1 ;

u32 FUNC_0(struct mlx5_eswitch *VAR_2)
{
 if (VAR_2->fdb_table.flags & VAR_0)
  return VAR_1;

 return 0;
}
