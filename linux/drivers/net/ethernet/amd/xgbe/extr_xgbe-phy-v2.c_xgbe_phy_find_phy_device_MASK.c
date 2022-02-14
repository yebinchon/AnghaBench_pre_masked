
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* set_ext_mii_mode ) (struct xgbe_prv_data*,int ,scalar_t__) ;} ;
struct TYPE_6__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_3__ link_modes; } ;
struct TYPE_4__ {struct ethtool_link_ksettings lks; } ;
struct xgbe_prv_data {int netdev; TYPE_2__ hw_if; scalar_t__ an_again; struct xgbe_phy_data* phy_data; TYPE_1__ phy; } ;
struct xgbe_phy_data {scalar_t__ phydev_mode; scalar_t__ port_mode; struct phy_device* phydev; int mdio_addr; int mii; int sfp_phy_avail; } ;
struct phy_device {int advertising; int dev_flags; int phy_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct phy_device* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct xgbe_prv_data*,int ,int ,char*,int ) ;
 int FUNC_5 (int ,struct phy_device*,int ,int ) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (struct phy_device*) ;
 int FUNC_8 (struct phy_device*) ;
 int FUNC_9 (struct phy_device*) ;
 int FUNC_10 (struct xgbe_prv_data*,int ,scalar_t__) ;
 int FUNC_11 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_12(struct xgbe_prv_data *VAR_6)
{
 struct ethtool_link_ksettings *VAR_7 = &VAR_6->phy.lks;
 struct xgbe_phy_data *VAR_8 = VAR_6->phy_data;
 struct phy_device *VAR_9;
 int VAR_10;


 if (VAR_8->phydev)
  return 0;


 VAR_6->an_again = 0;


 if (VAR_8->phydev_mode == VAR_3)
  return 0;


 if ((VAR_8->port_mode == VAR_4) &&
     !VAR_8->sfp_phy_avail)
  return 0;


 VAR_10 = VAR_6->hw_if.set_ext_mii_mode(VAR_6, VAR_8->mdio_addr,
         VAR_8->phydev_mode);
 if (VAR_10) {
  FUNC_3(VAR_6->netdev,
      "mdio port/clause not compatible (%u/%u)\n",
      VAR_8->mdio_addr, VAR_8->phydev_mode);
  return VAR_10;
 }


 VAR_9 = FUNC_1(VAR_8->mii, VAR_8->mdio_addr,
    (VAR_8->phydev_mode == VAR_2));
 if (FUNC_0(VAR_9)) {
  FUNC_3(VAR_6->netdev, "get_phy_device failed\n");
  return -VAR_0;
 }
 FUNC_4(VAR_6, VAR_5, VAR_6->netdev, "external PHY id is %#010x\n",
    VAR_9->phy_id);



 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_6->netdev, "phy_device_register failed\n");
  FUNC_6(VAR_9);
  return VAR_10;
 }

 VAR_10 = FUNC_5(VAR_6->netdev, VAR_9, VAR_9->dev_flags,
    VAR_1);
 if (VAR_10) {
  FUNC_3(VAR_6->netdev, "phy_attach_direct failed\n");
  FUNC_8(VAR_9);
  FUNC_6(VAR_9);
  return VAR_10;
 }
 VAR_8->phydev = VAR_9;

 FUNC_11(VAR_6);

 FUNC_2(VAR_9->advertising, VAR_9->advertising,
       VAR_7->link_modes.advertising);

 FUNC_9(VAR_8->phydev);

 return 0;
}
