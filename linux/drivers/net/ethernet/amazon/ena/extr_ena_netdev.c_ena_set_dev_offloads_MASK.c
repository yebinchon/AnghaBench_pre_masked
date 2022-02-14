
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; int hw_features; int vlan_features; } ;
struct TYPE_2__ {int tx; int rx_supported; } ;
struct ena_com_dev_get_features_ctx {TYPE_1__ offload; } ;
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

__attribute__((used)) static void FUNC_0(struct ena_com_dev_get_features_ctx *VAR_16,
     struct net_device *VAR_17)
{
 netdev_features_t VAR_18 = 0;


 if (VAR_16->offload.tx &
  VAR_5)
  VAR_18 |= VAR_9;

 if (VAR_16->offload.tx &
  VAR_6)
  VAR_18 |= VAR_8;

 if (VAR_16->offload.tx & VAR_3)
  VAR_18 |= VAR_13;

 if (VAR_16->offload.tx & VAR_4)
  VAR_18 |= VAR_14;

 if (VAR_16->offload.tx & VAR_2)
  VAR_18 |= VAR_15;

 if (VAR_16->offload.rx_supported &
  VAR_0)
  VAR_18 |= VAR_10;

 if (VAR_16->offload.rx_supported &
  VAR_1)
  VAR_18 |= VAR_10;

 VAR_17->features =
  VAR_18 |
  VAR_12 |
  VAR_11 |
  VAR_7;

 VAR_17->hw_features |= VAR_17->features;
 VAR_17->vlan_features |= VAR_17->features;
}
