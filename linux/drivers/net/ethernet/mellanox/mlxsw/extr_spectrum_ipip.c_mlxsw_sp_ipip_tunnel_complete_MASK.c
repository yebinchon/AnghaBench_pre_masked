
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
struct net_device {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;


 union mlxsw_sp_l3addr FUNC_0 (int,struct net_device const*) ;
 union mlxsw_sp_l3addr FUNC_1 (int,struct net_device const*) ;
 int FUNC_2 (union mlxsw_sp_l3addr) ;

__attribute__((used)) static bool FUNC_3(enum mlxsw_sp_l3proto VAR_0,
       const struct net_device *VAR_1)
{
 union mlxsw_sp_l3addr VAR_2 = FUNC_1(VAR_0, VAR_1);
 union mlxsw_sp_l3addr VAR_3 = FUNC_0(VAR_0, VAR_1);






 return !FUNC_2(VAR_2) &&
        !FUNC_2(VAR_3);
}
