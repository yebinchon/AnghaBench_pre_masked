
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {int dummy; } ;
struct fib6_info {TYPE_1__* fib6_nh; } ;
typedef enum mlxsw_sp_ipip_type { ____Placeholder_mlxsw_sp_ipip_type } mlxsw_sp_ipip_type ;
struct TYPE_2__ {scalar_t__ fib_nh_dev; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp const*,scalar_t__,int*) ;

__attribute__((used)) static bool FUNC_1(const struct mlxsw_sp *VAR_0,
     const struct fib6_info *VAR_1,
     enum mlxsw_sp_ipip_type *VAR_2)
{
 return VAR_1->fib6_nh->fib_nh_dev &&
        FUNC_0(VAR_0, VAR_1->fib6_nh->fib_nh_dev, VAR_2);
}
