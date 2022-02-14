
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ip_tunnel_parm {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int addr4; } ;


 struct ip_tunnel_parm FUNC_0 (struct net_device const*) ;
 TYPE_1__ FUNC_1 (struct ip_tunnel_parm) ;

__attribute__((used)) static __be32 FUNC_2(const struct net_device *VAR_0)
{

 struct ip_tunnel_parm VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1).addr4;
}
