
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_failover_info {int standby_dev; int primary_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int speed; int port; int duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct ethtool_link_ksettings*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_failover_info* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
       struct ethtool_link_ksettings *VAR_4)
{
 struct net_failover_info *VAR_5 = FUNC_2(VAR_3);
 struct net_device *VAR_6;

 VAR_6 = FUNC_3(VAR_5->primary_dev);
 if (!VAR_6 || !FUNC_1(VAR_6)) {
  VAR_6 = FUNC_3(VAR_5->standby_dev);
  if (!VAR_6 || !FUNC_1(VAR_6)) {
   VAR_4->base.duplex = VAR_0;
   VAR_4->base.port = VAR_1;
   VAR_4->base.speed = VAR_2;

   return 0;
  }
 }

 return FUNC_0(VAR_6, VAR_4);
}
