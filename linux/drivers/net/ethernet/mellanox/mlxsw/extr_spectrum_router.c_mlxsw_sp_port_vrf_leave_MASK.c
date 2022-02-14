
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,struct net_device*,int ,int *) ;
 struct mlxsw_sp_rif* FUNC_1 (struct mlxsw_sp*,struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_1,
        struct net_device *VAR_2)
{
 struct mlxsw_sp_rif *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return;
 FUNC_0(VAR_1, VAR_2, VAR_0, ((void*)0));
}
