
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {scalar_t__ tx_dropped; scalar_t__ rx_dropped; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {int idx; TYPE_1__* ethsw_data; } ;
struct TYPE_2__ {int dpsw_handle; int mc_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct ethsw_port_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_7,
      struct rtnl_link_stats64 *VAR_8)
{
 struct ethsw_port_priv *VAR_9 = FUNC_2(VAR_7);
 u64 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_9->ethsw_data->mc_io, 0,
      VAR_9->ethsw_data->dpsw_handle,
      VAR_9->idx,
      VAR_5, &VAR_8->rx_packets);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_0(VAR_9->ethsw_data->mc_io, 0,
      VAR_9->ethsw_data->dpsw_handle,
      VAR_9->idx,
      VAR_1, &VAR_8->tx_packets);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_0(VAR_9->ethsw_data->mc_io, 0,
      VAR_9->ethsw_data->dpsw_handle,
      VAR_9->idx,
      VAR_3, &VAR_8->rx_bytes);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_0(VAR_9->ethsw_data->mc_io, 0,
      VAR_9->ethsw_data->dpsw_handle,
      VAR_9->idx,
      VAR_0, &VAR_8->tx_bytes);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_0(VAR_9->ethsw_data->mc_io, 0,
      VAR_9->ethsw_data->dpsw_handle,
      VAR_9->idx,
      VAR_6,
      &VAR_8->rx_dropped);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_0(VAR_9->ethsw_data->mc_io, 0,
      VAR_9->ethsw_data->dpsw_handle,
      VAR_9->idx,
      VAR_4,
      &VAR_10);
 if (VAR_11)
  goto error;
 VAR_8->rx_dropped += VAR_10;

 VAR_11 = FUNC_0(VAR_9->ethsw_data->mc_io, 0,
      VAR_9->ethsw_data->dpsw_handle,
      VAR_9->idx,
      VAR_2,
      &VAR_8->tx_dropped);
 if (VAR_11)
  goto error;

 return;

error:
 FUNC_1(VAR_7, "dpsw_if_get_counter err %d\n", VAR_11);
}
