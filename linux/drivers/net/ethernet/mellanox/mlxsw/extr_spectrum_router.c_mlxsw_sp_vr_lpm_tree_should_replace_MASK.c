
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mlxsw_sp_vr {int dummy; } ;
struct mlxsw_sp_fib {TYPE_1__* lpm_tree; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
struct TYPE_2__ {scalar_t__ id; } ;


 struct mlxsw_sp_fib* FUNC_0 (struct mlxsw_sp_vr*,int) ;
 int FUNC_1 (struct mlxsw_sp_vr*) ;

__attribute__((used)) static bool
FUNC_2(struct mlxsw_sp_vr *VAR_0,
        enum mlxsw_sp_l3proto VAR_1, u8 VAR_2)
{
 struct mlxsw_sp_fib *VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (!FUNC_1(VAR_0))
  return 0;
 if (VAR_3->lpm_tree->id == VAR_2)
  return 1;
 return 0;
}
