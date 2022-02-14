
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int an_info; } ;
struct TYPE_4__ {TYPE_1__ link_info; } ;
struct ice_port_info {TYPE_2__ phy; } ;
struct ice_aqc_set_phy_cfg_data {int caps; } ;
struct ethtool_link_ksettings {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_1 (struct net_device*,char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct ice_port_info *VAR_6, struct ethtool_link_ksettings *VAR_7,
    struct ice_aqc_set_phy_cfg_data *VAR_8,
    u8 VAR_9, u8 *VAR_10,
    struct net_device *VAR_11)
{
 int VAR_12 = 0;

 *VAR_10 = 0;


 if (VAR_9 == VAR_0) {

  if (!(VAR_6->phy.link_info.an_info & VAR_3)) {

   if (!FUNC_0(VAR_7,
           VAR_5,
           VAR_1)) {
    FUNC_1(VAR_11, "Autoneg not supported on this phy.\n");
    VAR_12 = -VAR_2;
   } else {

    VAR_8->caps |= VAR_4;
    *VAR_10 = 1;
   }
  }
 } else {

  if (VAR_6->phy.link_info.an_info & VAR_3) {



   if (FUNC_0(VAR_7,
          VAR_5,
          VAR_1)) {
    FUNC_1(VAR_11, "Autoneg cannot be disabled on this phy\n");
    VAR_12 = -VAR_2;
   } else {

    VAR_8->caps &= ~VAR_4;
    *VAR_10 = 1;
   }
  }
 }

 return VAR_12;
}
