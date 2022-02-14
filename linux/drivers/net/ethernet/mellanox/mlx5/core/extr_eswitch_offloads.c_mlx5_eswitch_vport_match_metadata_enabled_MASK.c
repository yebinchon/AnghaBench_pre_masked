
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eswitch {int flags; } ;


 int VAR_0 ;

bool FUNC_0(const struct mlx5_eswitch *VAR_1)
{
 return !!(VAR_1->flags & VAR_0);
}
