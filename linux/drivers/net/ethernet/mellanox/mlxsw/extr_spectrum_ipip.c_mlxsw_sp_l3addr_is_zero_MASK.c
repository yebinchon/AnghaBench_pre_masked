
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union mlxsw_sp_l3addr {int member_0; } ;
typedef int naddr ;


 int FUNC_0 (union mlxsw_sp_l3addr*,union mlxsw_sp_l3addr*,int) ;

bool FUNC_1(union mlxsw_sp_l3addr VAR_0)
{
 union mlxsw_sp_l3addr VAR_1 = {0};

 return !FUNC_0(&VAR_0, &VAR_1, sizeof(VAR_1));
}
