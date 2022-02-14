
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_priv {scalar_t__ state; int restart_work; scalar_t__ restart_ms; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 struct can_priv* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_3)
{
 struct can_priv *VAR_4 = FUNC_2(VAR_3);




 if (VAR_4->restart_ms)
  return -VAR_2;
 if (VAR_4->state != VAR_0)
  return -VAR_1;

 FUNC_1(&VAR_4->restart_work);
 FUNC_0(VAR_3);

 return 0;
}
