
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_vif {int vif_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct mlxsw_sp_mr_vif *VAR_2)
{
 return !(VAR_2->vif_flags & (VAR_1 | VAR_0));
}
