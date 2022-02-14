
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct __ip6_tnl_parm {int dummy; } ;
struct ip6_tnl {struct __ip6_tnl_parm parms; } ;


 struct ip6_tnl* FUNC_0 (struct net_device const*) ;

struct __ip6_tnl_parm
FUNC_1(const struct net_device *VAR_0)
{
 struct ip6_tnl *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->parms;
}
