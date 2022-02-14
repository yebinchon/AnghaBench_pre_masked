
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int tx_max_coalesced_frames; int rx_coalesce_usecs; int rx_max_coalesced_frames; int use_adaptive_rx_coalesce; } ;
struct TYPE_2__ {int use_dim; } ;
struct bcm_sysport_priv {TYPE_1__ dim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct bcm_sysport_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct bcm_sysport_priv*,int ) ;
 int FUNC_3 (struct bcm_sysport_priv*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
        struct ethtool_coalesce *VAR_6)
{
 struct bcm_sysport_priv *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8;

 VAR_8 = FUNC_3(VAR_7, FUNC_0(0));

 VAR_6->tx_coalesce_usecs = (VAR_8 >> VAR_4) * 8192 / 1000;
 VAR_6->tx_max_coalesced_frames = VAR_8 & VAR_3;

 VAR_8 = FUNC_2(VAR_7, VAR_1);

 VAR_6->rx_coalesce_usecs = (VAR_8 >> VAR_2) * 8192 / 1000;
 VAR_6->rx_max_coalesced_frames = VAR_8 & VAR_0;
 VAR_6->use_adaptive_rx_coalesce = VAR_7->dim.use_dim;

 return 0;
}
