
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_priv {int restart_work; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 struct can_priv* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_0)
{
 struct can_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->restart_work);
 FUNC_0(VAR_0);
}
