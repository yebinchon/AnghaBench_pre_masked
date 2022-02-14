
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rtnl_link_stats64 {int dummy; } ;
struct nfp_repr {TYPE_1__* port; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int type; } ;





 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 struct nfp_repr* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*,struct rtnl_link_stats64*) ;
 int FUNC_4 (TYPE_1__*,struct rtnl_link_stats64*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct nfp_repr *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_0(!VAR_2->port))
  return;

 switch (VAR_2->port->type) {
 case 129:
  if (!FUNC_1(VAR_2->port))
   break;
  FUNC_3(VAR_2->port, VAR_1);
  break;
 case 130:
 case 128:
  FUNC_4(VAR_2->port, VAR_1);
 default:
  break;
 }
}
