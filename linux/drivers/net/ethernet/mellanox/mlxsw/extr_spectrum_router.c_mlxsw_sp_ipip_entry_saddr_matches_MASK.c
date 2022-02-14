
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
typedef scalar_t__ u32 ;
struct mlxsw_sp_ipip_entry {int ipipt; int ol_dev; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef enum mlxsw_sp_ipip_type { ____Placeholder_mlxsw_sp_ipip_type } mlxsw_sp_ipip_type ;
struct TYPE_4__ {TYPE_1__** ipip_ops_arr; } ;
struct TYPE_3__ {int const ul_proto; } ;


 scalar_t__ FUNC_0 (int ) ;
 union mlxsw_sp_l3addr FUNC_1 (int const,int ) ;
 scalar_t__ FUNC_2 (union mlxsw_sp_l3addr*,union mlxsw_sp_l3addr*) ;

__attribute__((used)) static bool
FUNC_3(struct mlxsw_sp *VAR_0,
      const enum mlxsw_sp_l3proto VAR_1,
      union mlxsw_sp_l3addr VAR_2,
      u32 VAR_3,
      struct mlxsw_sp_ipip_entry *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4->ol_dev);
 enum mlxsw_sp_ipip_type VAR_6 = VAR_4->ipipt;
 union mlxsw_sp_l3addr VAR_7;

 if (VAR_0->router->ipip_ops_arr[VAR_6]->ul_proto != VAR_1)
  return 0;

 VAR_7 = FUNC_1(VAR_1, VAR_4->ol_dev);
 return VAR_5 == VAR_3 &&
        FUNC_2(&VAR_7, &VAR_2);
}
