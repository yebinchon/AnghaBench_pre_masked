
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_failover_info {int standby_dev; int primary_dev; } ;
struct net_device {int mtu; } ;


 int FUNC_0 (struct net_device*,int) ;
 struct net_failover_info* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 struct net_failover_info *VAR_2 = FUNC_1(VAR_0);
 struct net_device *VAR_3, *VAR_4;
 int VAR_5 = 0;

 VAR_3 = FUNC_2(VAR_2->primary_dev);
 if (VAR_3) {
  VAR_5 = FUNC_0(VAR_3, VAR_1);
  if (VAR_5)
   return VAR_5;
 }

 VAR_4 = FUNC_2(VAR_2->standby_dev);
 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_4, VAR_1);
  if (VAR_5) {
   if (VAR_3)
    FUNC_0(VAR_3, VAR_0->mtu);
   return VAR_5;
  }
 }

 VAR_0->mtu = VAR_1;

 return 0;
}
