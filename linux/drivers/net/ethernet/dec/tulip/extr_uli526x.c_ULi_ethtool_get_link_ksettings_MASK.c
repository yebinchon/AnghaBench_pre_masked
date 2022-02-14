
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct uli526x_board_info {scalar_t__ op_mode; int media_mode; scalar_t__ link_failed; int phy_addr; } ;
struct TYPE_4__ {int autoneg; int duplex; int speed; int phy_address; int port; } ;
struct TYPE_3__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct uli526x_board_info *VAR_24,
          struct ethtool_link_ksettings *VAR_25)
{
 u32 VAR_26, VAR_27;

 VAR_26 = (VAR_17 |
                    VAR_16 |
                    VAR_15 |
                    VAR_14 |
                    VAR_18 |
                    VAR_19);

 VAR_27 = (VAR_3 |
                    VAR_2 |
                    VAR_1 |
                    VAR_0 |
                    VAR_4 |
                    VAR_5);

 FUNC_0(VAR_25->link_modes.supported,
      VAR_26);
 FUNC_0(VAR_25->link_modes.advertising,
      VAR_27);

 VAR_25->base.port = VAR_10;
 VAR_25->base.phy_address = VAR_24->phy_addr;

 VAR_25->base.speed = VAR_11;
 VAR_25->base.duplex = VAR_8;

 if(VAR_24->op_mode==VAR_21 || VAR_24->op_mode==VAR_20)
 {
  VAR_25->base.speed = VAR_12;
 }
 if(VAR_24->op_mode==VAR_22 || VAR_24->op_mode==VAR_20)
 {
  VAR_25->base.duplex = VAR_7;
 }
 if(VAR_24->link_failed)
 {
  VAR_25->base.speed = VAR_13;
  VAR_25->base.duplex = VAR_9;
 }

 if (VAR_24->media_mode & VAR_23)
 {
  VAR_25->base.autoneg = VAR_6;
 }
}
