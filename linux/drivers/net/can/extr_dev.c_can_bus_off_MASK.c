
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_priv {scalar_t__ restart_ms; int restart_work; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct can_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct net_device *VAR_0)
{
 struct can_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0, "bus-off\n");

 FUNC_3(VAR_0);

 if (VAR_1->restart_ms)
  FUNC_4(&VAR_1->restart_work,
          FUNC_0(VAR_1->restart_ms));
}
