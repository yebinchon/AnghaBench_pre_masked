
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {scalar_t__ phydev; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {scalar_t__ phy_if; TYPE_2__* dev; } ;
struct TYPE_6__ {scalar_t__ speed; scalar_t__ autoneg; int duplex; } ;
struct ethtool_link_ksettings {TYPE_3__ base; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* adjust_link ) (struct hnae_handle*,int,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__,struct ethtool_link_ksettings const*) ;
 int FUNC_6 (struct hnae_handle*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_13,
          const struct ethtool_link_ksettings *VAR_14)
{
 struct hns_nic_priv *VAR_15 = FUNC_1(VAR_13);
 struct hnae_handle *VAR_16;
 u32 VAR_17;

 if (!FUNC_4(VAR_13))
  return -VAR_6;

 if (!VAR_15 || !VAR_15->ae_handle || !VAR_15->ae_handle->dev ||
     !VAR_15->ae_handle->dev->ops)
  return -VAR_4;

 VAR_16 = VAR_15->ae_handle;
 VAR_17 = VAR_14->base.speed;

 if (VAR_16->phy_if == VAR_8) {
  if (VAR_14->base.autoneg == VAR_0 ||
      VAR_17 != VAR_12 ||
      VAR_14->base.duplex != VAR_1)
   return -VAR_3;
 } else if (VAR_16->phy_if == VAR_7) {
  if (!VAR_13->phydev && VAR_14->base.autoneg == VAR_0)
   return -VAR_3;

  if (VAR_17 == VAR_11 && VAR_14->base.duplex == VAR_2)
   return -VAR_3;
  if (VAR_13->phydev)
   return FUNC_5(VAR_13->phydev, VAR_14);

  if ((VAR_17 != VAR_9 && VAR_17 != VAR_10 &&
       VAR_17 != VAR_11) || (VAR_14->base.duplex != VAR_2 &&
       VAR_14->base.duplex != VAR_1))
   return -VAR_3;
 } else {
  FUNC_0(VAR_13, "Not supported!");
  return -VAR_5;
 }

 if (VAR_16->dev->ops->adjust_link) {
  FUNC_2(VAR_13);
  VAR_16->dev->ops->adjust_link(VAR_16, (int)VAR_17, VAR_14->base.duplex);
  FUNC_3(VAR_13);
  return 0;
 }

 FUNC_0(VAR_13, "Not supported!");
 return -VAR_5;
}
