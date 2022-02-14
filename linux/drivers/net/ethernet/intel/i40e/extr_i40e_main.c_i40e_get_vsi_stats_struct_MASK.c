
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int dummy; } ;
struct i40e_vsi {struct rtnl_link_stats64 net_stats; } ;



struct rtnl_link_stats64 *FUNC_0(struct i40e_vsi *VAR_0)
{
 return &VAR_0->net_stats;
}
