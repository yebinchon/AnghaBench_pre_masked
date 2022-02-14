
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {struct device* parent; } ;
struct net_device {int features; int hw_features; int priv_flags; int max_mtu; int * ethtool_ops; int * netdev_ops; TYPE_1__ dev; } ;
struct TYPE_4__ {int options; } ;
struct dpaa2_eth_priv {int mc_token; int mc_io; TYPE_2__ dpni_attrs; } ;
struct device {int dummy; } ;


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
 int FUNC_0 (struct device*,char*) ;
 int VAR_12 ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int VAR_13 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 struct dpaa2_eth_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_14)
{
 struct device *VAR_15 = VAR_14->dev.parent;
 struct dpaa2_eth_priv *VAR_16 = FUNC_5(VAR_14);
 u32 VAR_17 = VAR_16->dpni_attrs.options;
 u64 VAR_18 = 0, VAR_19 = 0;
 u8 VAR_20[VAR_3];
 u8 VAR_21;
 int VAR_22;

 VAR_14->netdev_ops = &VAR_12;
 VAR_14->ethtool_ops = &VAR_13;

 VAR_22 = FUNC_8(VAR_16);
 if (VAR_22)
  return VAR_22;


 FUNC_4(VAR_20);
 VAR_22 = FUNC_2(VAR_16->mc_io, 0, VAR_16->mc_token, VAR_20);
 if (VAR_22) {
  FUNC_0(VAR_15, "dpni_add_mac_addr() failed\n");
  return VAR_22;
 }


 VAR_14->max_mtu = VAR_0;
 VAR_22 = FUNC_3(VAR_16->mc_io, 0, VAR_16->mc_token,
     VAR_1);
 if (VAR_22) {
  FUNC_0(VAR_15, "dpni_set_max_frame_length() failed\n");
  return VAR_22;
 }


 VAR_21 = FUNC_1(VAR_16);
 VAR_22 = FUNC_7(VAR_14, VAR_21);
 if (VAR_22) {
  FUNC_0(VAR_15, "netif_set_real_num_tx_queues() failed\n");
  return VAR_22;
 }
 VAR_22 = FUNC_6(VAR_14, VAR_21);
 if (VAR_22) {
  FUNC_0(VAR_15, "netif_set_real_num_rx_queues() failed\n");
  return VAR_22;
 }


 VAR_18 |= VAR_4;

 if (VAR_17 & VAR_2)
  VAR_19 |= VAR_5;
 else
  VAR_18 |= VAR_5;

 VAR_14->priv_flags |= VAR_18;
 VAR_14->priv_flags &= ~VAR_19;


 VAR_14->features = VAR_10 |
       VAR_8 | VAR_7 |
       VAR_11 | VAR_6 |
       VAR_9;
 VAR_14->hw_features = VAR_14->features;

 return 0;
}
