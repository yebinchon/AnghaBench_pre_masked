
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_ptys_reg {int eth_proto_lp_adv; int eth_proto_admin; int eth_proto_cap; int eth_proto_oper; int proto_mask; int local_port; } ;
struct TYPE_9__ {int flags; } ;
struct mlx4_en_priv {TYPE_4__ port_state; TYPE_2__* prof; TYPE_1__* mdev; int port; } ;
struct TYPE_10__ {int eth_tp_mdix_ctrl; int eth_tp_mdix; scalar_t__ mdio_support; scalar_t__ phy_address; int autoneg; int port; } ;
struct TYPE_8__ {int lp_advertising; int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_5__ base; TYPE_3__ link_modes; } ;
typedef int ptys_reg ;
struct TYPE_7__ {int tx_pause; int rx_pause; } ;
struct TYPE_6__ {int dev; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct mlx4_en_priv*,char*,int ) ;
 int FUNC_2 (struct mlx4_en_priv*,char*,int) ;
 int FUNC_3 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_4 (struct ethtool_link_ksettings*,int ) ;
 int VAR_14 ;
 int FUNC_5 (struct mlx4_ptys_reg*,int ,int) ;
 int FUNC_6 (int ,int ,struct mlx4_ptys_reg*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 struct mlx4_en_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,struct mlx4_ptys_reg*) ;
 int FUNC_11 (struct mlx4_ptys_reg*) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_12(struct net_device *VAR_16,
    struct ethtool_link_ksettings *VAR_17)
{
 struct mlx4_en_priv *VAR_18 = FUNC_8(VAR_16);
 struct mlx4_ptys_reg VAR_19;
 u32 VAR_20;
 int VAR_21;

 FUNC_5(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.local_port = VAR_18->port;
 VAR_19.proto_mask = VAR_10;
 VAR_21 = FUNC_6(VAR_18->mdev->dev,
       VAR_8, &VAR_19);
 if (VAR_21) {
  FUNC_2(VAR_18, "Failed to run mlx4_ACCESS_PTYS_REG status(%x)",
   VAR_21);
  return VAR_21;
 }
 FUNC_1(VAR_5, VAR_18, "ptys_reg.proto_mask       %x\n",
        VAR_19.proto_mask);
 FUNC_1(VAR_5, VAR_18, "ptys_reg.eth_proto_cap    %x\n",
        FUNC_0(VAR_19.eth_proto_cap));
 FUNC_1(VAR_5, VAR_18, "ptys_reg.eth_proto_admin  %x\n",
        FUNC_0(VAR_19.eth_proto_admin));
 FUNC_1(VAR_5, VAR_18, "ptys_reg.eth_proto_oper   %x\n",
        FUNC_0(VAR_19.eth_proto_oper));
 FUNC_1(VAR_5, VAR_18, "ptys_reg.eth_proto_lp_adv %x\n",
        FUNC_0(VAR_19.eth_proto_lp_adv));


 FUNC_4(VAR_17, VAR_15);
 FUNC_4(VAR_17, VAR_13);

 FUNC_10(VAR_17->link_modes.supported,
        &VAR_19);

 VAR_20 = FUNC_0(VAR_19.eth_proto_cap);
 FUNC_9(VAR_17->link_modes.supported,
           VAR_20, VAR_12);

 VAR_20 = FUNC_0(VAR_19.eth_proto_admin);
 FUNC_9(VAR_17->link_modes.advertising,
           VAR_20, VAR_0);

 FUNC_3(VAR_17, VAR_15,
          VAR_11);
 FUNC_3(VAR_17, VAR_15,
          VAR_3);

 if (VAR_18->prof->tx_pause)
  FUNC_3(VAR_17,
           VAR_13, VAR_11);
 if (VAR_18->prof->tx_pause ^ VAR_18->prof->rx_pause)
  FUNC_3(VAR_17,
           VAR_13, VAR_3);

 VAR_17->base.port = FUNC_11(&VAR_19);

 if (FUNC_7(VAR_16)) {
  FUNC_3(VAR_17,
           VAR_15, VAR_4);
  FUNC_3(VAR_17,
           VAR_13, VAR_4);
 }

 VAR_17->base.autoneg
  = (VAR_18->port_state.flags & VAR_9) ?
  VAR_2 : VAR_1;

 VAR_20 = FUNC_0(VAR_19.eth_proto_lp_adv);

 FUNC_4(VAR_17, VAR_14);
 FUNC_9(
  VAR_17->link_modes.lp_advertising,
  VAR_20, VAR_0);
 if (VAR_18->port_state.flags & VAR_9)
  FUNC_3(VAR_17,
           VAR_14, VAR_4);

 VAR_17->base.phy_address = 0;
 VAR_17->base.mdio_support = 0;
 VAR_17->base.eth_tp_mdix = VAR_7;
 VAR_17->base.eth_tp_mdix_ctrl = VAR_6;

 return VAR_21;
}
