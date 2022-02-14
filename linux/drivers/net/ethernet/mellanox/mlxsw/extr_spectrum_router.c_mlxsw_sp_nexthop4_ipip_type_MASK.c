
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct fib_nh {TYPE_1__* nh_parent; struct net_device* fib_nh_dev; } ;
typedef enum mlxsw_sp_ipip_type { ____Placeholder_mlxsw_sp_ipip_type } mlxsw_sp_ipip_type ;
struct TYPE_2__ {scalar_t__ fib_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp const*,struct net_device*,int*) ;

__attribute__((used)) static bool FUNC_1(const struct mlxsw_sp *VAR_1,
     const struct fib_nh *VAR_2,
     enum mlxsw_sp_ipip_type *VAR_3)
{
 struct net_device *VAR_4 = VAR_2->fib_nh_dev;

 return VAR_4 &&
        VAR_2->nh_parent->fib_type == VAR_0 &&
        FUNC_0(VAR_1, VAR_4, VAR_3);
}
