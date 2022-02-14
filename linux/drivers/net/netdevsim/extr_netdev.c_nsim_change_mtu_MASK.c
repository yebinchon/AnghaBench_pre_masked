
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prog; } ;
struct netdevsim {TYPE_1__ xdp; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct netdevsim* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, int VAR_3)
{
 struct netdevsim *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->xdp.prog && VAR_3 > VAR_1)
  return -VAR_0;

 VAR_2->mtu = VAR_3;

 return 0;
}
