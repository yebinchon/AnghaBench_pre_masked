
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_route {scalar_t__ route_action; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_mr_route*,int) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp_mr_route *VAR_1)
{
 bool VAR_2;

 VAR_2 = VAR_1->route_action != VAR_0;
 FUNC_0(VAR_1, VAR_2);
}
