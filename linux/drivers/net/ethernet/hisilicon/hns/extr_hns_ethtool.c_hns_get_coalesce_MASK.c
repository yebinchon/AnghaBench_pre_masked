
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_2__* ae_handle; } ;
struct hnae_ae_ops {int (* get_coalesce_range ) (TYPE_2__*,int *,int *,int *,int *,int *,int *,int *,int *) ;int (* get_max_coalesced_frames ) (TYPE_2__*,int *,int *) ;int (* get_coalesce_usecs ) (TYPE_2__*,int *,int *) ;} ;
struct ethtool_coalesce {int rx_coalesce_usecs_high; int tx_coalesce_usecs_high; int rx_coalesce_usecs_low; int tx_coalesce_usecs_low; int rx_max_coalesced_frames_high; int tx_max_coalesced_frames_high; int rx_max_coalesced_frames_low; int tx_max_coalesced_frames_low; int rx_max_coalesced_frames; int tx_max_coalesced_frames; int rx_coalesce_usecs; int tx_coalesce_usecs; int use_adaptive_tx_coalesce; int use_adaptive_rx_coalesce; } ;
struct TYPE_6__ {int coal_adapt_en; TYPE_1__* dev; } ;
struct TYPE_5__ {struct hnae_ae_ops* ops; } ;


 int VAR_0 ;
 struct hns_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int *,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
       struct ethtool_coalesce *VAR_2)
{
 struct hns_nic_priv *VAR_3 = FUNC_0(VAR_1);
 struct hnae_ae_ops *VAR_4;

 VAR_4 = VAR_3->ae_handle->dev->ops;

 VAR_2->use_adaptive_rx_coalesce = VAR_3->ae_handle->coal_adapt_en;
 VAR_2->use_adaptive_tx_coalesce = VAR_3->ae_handle->coal_adapt_en;

 if ((!VAR_4->get_coalesce_usecs) ||
     (!VAR_4->get_max_coalesced_frames))
  return -VAR_0;

 VAR_4->get_coalesce_usecs(VAR_3->ae_handle,
     &VAR_2->tx_coalesce_usecs,
     &VAR_2->rx_coalesce_usecs);

 VAR_4->get_max_coalesced_frames(
  VAR_3->ae_handle,
  &VAR_2->tx_max_coalesced_frames,
  &VAR_2->rx_max_coalesced_frames);

 VAR_4->get_coalesce_range(VAR_3->ae_handle,
    &VAR_2->tx_max_coalesced_frames_low,
    &VAR_2->rx_max_coalesced_frames_low,
    &VAR_2->tx_max_coalesced_frames_high,
    &VAR_2->rx_max_coalesced_frames_high,
    &VAR_2->tx_coalesce_usecs_low,
    &VAR_2->rx_coalesce_usecs_low,
    &VAR_2->tx_coalesce_usecs_high,
    &VAR_2->rx_coalesce_usecs_high);

 return 0;
}
