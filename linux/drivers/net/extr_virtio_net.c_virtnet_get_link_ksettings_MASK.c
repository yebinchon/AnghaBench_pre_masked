
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtnet_info {int duplex; int speed; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int port; int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 struct virtnet_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
          struct ethtool_link_ksettings *VAR_2)
{
 struct virtnet_info *VAR_3 = FUNC_0(VAR_1);

 VAR_2->base.speed = VAR_3->speed;
 VAR_2->base.duplex = VAR_3->duplex;
 VAR_2->base.port = VAR_0;

 return 0;
}
