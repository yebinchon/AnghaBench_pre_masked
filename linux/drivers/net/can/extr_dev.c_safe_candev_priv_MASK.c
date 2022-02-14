
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; int * rtnl_link_ops; } ;
struct can_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct can_priv* FUNC_0 (struct net_device*) ;

struct can_priv *FUNC_1(struct net_device *VAR_2)
{
 if (VAR_2->type != VAR_0 || VAR_2->rtnl_link_ops != &VAR_1)
  return ((void*)0);

 return FUNC_0(VAR_2);
}
