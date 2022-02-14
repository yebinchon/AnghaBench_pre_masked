
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {scalar_t__ vxlan_offloads_set; struct net_device* netdev; } ;
struct net_device {int hw_enc_features; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,char*) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_9)
{
 struct net_device *VAR_10 = VAR_9->netdev;

 if (!VAR_9->vxlan_offloads_set)
  return;

 FUNC_0(VAR_10, "disabling VXLAN offloads\n");

 VAR_10->hw_enc_features &= ~(VAR_6 |
         VAR_4 |
         VAR_3 |
         VAR_5 |
         VAR_7 |
         VAR_8 |
         VAR_0 |
         VAR_1 |
         VAR_2);

 VAR_10->features &= ~(VAR_1 |
         VAR_2);

 VAR_9->vxlan_offloads_set = 0;
}
