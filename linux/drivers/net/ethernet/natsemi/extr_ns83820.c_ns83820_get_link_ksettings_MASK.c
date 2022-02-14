
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ns83820 {int CFG_cache; scalar_t__ base; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int autoneg; int speed; int duplex; int port; } ;
struct TYPE_3__ {int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_26,
          struct ethtool_link_ksettings *VAR_27)
{
 struct ns83820 *VAR_28 = FUNC_0(VAR_26);
 u32 VAR_29, VAR_30, VAR_31;
 int VAR_32 = 0;
 u32 VAR_33;
 VAR_29 = FUNC_2(VAR_28->base + VAR_2) ^ VAR_10;
 VAR_30 = FUNC_2(VAR_28->base + VAR_23);
 VAR_31 = FUNC_2(VAR_28->base + VAR_24);

 VAR_32 = (VAR_29 & VAR_3) ? 1 : 0;

 VAR_33 = VAR_20;

 if (VAR_28->CFG_cache & VAR_5) {

  VAR_33 |= VAR_15 |
     VAR_14 |
     VAR_21;
  VAR_27->base.port = VAR_8;
 } else {

  VAR_33 |= VAR_19 |
   VAR_18 | VAR_17 |
   VAR_16 | VAR_15 |
   VAR_14 |
   VAR_22;
  VAR_27->base.port = VAR_9;
 }

 FUNC_1(VAR_27->link_modes.supported,
      VAR_33);

 VAR_27->base.duplex = VAR_32 ? VAR_6 : VAR_7;
 switch (VAR_29 / VAR_4 & 3) {
 case 2:
  VAR_27->base.speed = VAR_13;
  break;
 case 1:
  VAR_27->base.speed = VAR_12;
  break;
 default:
  VAR_27->base.speed = VAR_11;
  break;
 }
 VAR_27->base.autoneg = (VAR_31 & VAR_25)
  ? VAR_1 : VAR_0;
 return 0;
}
