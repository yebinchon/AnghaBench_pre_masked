
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vxn; } ;
struct xgbe_prv_data {int vxlan_features; scalar_t__ vxlan_force_disable; TYPE_1__ hw_feat; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct xgbe_prv_data* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_5,
        netdev_features_t VAR_6)
{
 struct xgbe_prv_data *VAR_7 = FUNC_1(VAR_5);
 netdev_features_t VAR_8, VAR_9;

 VAR_8 = VAR_0 | VAR_4;
 VAR_9 = VAR_8 | VAR_1;

 VAR_7->vxlan_features = VAR_6 & VAR_9;


 if (!VAR_7->vxlan_features)
  return VAR_6;





 if (!VAR_7->hw_feat.vxn)
  return VAR_6 & ~VAR_9;


 if ((VAR_6 & VAR_1) &&
     !(VAR_6 & VAR_0)) {
  FUNC_0(VAR_5,
         "forcing tx udp tunnel support\n");
  VAR_6 |= VAR_0;
 }


 if ((VAR_6 & VAR_8) != VAR_8) {
  FUNC_0(VAR_5,
         "forcing both tx and rx udp tunnel support\n");
  VAR_6 |= VAR_8;
 }

 if (VAR_6 & (VAR_3 | VAR_2)) {
  if (!(VAR_6 & VAR_1)) {
   FUNC_0(VAR_5,
          "forcing tx udp tunnel checksumming on\n");
   VAR_6 |= VAR_1;
  }
 } else {
  if (VAR_6 & VAR_1) {
   FUNC_0(VAR_5,
          "forcing tx udp tunnel checksumming off\n");
   VAR_6 &= ~VAR_1;
  }
 }

 VAR_7->vxlan_features = VAR_6 & VAR_9;


 if (VAR_7->vxlan_force_disable) {
  FUNC_0(VAR_5,
         "VXLAN acceleration disabled, turning off udp tunnel features\n");
  VAR_6 &= ~VAR_9;
 }

 return VAR_6;
}
