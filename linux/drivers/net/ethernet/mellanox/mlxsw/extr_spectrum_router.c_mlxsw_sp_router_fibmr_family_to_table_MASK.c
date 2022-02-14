
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_vr {struct mlxsw_sp_mr_table** mr_table; } ;
struct mlxsw_sp_mr_table {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct mlxsw_sp_mr_table *
FUNC_0(struct mlxsw_sp_vr *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_2)
  return VAR_3->mr_table[VAR_0];
 else
  return VAR_3->mr_table[VAR_1];
}
