
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int hw_features; int hw_enc_features; int priv_flags; } ;
struct ionic_lif {int hw_features; struct net_device* netdev; } ;
typedef int netdev_features_t ;


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
 int FUNC_0 (struct ionic_lif*,int) ;

__attribute__((used)) static int FUNC_1(struct ionic_lif *VAR_34)
{
 struct net_device *VAR_35 = VAR_34->netdev;
 netdev_features_t VAR_36;
 int VAR_37;


 VAR_36 = VAR_27 |
     VAR_26 |
     VAR_25 |
     VAR_29 |
     VAR_30 |
     VAR_24 |
     VAR_28 |
     VAR_31 |
     VAR_32 |
     VAR_33;

 VAR_37 = FUNC_0(VAR_34, VAR_36);
 if (VAR_37)
  return VAR_37;


 VAR_35->features |= VAR_23;

 if (VAR_34->hw_features & VAR_16)
  VAR_35->hw_features |= VAR_27;
 if (VAR_34->hw_features & VAR_15)
  VAR_35->hw_features |= VAR_26;
 if (VAR_34->hw_features & VAR_14)
  VAR_35->hw_features |= VAR_25;
 if (VAR_34->hw_features & VAR_2)
  VAR_35->hw_features |= VAR_29;
 if (VAR_34->hw_features & VAR_13)
  VAR_35->hw_features |= VAR_30;

 if (VAR_34->hw_features & VAR_12)
  VAR_35->hw_enc_features |= VAR_24;
 if (VAR_34->hw_features & VAR_1)
  VAR_35->hw_enc_features |= VAR_28;
 if (VAR_34->hw_features & VAR_3)
  VAR_35->hw_enc_features |= VAR_31;
 if (VAR_34->hw_features & VAR_7)
  VAR_35->hw_enc_features |= VAR_32;
 if (VAR_34->hw_features & VAR_4)
  VAR_35->hw_enc_features |= VAR_33;
 if (VAR_34->hw_features & VAR_5)
  VAR_35->hw_enc_features |= VAR_17;
 if (VAR_34->hw_features & VAR_6)
  VAR_35->hw_enc_features |= VAR_18;
 if (VAR_34->hw_features & VAR_8)
  VAR_35->hw_enc_features |= VAR_19;
 if (VAR_34->hw_features & VAR_9)
  VAR_35->hw_enc_features |= VAR_20;
 if (VAR_34->hw_features & VAR_10)
  VAR_35->hw_enc_features |= VAR_21;
 if (VAR_34->hw_features & VAR_11)
  VAR_35->hw_enc_features |= VAR_22;

 VAR_35->hw_features |= VAR_35->hw_enc_features;
 VAR_35->features |= VAR_35->hw_features;

 VAR_35->priv_flags |= VAR_0;

 return 0;
}
