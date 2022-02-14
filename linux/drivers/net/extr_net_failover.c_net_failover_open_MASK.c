
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_failover_info {int standby_dev; int primary_dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int *) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct net_failover_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_0)
{
 struct net_failover_info *VAR_1 = FUNC_3(VAR_0);
 struct net_device *VAR_2, *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_7(VAR_1->primary_dev);
 if (VAR_2) {
  VAR_4 = FUNC_1(VAR_2, ((void*)0));
  if (VAR_4)
   goto err_primary_open;
 }

 VAR_3 = FUNC_7(VAR_1->standby_dev);
 if (VAR_3) {
  VAR_4 = FUNC_1(VAR_3, ((void*)0));
  if (VAR_4)
   goto err_standby_open;
 }

 if ((VAR_2 && FUNC_2(VAR_2)) ||
     (VAR_3 && FUNC_2(VAR_3))) {
  FUNC_4(VAR_0);
  FUNC_6(VAR_0);
 }

 return 0;

err_standby_open:
 FUNC_0(VAR_2);
err_primary_open:
 FUNC_5(VAR_0);
 return VAR_4;
}
