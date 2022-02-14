
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_10__ {int requested_mode; } ;
struct TYPE_9__ {int autoneg_advertised; int type; int sfp_type; scalar_t__ multispeed_fiber; int media_type; } ;
struct TYPE_7__ {int (* get_link_capabilities ) (struct ixgbe_hw*,int*,int*) ;} ;
struct TYPE_8__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ fc; TYPE_3__ phy; TYPE_2__ mac; } ;
struct ixgbe_adapter {int link_speed; struct ixgbe_hw hw; } ;
struct TYPE_12__ {int advertising; int supported; } ;
struct TYPE_11__ {int duplex; int speed; void* port; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_6__ link_modes; TYPE_5__ base; } ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;






 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int*,int ) ;



 int FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ixgbe_hw*,int*,int*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_35,
        struct ethtool_link_ksettings *VAR_36)
{
 struct ixgbe_adapter *VAR_37 = FUNC_4(VAR_35);
 struct ixgbe_hw *VAR_38 = &VAR_37->hw;
 ixgbe_link_speed VAR_39;
 bool VAR_40 = 0;
 u32 VAR_41, VAR_42;

 FUNC_1(&VAR_41,
      VAR_36->link_modes.supported);

 VAR_38->mac.ops.get_link_capabilities(VAR_38, &VAR_39, &VAR_40);


 if (VAR_39 & 171)
  VAR_41 |= FUNC_2(VAR_38);
 if (VAR_39 & 169)
  VAR_41 |= (FUNC_3(VAR_38->phy.media_type)) ?
       VAR_27 :
       VAR_28;
 if (VAR_39 & 172)
  VAR_41 |= VAR_29;
 if (VAR_39 & 170)
  VAR_41 |= VAR_30;


 VAR_42 = VAR_41;

 if (VAR_38->phy.autoneg_advertised) {
  VAR_42 = 0;
  if (VAR_38->phy.autoneg_advertised & 170)
   VAR_42 |= VAR_4;
  if (VAR_38->phy.autoneg_advertised & 172)
   VAR_42 |= VAR_3;
  if (VAR_38->phy.autoneg_advertised & 171)
   VAR_42 |= VAR_41 & VAR_10;
  if (VAR_38->phy.autoneg_advertised & 169) {
   if (VAR_41 & VAR_27)
    VAR_42 |= VAR_1;
   else
    VAR_42 |= VAR_2;
  }
 } else {
  if (VAR_38->phy.multispeed_fiber && !VAR_40) {
   if (VAR_39 & 171)
    VAR_42 = VAR_0;
  }
 }

 if (VAR_40) {
  VAR_41 |= VAR_31;
  VAR_42 |= VAR_6;
  VAR_36->base.autoneg = VAR_12;
 } else
  VAR_36->base.autoneg = VAR_11;


 switch (VAR_37->hw.phy.type) {
 case 146:
 case 163:
 case 144:
 case 161:
 case 162:
  VAR_41 |= VAR_34;
  VAR_42 |= VAR_9;
  VAR_36->base.port = VAR_19;
  break;
 case 154:
  VAR_41 |= VAR_32;
  VAR_42 |= VAR_7;
  VAR_36->base.port = VAR_16;
  break;
 case 159:
 case 150:
 case 149:
 case 152:
 case 153:
 case 151:
 case 148:
 case 156:
 case 158:
 case 157:
 case 155:

  switch (VAR_37->hw.phy.sfp_type) {
  case 136:
  case 135:
  case 134:
   VAR_41 |= VAR_32;
   VAR_42 |= VAR_7;
   VAR_36->base.port = VAR_15;
   break;
  case 131:
  case 133:
  case 130:
  case 129:
  case 138:
  case 137:
  case 140:
  case 139:
   VAR_41 |= VAR_32;
   VAR_42 |= VAR_7;
   VAR_36->base.port = VAR_16;
   break;
  case 132:
   VAR_41 |= VAR_32;
   VAR_42 |= VAR_7;
   VAR_36->base.port = VAR_17;
   break;
  case 142:
  case 141:
   VAR_41 |= VAR_34;
   VAR_42 |= VAR_9;
   VAR_36->base.port = VAR_19;
   break;
  case 128:
  default:
   VAR_41 |= VAR_32;
   VAR_42 |= VAR_7;
   VAR_36->base.port = VAR_18;
   break;
  }
  break;
 case 143:
  VAR_41 |= VAR_32;
  VAR_42 |= VAR_7;
  VAR_36->base.port = VAR_17;
  break;
 case 145:
 case 160:
 case 147:
 default:
  VAR_41 |= VAR_32;
  VAR_42 |= VAR_7;
  VAR_36->base.port = VAR_18;
  break;
 }


 VAR_41 |= VAR_33;

 switch (VAR_38->fc.requested_mode) {
 case 166:
  VAR_42 |= VAR_8;
  break;
 case 165:
  VAR_42 |= VAR_8 |
         VAR_5;
  break;
 case 164:
  VAR_42 |= VAR_5;
  break;
 default:
  VAR_42 &= ~(VAR_8 |
           VAR_5);
 }

 if (FUNC_5(VAR_35)) {
  switch (VAR_37->link_speed) {
  case 171:
   VAR_36->base.speed = VAR_23;
   break;
  case 167:
   VAR_36->base.speed = VAR_25;
   break;
  case 168:
   VAR_36->base.speed = VAR_24;
   break;
  case 169:
   VAR_36->base.speed = VAR_22;
   break;
  case 172:
   VAR_36->base.speed = VAR_21;
   break;
  case 170:
   VAR_36->base.speed = VAR_20;
   break;
  default:
   break;
  }
  VAR_36->base.duplex = VAR_13;
 } else {
  VAR_36->base.speed = VAR_26;
  VAR_36->base.duplex = VAR_14;
 }

 FUNC_0(VAR_36->link_modes.supported,
      VAR_41);
 FUNC_0(VAR_36->link_modes.advertising,
      VAR_42);

 return 0;
}
