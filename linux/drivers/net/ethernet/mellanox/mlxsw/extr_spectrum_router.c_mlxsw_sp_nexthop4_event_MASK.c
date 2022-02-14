
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nexthop_key {struct fib_nh* fib_nh; } ;
struct mlxsw_sp_nexthop {int nh_grp; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct fib_nh {int dummy; } ;
struct TYPE_2__ {scalar_t__ aborted; } ;




 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*,struct fib_nh*) ;
 int FUNC_3 (struct mlxsw_sp*,int ) ;
 struct mlxsw_sp_nexthop* FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_key) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp *VAR_0,
        unsigned long VAR_1, struct fib_nh *VAR_2)
{
 struct mlxsw_sp_nexthop_key VAR_3;
 struct mlxsw_sp_nexthop *VAR_4;

 if (VAR_0->router->aborted)
  return;

 VAR_3.fib_nh = VAR_2;
 VAR_4 = FUNC_4(VAR_0, VAR_3);
 if (FUNC_0(!VAR_4))
  return;

 switch (VAR_1) {
 case 129:
  FUNC_2(VAR_0, VAR_4, VAR_2);
  break;
 case 128:
  FUNC_1(VAR_0, VAR_4);
  break;
 }

 FUNC_3(VAR_0, VAR_4->nh_grp);
}
