
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int speed; int autoneg; int port; int duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_1 (struct net_device*,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
        struct ethtool_link_ksettings *VAR_7)
{
 u16 VAR_8;
 u16 VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_1(VAR_6, &VAR_8, &VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_0(VAR_7, VAR_5);
 FUNC_0(VAR_7, VAR_4);

 VAR_10 = FUNC_2(VAR_8, VAR_9);
 if (VAR_10 < 0)
  return -VAR_2;

 VAR_7->base.duplex = VAR_1;
 VAR_7->base.port = VAR_3;

 VAR_7->base.autoneg = VAR_0;

 VAR_7->base.speed = VAR_10;

 return 0;
}
