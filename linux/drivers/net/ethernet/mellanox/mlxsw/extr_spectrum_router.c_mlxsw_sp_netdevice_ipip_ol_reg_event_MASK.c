
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_ipip_entry {int dummy; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef enum mlxsw_sp_ipip_type { ____Placeholder_mlxsw_sp_ipip_type } mlxsw_sp_ipip_type ;
struct TYPE_4__ {TYPE_1__** ipip_ops_arr; } ;
struct TYPE_3__ {int ul_proto; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_ipip_entry*) ;
 int FUNC_1 (struct mlxsw_sp_ipip_entry*) ;
 int FUNC_2 (struct mlxsw_sp*,int,union mlxsw_sp_l3addr,int ,int *) ;
 int FUNC_3 (struct net_device*) ;
 struct mlxsw_sp_ipip_entry* FUNC_4 (struct mlxsw_sp*,int,struct net_device*) ;
 union mlxsw_sp_l3addr FUNC_5 (int,struct net_device*) ;
 int FUNC_6 (struct mlxsw_sp*,struct net_device*,int*) ;
 scalar_t__ FUNC_7 (struct mlxsw_sp*,struct net_device*,int) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp *VAR_0,
      struct net_device *VAR_1)
{
 struct mlxsw_sp_ipip_entry *VAR_2;
 enum mlxsw_sp_l3proto VAR_3;
 enum mlxsw_sp_ipip_type VAR_4;
 union mlxsw_sp_l3addr VAR_5;
 u32 VAR_6;

 FUNC_6(VAR_0, VAR_1, &VAR_4);
 if (FUNC_7(VAR_0, VAR_1, VAR_4)) {
  VAR_6 = FUNC_3(VAR_1);
  VAR_3 = VAR_0->router->ipip_ops_arr[VAR_4]->ul_proto;
  VAR_5 = FUNC_5(VAR_3, VAR_1);
  if (!FUNC_2(VAR_0, VAR_3,
         VAR_5, VAR_6,
         ((void*)0))) {
   VAR_2 = FUNC_4(VAR_0, VAR_4,
        VAR_1);
   if (FUNC_0(VAR_2))
    return FUNC_1(VAR_2);
  }
 }

 return 0;
}
