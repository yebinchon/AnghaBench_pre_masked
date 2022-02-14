
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef void* u16 ;
struct net_device {int dummy; } ;
struct ethtool_link_settings {scalar_t__ autoneg; scalar_t__ duplex; int speed; } ;
struct ethtool_link_ksettings {struct ethtool_link_settings base; } ;
struct bnxt_link_info {scalar_t__ phy_type; scalar_t__ media_type; void* advertising; int autoneg; int req_duplex; void* req_link_speed; void* support_auto_speeds; } ;
struct bnxt {int link_lock; struct bnxt_link_info link_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct ethtool_link_ksettings const*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct bnxt*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct bnxt*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct bnxt* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_10,
      const struct ethtool_link_ksettings *VAR_11)
{
 struct bnxt *VAR_12 = FUNC_7(VAR_10);
 struct bnxt_link_info *VAR_13 = &VAR_12->link_info;
 const struct ethtool_link_settings *VAR_14 = &VAR_11->base;
 bool VAR_15 = 0;
 u16 VAR_16 = 0;
 u32 VAR_17;
 int VAR_18 = 0;

 if (!FUNC_1(VAR_12))
  return -VAR_5;

 FUNC_4(&VAR_12->link_lock);
 if (VAR_14->autoneg == VAR_0) {
  FUNC_0(VAR_16, VAR_11,
     VAR_9);
  VAR_13->autoneg |= VAR_1;
  if (!VAR_16)
   VAR_13->advertising = VAR_13->support_auto_speeds;
  else
   VAR_13->advertising = VAR_16;



  VAR_15 = 1;
 } else {
  u16 VAR_19;
  u8 VAR_20 = VAR_13->phy_type;

  if (VAR_20 == VAR_7 ||
      VAR_20 == VAR_8 ||
      VAR_13->media_type == VAR_6) {
   FUNC_6(VAR_10, "10GBase-T devices must autoneg\n");
   VAR_18 = -VAR_4;
   goto set_setting_exit;
  }
  if (VAR_14->duplex == VAR_3) {
   FUNC_6(VAR_10, "HALF DUPLEX is not supported!\n");
   VAR_18 = -VAR_4;
   goto set_setting_exit;
  }
  VAR_17 = VAR_14->speed;
  VAR_19 = FUNC_2(VAR_10, VAR_17);
  if (!VAR_19) {
   VAR_18 = -VAR_4;
   goto set_setting_exit;
  }
  VAR_13->req_link_speed = VAR_19;
  VAR_13->req_duplex = VAR_2;
  VAR_13->autoneg = 0;
  VAR_13->advertising = 0;
 }

 if (FUNC_8(VAR_10))
  VAR_18 = FUNC_3(VAR_12, VAR_15, 0);

set_setting_exit:
 FUNC_5(&VAR_12->link_lock);
 return VAR_18;
}
