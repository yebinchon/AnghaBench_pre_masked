
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int hw_enc_features; int vlan_features; int hw_features; int max_mtu; int min_mtu; int priv_flags; int * netdev_ops; } ;
struct fm10k_intfc {scalar_t__ msg_enable; } ;
struct fm10k_info {scalar_t__ mac; } ;
typedef int netdev_features_t ;


 scalar_t__ FUNC_0 (int ) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct net_device* FUNC_1 (int,int ) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct net_device*) ;
 struct fm10k_intfc* FUNC_3 (struct net_device*) ;

struct net_device *FUNC_4(const struct fm10k_info *VAR_20)
{
 netdev_features_t VAR_21;
 struct fm10k_intfc *VAR_22;
 struct net_device *VAR_23;

 VAR_23 = FUNC_1(sizeof(struct fm10k_intfc), VAR_4);
 if (!VAR_23)
  return ((void*)0);


 VAR_23->netdev_ops = &VAR_19;
 FUNC_2(VAR_23);


 VAR_22 = FUNC_3(VAR_23);
 VAR_22->msg_enable = FUNC_0(VAR_0) - 1;


 VAR_23->features |= VAR_11 |
    VAR_10 |
    VAR_14 |
    VAR_15 |
    VAR_16 |
    VAR_17 |
    VAR_13 |
    VAR_12;


 if (VAR_20->mac == VAR_18) {
  VAR_23->hw_enc_features = VAR_11 |
           VAR_15 |
           VAR_16 |
           VAR_17 |
           VAR_5 |
           VAR_10 |
           VAR_14;

  VAR_23->features |= VAR_5;
 }


 VAR_21 = VAR_23->features;


 VAR_21 |= VAR_6;


 VAR_23->vlan_features |= VAR_23->features;





 VAR_23->features |= VAR_9 |
    VAR_8 |
    VAR_7;

 VAR_23->priv_flags |= VAR_3;

 VAR_23->hw_features |= VAR_21;


 VAR_23->min_mtu = VAR_1;
 VAR_23->max_mtu = VAR_2;

 return VAR_23;
}
