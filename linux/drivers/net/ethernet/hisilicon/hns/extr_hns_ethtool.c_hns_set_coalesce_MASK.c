
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_2__* ae_handle; } ;
struct hnae_ae_ops {int (* set_coalesce_usecs ) (TYPE_2__*,int ) ;int (* set_coalesce_frames ) (TYPE_2__*,int ,int ) ;} ;
struct ethtool_coalesce {scalar_t__ use_adaptive_rx_coalesce; int rx_max_coalesced_frames; int tx_max_coalesced_frames; int rx_coalesce_usecs; int tx_coalesce_usecs; } ;
struct TYPE_5__ {scalar_t__ coal_adapt_en; TYPE_1__* dev; } ;
struct TYPE_4__ {struct hnae_ae_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hns_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
       struct ethtool_coalesce *VAR_3)
{
 struct hns_nic_priv *VAR_4 = FUNC_0(VAR_2);
 struct hnae_ae_ops *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_4->ae_handle->dev->ops;

 if (VAR_3->tx_coalesce_usecs != VAR_3->rx_coalesce_usecs)
  return -VAR_0;

 if ((!VAR_5->set_coalesce_usecs) ||
     (!VAR_5->set_coalesce_frames))
  return -VAR_1;

 if (VAR_3->use_adaptive_rx_coalesce != VAR_4->ae_handle->coal_adapt_en)
  VAR_4->ae_handle->coal_adapt_en = VAR_3->use_adaptive_rx_coalesce;

 VAR_6 = VAR_5->set_coalesce_usecs(VAR_4->ae_handle,
          VAR_3->rx_coalesce_usecs);

 VAR_7 = VAR_5->set_coalesce_frames(VAR_4->ae_handle,
           VAR_3->tx_max_coalesced_frames,
           VAR_3->rx_max_coalesced_frames);

 if (VAR_6 || VAR_7)
  return -VAR_0;

 return 0;
}
