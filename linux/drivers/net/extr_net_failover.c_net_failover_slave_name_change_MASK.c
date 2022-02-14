
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_failover_info {int standby_dev; int primary_dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_failover_info* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
       struct net_device *VAR_2)
{
 struct net_device *VAR_3, *VAR_4;
 struct net_failover_info *VAR_5;

 VAR_5 = FUNC_1(VAR_2);

 VAR_3 = FUNC_2(VAR_5->primary_dev);
 VAR_4 = FUNC_2(VAR_5->standby_dev);

 if (VAR_1 != VAR_3 && VAR_1 != VAR_4)
  return -VAR_0;




 FUNC_0(VAR_1, ((void*)0));

 return 0;
}
