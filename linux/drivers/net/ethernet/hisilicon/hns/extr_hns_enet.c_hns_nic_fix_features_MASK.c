
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hns_nic_priv {int enet_ver; } ;
typedef int netdev_features_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hns_nic_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_1(
  struct net_device *VAR_3, netdev_features_t VAR_4)
{
 struct hns_nic_priv *VAR_5 = FUNC_0(VAR_3);

 switch (VAR_5->enet_ver) {
 case 128:
  VAR_4 &= ~(VAR_1 | VAR_2 |
    VAR_0);
  break;
 default:
  break;
 }
 return VAR_4;
}
