
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_2__* ae_handle; } ;
struct TYPE_8__ {int desc_num; } ;
struct TYPE_7__ {int desc_num; } ;
struct hnae_queue {TYPE_4__ tx_ring; TYPE_3__ rx_ring; } ;
struct hnae_ae_ops {int (* get_ring_bdnum_limit ) (struct hnae_queue*,void**) ;} ;
struct ethtool_ringparam {int tx_pending; int rx_pending; void* tx_max_pending; void* rx_max_pending; } ;
struct TYPE_6__ {TYPE_1__* dev; struct hnae_queue** qs; } ;
struct TYPE_5__ {struct hnae_ae_ops* ops; } ;


 struct hns_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae_queue*,void**) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
         struct ethtool_ringparam *VAR_1)
{
 struct hns_nic_priv *VAR_2 = FUNC_0(VAR_0);
 struct hnae_ae_ops *VAR_3;
 struct hnae_queue *VAR_4;
 u32 VAR_5 = 0;

 VAR_4 = VAR_2->ae_handle->qs[0];
 VAR_3 = VAR_2->ae_handle->dev->ops;

 if (VAR_3->get_ring_bdnum_limit)
  VAR_3->get_ring_bdnum_limit(VAR_4, &VAR_5);

 VAR_1->rx_max_pending = VAR_5;
 VAR_1->tx_max_pending = VAR_5;
 VAR_1->rx_pending = VAR_4->rx_ring.desc_num;
 VAR_1->tx_pending = VAR_4->tx_ring.desc_num;
}
