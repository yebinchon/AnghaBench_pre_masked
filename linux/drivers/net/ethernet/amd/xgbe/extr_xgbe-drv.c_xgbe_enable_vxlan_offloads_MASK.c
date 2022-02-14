
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int vxlan_offloads_set; int vxlan_features; struct net_device* netdev; } ;
struct net_device {int hw_enc_features; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,char*) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->netdev;

 if (VAR_7->vxlan_offloads_set)
  return;

 FUNC_0(VAR_8, "enabling VXLAN offloads\n");

 VAR_8->hw_enc_features |= VAR_4 |
       VAR_2 |
       VAR_1 |
       VAR_3 |
       VAR_5 |
       VAR_6 |
       VAR_0 |
       VAR_7->vxlan_features;

 VAR_8->features |= VAR_7->vxlan_features;

 VAR_7->vxlan_offloads_set = 1;
}
