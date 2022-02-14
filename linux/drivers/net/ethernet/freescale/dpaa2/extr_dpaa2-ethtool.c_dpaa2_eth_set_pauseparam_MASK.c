
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_pauseparam {int tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;
struct dpni_link_cfg {int options; int rate; int member_0; } ;
struct TYPE_2__ {int options; int rate; } ;
struct dpaa2_eth_priv {TYPE_1__ link_state; int mc_token; int mc_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dpaa2_eth_priv*) ;
 int FUNC_1 (int ,int ,int ,struct dpni_link_cfg*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,char*,int ,int ) ;
 struct dpaa2_eth_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
        struct ethtool_pauseparam *VAR_6)
{
 struct dpaa2_eth_priv *VAR_7 = FUNC_4(VAR_5);
 struct dpni_link_cfg VAR_8 = {0};
 int VAR_9;

 if (!FUNC_0(VAR_7)) {
  FUNC_3(VAR_5, "No pause frame support for DPNI version < %d.%d\n",
       VAR_2, VAR_3);
  return -VAR_4;
 }

 if (VAR_6->autoneg)
  return -VAR_4;

 VAR_8.rate = VAR_7->link_state.rate;
 VAR_8.options = VAR_7->link_state.options;
 if (VAR_6->rx_pause)
  VAR_8.options |= VAR_1;
 else
  VAR_8.options &= ~VAR_1;
 if (!!VAR_6->rx_pause ^ !!VAR_6->tx_pause)
  VAR_8.options |= VAR_0;
 else
  VAR_8.options &= ~VAR_0;

 if (VAR_8.options == VAR_7->link_state.options)
  return 0;

 VAR_9 = FUNC_1(VAR_7->mc_io, 0, VAR_7->mc_token, &VAR_8);
 if (VAR_9) {
  FUNC_2(VAR_5, "dpni_set_link_state failed\n");
  return VAR_9;
 }

 VAR_7->link_state.options = VAR_8.options;

 return 0;
}
