
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hw_features; int features; int vlan_features; int max_mtu; int min_mtu; int * ethtool_ops; int * netdev_ops; int flags; int priv_flags; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct be_adapter*) ;
 int VAR_19 ;
 struct be_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_20)
{
 struct be_adapter *VAR_21 = FUNC_1(VAR_20);

 VAR_20->hw_features |= VAR_15 | VAR_16 | VAR_17 |
  VAR_7 |
  VAR_12 | VAR_11 | VAR_13 |
  VAR_10;
 if ((FUNC_0(VAR_21) & VAR_0))
  VAR_20->hw_features |= VAR_14;

 VAR_20->features |= VAR_20->hw_features |
  VAR_9 | VAR_8;

 VAR_20->vlan_features |= VAR_15 | VAR_16 | VAR_17 |
  VAR_12 | VAR_11;

 VAR_20->priv_flags |= VAR_6;

 VAR_20->flags |= VAR_5;

 FUNC_2(VAR_20, VAR_1 - VAR_4);

 VAR_20->netdev_ops = &VAR_19;

 VAR_20->ethtool_ops = &VAR_18;


 VAR_20->min_mtu = VAR_3;
 VAR_20->max_mtu = VAR_2;
}
