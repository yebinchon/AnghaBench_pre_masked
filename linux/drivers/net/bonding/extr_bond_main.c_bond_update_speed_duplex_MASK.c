
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {scalar_t__ speed; int duplex; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ speed; int duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
typedef scalar_t__ __u32 ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,struct ethtool_link_ksettings*) ;

__attribute__((used)) static int FUNC_1(struct slave *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 struct ethtool_link_ksettings VAR_4;
 int VAR_5;

 VAR_2->speed = VAR_1;
 VAR_2->duplex = VAR_0;

 VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return 1;
 if (VAR_4.base.speed == 0 || VAR_4.base.speed == ((__u32)-1))
  return 1;
 switch (VAR_4.base.duplex) {
 case 129:
 case 128:
  break;
 default:
  return 1;
 }

 VAR_2->speed = VAR_4.base.speed;
 VAR_2->duplex = VAR_4.base.duplex;

 return 0;
}
