
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int base_addr; } ;
struct TYPE_4__ {int speed; int duplex; int port; } ;
struct TYPE_3__ {int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_15, struct ethtool_link_ksettings *VAR_16)
{
 u16 VAR_17;
 int VAR_18 = VAR_15->base_addr;
 u32 VAR_19;

 FUNC_0(0);

 VAR_17 = FUNC_2(VAR_18 + VAR_12);
 switch (VAR_17 >> 14) {
 case 0:
  VAR_16->base.port = VAR_5;
  break;
 case 1:
  VAR_16->base.port = VAR_3;
  break;
 case 3:
  VAR_16->base.port = VAR_4;
 default:
  break;
 }

 VAR_16->base.duplex = VAR_1;
 VAR_19 = 0;
 VAR_17 = FUNC_2(VAR_18 + VAR_13);
 if (VAR_17 & (1<<13))
  VAR_19 |= VAR_9;
 if (VAR_17 & (1<<12))
  VAR_19 |= VAR_10;
 if (VAR_17 & (1<<9)) {
  VAR_19 |= VAR_11 | VAR_8 |
    VAR_7;
  FUNC_0(4);
  VAR_17 = FUNC_2(VAR_18 + VAR_14);
  if (VAR_17 & VAR_2)
   VAR_16->base.duplex = VAR_0;
 }

 FUNC_1(VAR_16->link_modes.supported,
      VAR_19);
 VAR_16->base.speed = VAR_6;
 FUNC_0(1);
}
