
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_mr_table {int route_list; TYPE_1__* vifs; } ;
struct TYPE_2__ {scalar_t__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

bool FUNC_1(const struct mlxsw_sp_mr_table *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->vifs[VAR_2].dev)
   return 0;
 return FUNC_0(&VAR_1->route_list);
}
