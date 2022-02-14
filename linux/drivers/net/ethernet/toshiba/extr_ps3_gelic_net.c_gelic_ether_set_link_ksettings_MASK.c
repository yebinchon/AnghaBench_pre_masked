
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct gelic_card {int dummy; } ;
struct TYPE_2__ {scalar_t__ autoneg; int speed; scalar_t__ duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (struct gelic_card*,int ) ;
 struct gelic_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_8,
          const struct ethtool_link_ksettings *VAR_9)
{
 struct gelic_card *VAR_10 = FUNC_1(VAR_8);
 u64 VAR_11;
 int VAR_12;

 if (VAR_9->base.autoneg == VAR_0) {
  VAR_11 = VAR_3;
 } else {
  switch (VAR_9->base.speed) {
  case 130:
   VAR_11 = VAR_5;
   break;
  case 129:
   VAR_11 = VAR_6;
   break;
  case 128:
   VAR_11 = VAR_7;
   break;
  default:
   return -VAR_2;
  }
  if (VAR_9->base.duplex == VAR_1) {
   VAR_11 |= VAR_4;
  } else if (VAR_9->base.speed == 128) {
   FUNC_2("1000 half duplex is not supported.\n");
   return -VAR_2;
  }
 }

 VAR_12 = FUNC_0(VAR_10, VAR_11);

 if (VAR_12)
  return VAR_12;

 return 0;
}
