
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_2__* ae_handle; } ;
struct hnae_ae_ops {int (* get_pauseparam ) (TYPE_2__*,int *,int *,int *) ;} ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct hnae_ae_ops* ops; } ;


 struct hns_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_2__*,int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
          struct ethtool_pauseparam *VAR_1)
{
 struct hns_nic_priv *VAR_2 = FUNC_0(VAR_0);
 struct hnae_ae_ops *VAR_3;

 VAR_3 = VAR_2->ae_handle->dev->ops;

 if (VAR_3->get_pauseparam)
  VAR_3->get_pauseparam(VAR_2->ae_handle, &VAR_1->autoneg,
         &VAR_1->rx_pause, &VAR_1->tx_pause);
}
