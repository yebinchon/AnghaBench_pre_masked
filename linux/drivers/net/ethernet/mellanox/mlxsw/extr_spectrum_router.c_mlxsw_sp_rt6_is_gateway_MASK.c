
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {int dummy; } ;
struct fib6_info {TYPE_1__* fib6_nh; } ;
struct TYPE_2__ {scalar_t__ fib_nh_gw_family; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp const*,struct fib6_info const*,int *) ;

__attribute__((used)) static bool FUNC_1(const struct mlxsw_sp *VAR_0,
        const struct fib6_info *VAR_1)
{
 return VAR_1->fib6_nh->fib_nh_gw_family ||
        FUNC_0(VAR_0, VAR_1, ((void*)0));
}
