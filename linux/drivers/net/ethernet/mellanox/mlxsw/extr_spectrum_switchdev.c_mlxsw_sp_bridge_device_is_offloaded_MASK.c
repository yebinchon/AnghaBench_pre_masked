
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp {int bridge; } ;


 int FUNC_0 (int ,struct net_device const*) ;

bool FUNC_1(const struct mlxsw_sp *VAR_0,
      const struct net_device *VAR_1)
{
 return !!FUNC_0(VAR_0->bridge, VAR_1);
}
