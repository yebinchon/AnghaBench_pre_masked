
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iavf_adapter {int link_speed; } ;
struct TYPE_2__ {int duplex; int speed; int port; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct iavf_adapter* FUNC_2 (struct net_device*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_10,
       struct ethtool_link_ksettings *VAR_11)
{
 struct iavf_adapter *VAR_12 = FUNC_2(VAR_10);

 FUNC_0(VAR_11, VAR_9);
 VAR_11->base.autoneg = VAR_0;
 VAR_11->base.port = VAR_2;

 switch (VAR_12->link_speed) {
 case 128:
  VAR_11->base.speed = VAR_8;
  break;
 case 129:



  FUNC_1(VAR_10,
       "Speed is 25G, display not supported by this version of ethtool.\n");

  break;
 case 130:
  VAR_11->base.speed = VAR_6;
  break;
 case 132:
  VAR_11->base.speed = VAR_5;
  break;
 case 131:
  VAR_11->base.speed = VAR_4;
  break;
 case 133:
  VAR_11->base.speed = VAR_3;
  break;
 default:
  break;
 }
 VAR_11->base.duplex = VAR_1;

 return 0;
}
