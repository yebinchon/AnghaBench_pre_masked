
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int link; } ;
struct ip_tunnel {TYPE_1__ parms; } ;


 struct net_device* FUNC_0 (struct net*,int ) ;
 struct net* FUNC_1 (struct net_device const*) ;
 struct ip_tunnel* FUNC_2 (struct net_device const*) ;

__attribute__((used)) static struct net_device *
FUNC_3(const struct net_device *VAR_0)
{
 struct ip_tunnel *VAR_1 = FUNC_2(VAR_0);
 struct net *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1->parms.link);
}
