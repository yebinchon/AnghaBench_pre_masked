
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_failover_info {int standby_dev; int primary_dev; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 struct net_failover_info* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, __be16 VAR_1,
      u16 VAR_2)
{
 struct net_failover_info *VAR_3 = FUNC_0(VAR_0);
 struct net_device *VAR_4;

 VAR_4 = FUNC_1(VAR_3->primary_dev);
 if (VAR_4)
  FUNC_2(VAR_4, VAR_1, VAR_2);

 VAR_4 = FUNC_1(VAR_3->standby_dev);
 if (VAR_4)
  FUNC_2(VAR_4, VAR_1, VAR_2);

 return 0;
}
