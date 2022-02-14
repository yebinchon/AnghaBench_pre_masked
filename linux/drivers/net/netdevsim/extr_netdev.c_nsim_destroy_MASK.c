
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdevsim {struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct netdevsim*) ;
 int FUNC_2 (struct netdevsim*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct net_device*) ;

void FUNC_6(struct netdevsim *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;

 FUNC_3();
 FUNC_5(VAR_1);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_4();
 FUNC_0(VAR_1);
}
