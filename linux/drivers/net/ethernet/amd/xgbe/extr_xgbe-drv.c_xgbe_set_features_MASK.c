
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_if {int (* enable_rss ) (struct xgbe_prv_data*) ;int (* disable_rss ) (struct xgbe_prv_data*) ;int (* disable_rx_vlan_filtering ) (struct xgbe_prv_data*) ;int (* enable_rx_vlan_filtering ) (struct xgbe_prv_data*) ;int (* disable_rx_vlan_stripping ) (struct xgbe_prv_data*) ;int (* enable_rx_vlan_stripping ) (struct xgbe_prv_data*) ;int (* disable_rx_csum ) (struct xgbe_prv_data*) ;int (* enable_rx_csum ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int netdev_features; struct xgbe_hw_if hw_if; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct xgbe_prv_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*) ;
 int FUNC_11 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_5,
        netdev_features_t VAR_6)
{
 struct xgbe_prv_data *VAR_7 = FUNC_1(VAR_5);
 struct xgbe_hw_if *VAR_8 = &VAR_7->hw_if;
 netdev_features_t VAR_9, VAR_10, VAR_11, VAR_12;
 netdev_features_t VAR_13;
 int VAR_14 = 0;

 VAR_9 = VAR_7->netdev_features & VAR_4;
 VAR_10 = VAR_7->netdev_features & VAR_3;
 VAR_11 = VAR_7->netdev_features & VAR_2;
 VAR_12 = VAR_7->netdev_features & VAR_1;
 VAR_13 = VAR_7->netdev_features & VAR_0;

 if ((VAR_6 & VAR_4) && !VAR_9)
  VAR_14 = VAR_8->enable_rss(VAR_7);
 else if (!(VAR_6 & VAR_4) && VAR_9)
  VAR_14 = VAR_8->disable_rss(VAR_7);
 if (VAR_14)
  return VAR_14;

 if ((VAR_6 & VAR_3) && !VAR_10)
  VAR_8->enable_rx_csum(VAR_7);
 else if (!(VAR_6 & VAR_3) && VAR_10)
  VAR_8->disable_rx_csum(VAR_7);

 if ((VAR_6 & VAR_2) && !VAR_11)
  VAR_8->enable_rx_vlan_stripping(VAR_7);
 else if (!(VAR_6 & VAR_2) && VAR_11)
  VAR_8->disable_rx_vlan_stripping(VAR_7);

 if ((VAR_6 & VAR_1) && !VAR_12)
  VAR_8->enable_rx_vlan_filtering(VAR_7);
 else if (!(VAR_6 & VAR_1) && VAR_12)
  VAR_8->disable_rx_vlan_filtering(VAR_7);

 if ((VAR_6 & VAR_0) && !VAR_13)
  FUNC_11(VAR_7);
 else if (!(VAR_6 & VAR_0) && VAR_13)
  FUNC_10(VAR_7);

 VAR_7->netdev_features = VAR_6;

 FUNC_0("<--xgbe_set_features\n");

 return 0;
}
