
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_failover_info {int failover_stats; int standby_dev; int primary_dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*,struct net_device*,struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct net_failover_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 struct net_device* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1,
       struct net_device *VAR_2)
{
 struct net_device *VAR_3, *VAR_4;
 struct net_failover_info *VAR_5;

 VAR_5 = FUNC_3(VAR_2);

 VAR_3 = FUNC_8(VAR_5->primary_dev);
 VAR_4 = FUNC_8(VAR_5->standby_dev);

 if (VAR_1 != VAR_3 && VAR_1 != VAR_4)
  return -VAR_0;

 if ((VAR_3 && FUNC_2(VAR_3)) ||
     (VAR_4 && FUNC_2(VAR_4))) {
  FUNC_5(VAR_2);
  FUNC_7(VAR_2);
 } else {
  FUNC_0(VAR_2, &VAR_5->failover_stats);
  FUNC_4(VAR_2);
  FUNC_6(VAR_2);
 }

 FUNC_1(VAR_1, VAR_3, VAR_4);

 return 0;
}
