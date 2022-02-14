
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct virtnet_info {int duplex; int speed; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct virtnet_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ethtool_link_ksettings const*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
          const struct ethtool_link_ksettings *VAR_2)
{
 struct virtnet_info *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;

 VAR_4 = VAR_2->base.speed;

 if (!FUNC_1(VAR_4) ||
     !FUNC_0(VAR_2->base.duplex) ||
     !FUNC_3(VAR_2))
  return -VAR_0;
 VAR_3->speed = VAR_4;
 VAR_3->duplex = VAR_2->base.duplex;

 return 0;
}
