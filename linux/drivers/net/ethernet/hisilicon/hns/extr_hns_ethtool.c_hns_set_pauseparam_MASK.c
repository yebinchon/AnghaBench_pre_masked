
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_1__* dev; } ;
struct hnae_ae_ops {int (* set_pauseparam ) (struct hnae_handle*,int ,int ,int ) ;} ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;
struct TYPE_2__ {struct hnae_ae_ops* ops; } ;


 int VAR_0 ;
 struct hns_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae_handle*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
         struct ethtool_pauseparam *VAR_2)
{
 struct hns_nic_priv *VAR_3 = FUNC_0(VAR_1);
 struct hnae_handle *VAR_4;
 struct hnae_ae_ops *VAR_5;

 VAR_4 = VAR_3->ae_handle;
 VAR_5 = VAR_4->dev->ops;

 if (!VAR_5->set_pauseparam)
  return -VAR_0;

 return VAR_5->set_pauseparam(VAR_3->ae_handle, VAR_2->autoneg,
       VAR_2->rx_pause, VAR_2->tx_pause);
}
