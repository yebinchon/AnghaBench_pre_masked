
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_failover_info {int standby_dev; int primary_dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct net_device*) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;
 struct net_failover_info* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct net_failover_info *VAR_1 = FUNC_2(VAR_0);
 struct net_device *VAR_2;

 FUNC_4();

 VAR_2 = FUNC_3(VAR_1->primary_dev);
 if (VAR_2) {
  FUNC_1(VAR_2, VAR_0);
  FUNC_0(VAR_2, VAR_0);
 }

 VAR_2 = FUNC_3(VAR_1->standby_dev);
 if (VAR_2) {
  FUNC_1(VAR_2, VAR_0);
  FUNC_0(VAR_2, VAR_0);
 }

 FUNC_5();
}
