
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_rif {struct net_device const* dev; } ;



const struct net_device *FUNC_0(const struct mlxsw_sp_rif *VAR_0)
{
 return VAR_0->dev;
}
