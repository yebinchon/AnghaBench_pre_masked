
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_failover_info {int standby_dev; int primary_dev; } ;
struct net_device {int dummy; } ;
struct failover {int failover_dev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct failover*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_failover_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (int ) ;
 struct net_device* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct net_device*) ;

void FUNC_10(struct failover *VAR_0)
{
 struct net_failover_info *VAR_1;
 struct net_device *VAR_2;
 struct net_device *VAR_3;

 if (!VAR_0)
  return;

 VAR_2 = FUNC_5(VAR_0->failover_dev);
 VAR_1 = FUNC_3(VAR_2);

 FUNC_4(VAR_2);

 FUNC_7();

 VAR_3 = FUNC_6(VAR_1->primary_dev);
 if (VAR_3)
  FUNC_0(VAR_3);

 VAR_3 = FUNC_6(VAR_1->standby_dev);
 if (VAR_3)
  FUNC_0(VAR_3);

 FUNC_1(VAR_0);

 FUNC_9(VAR_2);

 FUNC_8();

 FUNC_2(VAR_2);
}
