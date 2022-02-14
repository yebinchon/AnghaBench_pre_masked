
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct TYPE_2__ {int maybe_stop_tx; int fill_desc; } ;
struct hns_nic_priv {int enet_ver; TYPE_1__ ops; } ;
typedef int netdev_features_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
    netdev_features_t VAR_7)
{
 struct hns_nic_priv *VAR_8 = FUNC_1(VAR_6);

 switch (VAR_8->enet_ver) {
 case 128:
  if (VAR_7 & (VAR_0 | VAR_1))
   FUNC_0(VAR_6, "enet v1 do not support tso!\n");
  break;
 default:
  if (VAR_7 & (VAR_0 | VAR_1)) {
   VAR_8->ops.fill_desc = VAR_2;
   VAR_8->ops.maybe_stop_tx = VAR_4;

   FUNC_2(VAR_6, 7 * 4096);
  } else {
   VAR_8->ops.fill_desc = VAR_3;
   VAR_8->ops.maybe_stop_tx = VAR_5;
  }
  break;
 }
 VAR_6->features = VAR_7;
 return 0;
}
