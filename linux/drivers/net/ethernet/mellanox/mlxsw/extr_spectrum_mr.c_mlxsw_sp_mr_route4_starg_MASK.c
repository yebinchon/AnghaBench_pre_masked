
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_mr_table {int dummy; } ;
struct TYPE_3__ {scalar_t__ addr4; } ;
struct TYPE_4__ {TYPE_1__ source_mask; } ;
struct mlxsw_sp_mr_route {TYPE_2__ key; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const struct mlxsw_sp_mr_table *VAR_1,
         const struct mlxsw_sp_mr_route *VAR_2)
{
 return VAR_2->key.source_mask.addr4 == FUNC_0(VAR_0);
}
