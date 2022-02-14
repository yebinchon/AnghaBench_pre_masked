
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_mr_table {int dummy; } ;
struct TYPE_3__ {int addr6; } ;
struct TYPE_4__ {TYPE_1__ source_mask; } ;
struct mlxsw_sp_mr_route {TYPE_2__ key; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(const struct mlxsw_sp_mr_table *VAR_0,
         const struct mlxsw_sp_mr_route *VAR_1)
{
 return FUNC_0(&VAR_1->key.source_mask.addr6);
}
