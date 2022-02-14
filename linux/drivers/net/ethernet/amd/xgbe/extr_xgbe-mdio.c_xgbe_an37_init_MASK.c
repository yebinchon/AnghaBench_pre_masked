
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* an_advertising ) (struct xgbe_prv_data*,struct ethtool_link_ksettings*) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {int an_mode; int netdev; TYPE_2__ phy_if; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ethtool_link_ksettings*,int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;


 unsigned int FUNC_1 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,unsigned int) ;
 int VAR_12 ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ,char*,char*) ;
 int FUNC_4 (struct xgbe_prv_data*,struct ethtool_link_ksettings*) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_13)
{
 struct ethtool_link_ksettings VAR_14;
 unsigned int VAR_15;

 VAR_13->phy_if.phy_impl.an_advertising(VAR_13, &VAR_14);


 VAR_15 = FUNC_1(VAR_13, VAR_1, VAR_2);
 if (FUNC_0(&VAR_14, VAR_4))
  VAR_15 |= 0x100;
 else
  VAR_15 &= ~0x100;

 if (FUNC_0(&VAR_14, VAR_0))
  VAR_15 |= 0x80;
 else
  VAR_15 &= ~0x80;


 VAR_15 |= VAR_5;
 VAR_15 &= ~VAR_6;

 FUNC_2(VAR_13, VAR_1, VAR_2, VAR_15);


 VAR_15 = FUNC_1(VAR_13, VAR_1, VAR_3);
 VAR_15 &= ~VAR_11;
 VAR_15 &= ~VAR_9;

 switch (VAR_13->an_mode) {
 case 129:
  VAR_15 |= VAR_8;
  break;
 case 128:
  VAR_15 |= VAR_10;
  break;
 default:
  break;
 }

 VAR_15 |= VAR_7;

 FUNC_2(VAR_13, VAR_1, VAR_3, VAR_15);

 FUNC_3(VAR_13, VAR_12, VAR_13->netdev, "CL37 AN (%s) initialized\n",
    (VAR_13->an_mode == 129) ? "BaseX" : "SGMII");
}
