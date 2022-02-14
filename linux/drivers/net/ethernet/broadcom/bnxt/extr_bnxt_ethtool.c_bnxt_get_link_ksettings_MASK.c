
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_link_settings {int phy_address; int port; int speed; void* duplex; int autoneg; } ;
struct ethtool_link_ksettings {struct ethtool_link_settings base; } ;
struct bnxt_link_info {scalar_t__ phy_link_status; int duplex; int req_duplex; scalar_t__ media_type; int phy_addr; int req_link_speed; int link_speed; scalar_t__ autoneg; } ;
struct bnxt {int link_lock; struct bnxt_link_info link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct bnxt_link_info*,struct ethtool_link_ksettings*) ;
 int FUNC_1 (struct bnxt_link_info*,struct ethtool_link_ksettings*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt_link_info*,struct ethtool_link_ksettings*) ;
 int FUNC_4 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_5 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct bnxt* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_19,
       struct ethtool_link_ksettings *VAR_20)
{
 struct bnxt *VAR_21 = FUNC_8(VAR_19);
 struct bnxt_link_info *VAR_22 = &VAR_21->link_info;
 struct ethtool_link_settings *VAR_23 = &VAR_20->base;
 u32 VAR_24;

 FUNC_5(VAR_20, VAR_18);
 FUNC_6(&VAR_21->link_lock);
 FUNC_3(VAR_22, VAR_20);

 FUNC_5(VAR_20, VAR_17);
 if (VAR_22->autoneg) {
  FUNC_0(VAR_22, VAR_20);
  FUNC_4(VAR_20,
           VAR_17, VAR_2);
  VAR_23->autoneg = VAR_1;
  if (VAR_22->phy_link_status == VAR_4)
   FUNC_1(VAR_22, VAR_20);
  VAR_24 = FUNC_2(VAR_22->link_speed);
  if (!FUNC_9(VAR_19))
   VAR_23->duplex = VAR_7;
  else if (VAR_22->duplex & VAR_3)
   VAR_23->duplex = VAR_5;
  else
   VAR_23->duplex = VAR_6;
 } else {
  VAR_23->autoneg = VAR_0;
  VAR_24 =
   FUNC_2(VAR_22->req_link_speed);
  VAR_23->duplex = VAR_6;
  if (VAR_22->req_duplex == VAR_3)
   VAR_23->duplex = VAR_5;
 }
 VAR_23->speed = VAR_24;

 VAR_23->port = VAR_11;
 if (VAR_22->media_type == VAR_14) {
  VAR_23->port = VAR_15;
  FUNC_4(VAR_20, VAR_18,
           VAR_16);
  FUNC_4(VAR_20, VAR_17,
           VAR_16);
 } else {
  FUNC_4(VAR_20, VAR_18,
           VAR_8);
  FUNC_4(VAR_20, VAR_17,
           VAR_8);

  if (VAR_22->media_type == VAR_12)
   VAR_23->port = VAR_9;
  else if (VAR_22->media_type ==
    VAR_13)
   VAR_23->port = VAR_10;
 }
 VAR_23->phy_address = VAR_22->phy_addr;
 FUNC_7(&VAR_21->link_lock);

 return 0;
}
