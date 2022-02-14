
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int speed; int autoneg; int duplex; int port; scalar_t__ phy_address; } ;
struct TYPE_3__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;
struct de_private {int media_type; scalar_t__ media_lock; int media_advertise; int media_supported; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct de_private *VAR_9,
        struct ethtool_link_ksettings *VAR_10)
{
 FUNC_1(VAR_10->link_modes.supported,
      VAR_9->media_supported);
 VAR_10->base.phy_address = 0;
 FUNC_1(VAR_10->link_modes.advertising,
      VAR_9->media_advertise);

 switch (VAR_9->media_type) {
 case 129:
  VAR_10->base.port = VAR_6;
  break;
 case 128:
  VAR_10->base.port = VAR_7;
  break;
 default:
  VAR_10->base.port = VAR_8;
  break;
 }

 VAR_10->base.speed = 10;

 if (FUNC_0(VAR_5) & VAR_4)
  VAR_10->base.duplex = VAR_2;
 else
  VAR_10->base.duplex = VAR_3;

 if (VAR_9->media_lock)
  VAR_10->base.autoneg = VAR_0;
 else
  VAR_10->base.autoneg = VAR_1;


}
