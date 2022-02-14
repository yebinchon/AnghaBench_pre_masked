
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop_group {struct fib_info* priv; } ;
struct fib_info {int dummy; } ;



__attribute__((used)) static struct fib_info *
FUNC_0(const struct mlxsw_sp_nexthop_group *VAR_0)
{
 return VAR_0->priv;
}
