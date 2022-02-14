
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_hw_ops {int (* enable_rss ) (struct xlgmac_pdata*) ;int (* disable_rss ) (struct xlgmac_pdata*) ;int (* disable_rx_vlan_filtering ) (struct xlgmac_pdata*) ;int (* enable_rx_vlan_filtering ) (struct xlgmac_pdata*) ;int (* disable_rx_vlan_stripping ) (struct xlgmac_pdata*) ;int (* enable_rx_vlan_stripping ) (struct xlgmac_pdata*) ;int (* disable_rx_csum ) (struct xlgmac_pdata*) ;int (* enable_rx_csum ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {int netdev_features; struct xlgmac_hw_ops hw_ops; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xlgmac_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;
 int FUNC_2 (struct xlgmac_pdata*) ;
 int FUNC_3 (struct xlgmac_pdata*) ;
 int FUNC_4 (struct xlgmac_pdata*) ;
 int FUNC_5 (struct xlgmac_pdata*) ;
 int FUNC_6 (struct xlgmac_pdata*) ;
 int FUNC_7 (struct xlgmac_pdata*) ;
 int FUNC_8 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4,
          netdev_features_t VAR_5)
{
 netdev_features_t VAR_6, VAR_7, VAR_8, VAR_9;
 struct xlgmac_pdata *VAR_10 = FUNC_0(VAR_4);
 struct xlgmac_hw_ops *VAR_11 = &VAR_10->hw_ops;
 int VAR_12 = 0;

 VAR_6 = VAR_10->netdev_features & VAR_3;
 VAR_7 = VAR_10->netdev_features & VAR_2;
 VAR_8 = VAR_10->netdev_features & VAR_1;
 VAR_9 = VAR_10->netdev_features & VAR_0;

 if ((VAR_5 & VAR_3) && !VAR_6)
  VAR_12 = VAR_11->enable_rss(VAR_10);
 else if (!(VAR_5 & VAR_3) && VAR_6)
  VAR_12 = VAR_11->disable_rss(VAR_10);
 if (VAR_12)
  return VAR_12;

 if ((VAR_5 & VAR_2) && !VAR_7)
  VAR_11->enable_rx_csum(VAR_10);
 else if (!(VAR_5 & VAR_2) && VAR_7)
  VAR_11->disable_rx_csum(VAR_10);

 if ((VAR_5 & VAR_1) && !VAR_8)
  VAR_11->enable_rx_vlan_stripping(VAR_10);
 else if (!(VAR_5 & VAR_1) && VAR_8)
  VAR_11->disable_rx_vlan_stripping(VAR_10);

 if ((VAR_5 & VAR_0) && !VAR_9)
  VAR_11->enable_rx_vlan_filtering(VAR_10);
 else if (!(VAR_5 & VAR_0) && VAR_9)
  VAR_11->disable_rx_vlan_filtering(VAR_10);

 VAR_10->netdev_features = VAR_5;

 return 0;
}
