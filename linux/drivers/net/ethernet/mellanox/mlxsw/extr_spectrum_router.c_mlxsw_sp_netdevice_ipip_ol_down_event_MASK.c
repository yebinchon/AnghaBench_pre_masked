
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_ipip_entry {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_ipip_entry* FUNC_0 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_0,
        struct net_device *VAR_1)
{
 struct mlxsw_sp_ipip_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_0, VAR_2);
}
