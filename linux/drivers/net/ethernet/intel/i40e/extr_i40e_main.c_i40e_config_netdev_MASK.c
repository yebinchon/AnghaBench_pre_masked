
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int gso_partial_features; int hw_enc_features; int vlan_features; int hw_features; int features; int neigh_priv_len; int watchdog_timeo; scalar_t__ max_mtu; int min_mtu; int * netdev_ops; int priv_flags; int * perm_addr; int * dev_addr; int name; } ;
struct TYPE_10__ {int enabled_tc; } ;
struct i40e_vsi {scalar_t__ type; TYPE_5__ tc_config; int mac_filter_hash_lock; struct net_device* netdev; int alloc_queue_pairs; struct i40e_pf* back; } ;
struct TYPE_7__ {int * perm_addr; } ;
struct i40e_hw {TYPE_2__ mac; } ;
struct i40e_pf {int hw_features; int flags; size_t lan_vsi; TYPE_4__** vsi; TYPE_1__* pdev; struct i40e_hw hw; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
typedef int netdev_features_t ;
struct TYPE_9__ {TYPE_3__* netdev; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct i40e_vsi*,int *) ;
 int VAR_37 ;
 int FUNC_6 (struct i40e_vsi*,int *) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct i40e_vsi*,int ) ;
 struct i40e_netdev_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,char*,char*,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct i40e_vsi *VAR_38)
{
 struct i40e_pf *VAR_39 = VAR_38->back;
 struct i40e_hw *VAR_40 = &VAR_39->hw;
 struct i40e_netdev_priv *VAR_41;
 struct net_device *VAR_42;
 u8 VAR_43[VAR_1];
 u8 VAR_44[VAR_1];
 int VAR_45;
 netdev_features_t VAR_46;
 netdev_features_t VAR_47;

 VAR_45 = sizeof(struct i40e_netdev_priv);
 VAR_42 = FUNC_1(VAR_45, VAR_38->alloc_queue_pairs);
 if (!VAR_42)
  return -VAR_0;

 VAR_38->netdev = VAR_42;
 VAR_41 = FUNC_9(VAR_42);
 VAR_41->vsi = VAR_38;

 VAR_46 = VAR_31 |
     VAR_26 |
     VAR_25 |
     VAR_19 |
     VAR_32 |
     VAR_33 |
     VAR_35 |
     VAR_34 |
     VAR_12 |
     VAR_13 |
     VAR_16 |
     VAR_14 |
     VAR_15 |
     VAR_17 |
     VAR_18 |
     VAR_30 |
     VAR_29 |
     VAR_28 |
     0;

 if (!(VAR_39->hw_features & VAR_5))
  VAR_42->gso_partial_features |= VAR_18;

 VAR_42->gso_partial_features |= VAR_13;

 VAR_42->hw_enc_features |= VAR_46;


 VAR_42->vlan_features |= VAR_46 | VAR_36;


 VAR_42->hw_features |= VAR_20;

 VAR_47 = VAR_46 |
        VAR_24 |
        VAR_23;

 if (!(VAR_39->flags & VAR_4))
  VAR_47 |= VAR_27 | VAR_21;

 VAR_42->hw_features |= VAR_47;

 VAR_42->features |= VAR_47 | VAR_22;
 VAR_42->hw_enc_features |= VAR_36;

 if (VAR_38->type == VAR_8) {
  FUNC_0(VAR_42, &VAR_39->pdev->dev);
  FUNC_4(VAR_44, VAR_40->mac.perm_addr);
  FUNC_6(VAR_38, VAR_44);
  FUNC_11(&VAR_38->mac_filter_hash_lock);
  FUNC_5(VAR_38, VAR_44);
  FUNC_12(&VAR_38->mac_filter_hash_lock);
 } else {





  FUNC_10(VAR_42->name, VAR_11, "%.*sv%%d",
    VAR_11 - 4,
    VAR_39->vsi[VAR_39->lan_vsi]->netdev->name);
  FUNC_3(VAR_44);

  FUNC_11(&VAR_38->mac_filter_hash_lock);
  FUNC_5(VAR_38, VAR_44);
  FUNC_12(&VAR_38->mac_filter_hash_lock);
 }
 FUNC_2(VAR_43);
 FUNC_11(&VAR_38->mac_filter_hash_lock);
 FUNC_5(VAR_38, VAR_43);
 FUNC_12(&VAR_38->mac_filter_hash_lock);

 FUNC_4(VAR_42->dev_addr, VAR_44);
 FUNC_4(VAR_42->perm_addr, VAR_44);


 VAR_42->neigh_priv_len = sizeof(u32) * 4;

 VAR_42->priv_flags |= VAR_10;
 VAR_42->priv_flags |= VAR_9;

 FUNC_8(VAR_38, VAR_38->tc_config.enabled_tc);

 VAR_42->netdev_ops = &VAR_37;
 VAR_42->watchdog_timeo = 5 * VAR_3;
 FUNC_7(VAR_42);


 VAR_42->min_mtu = VAR_2;
 VAR_42->max_mtu = VAR_6 - VAR_7;

 return 0;
}
