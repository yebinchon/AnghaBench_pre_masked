
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {TYPE_1__* phydev; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {scalar_t__ phy_if; TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* get_strings ) (struct hnae_handle*,int ,int *) ;} ;
struct TYPE_4__ {int is_c45; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (struct hnae_handle*,int ,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7, u32 VAR_8, u8 *VAR_9)
{
 struct hns_nic_priv *VAR_10 = FUNC_2(VAR_7);
 struct hnae_handle *VAR_11 = VAR_10->ae_handle;
 char *VAR_12 = (char *)VAR_9;

 if (!VAR_11->dev->ops->get_strings) {
  FUNC_1(VAR_7, "h->dev->ops->get_strings is null!\n");
  return;
 }

 if (VAR_8 == VAR_1) {
  if (VAR_10->ae_handle->phy_if != VAR_5) {
   FUNC_0(VAR_12, VAR_6[VAR_2],
          VAR_0);
   VAR_12 += VAR_0;
  }
  FUNC_0(VAR_12, VAR_6[VAR_4],
         VAR_0);
  VAR_12 += VAR_0;
  if ((VAR_7->phydev) && (!VAR_7->phydev->is_c45))
   FUNC_0(VAR_12, VAR_6[VAR_3],
          VAR_0);

 } else {
  FUNC_3(VAR_12, VAR_0, "rx_packets");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "tx_packets");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "rx_bytes");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "tx_bytes");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "rx_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "tx_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "rx_dropped");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "tx_dropped");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "multicast");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "collisions");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "rx_over_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "rx_crc_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "rx_frame_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "rx_fifo_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "rx_missed_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "tx_aborted_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "tx_carrier_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "tx_fifo_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "tx_heartbeat_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "rx_length_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "tx_window_errors");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "rx_compressed");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "tx_compressed");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "netdev_rx_dropped");
  VAR_12 = VAR_12 + VAR_0;
  FUNC_3(VAR_12, VAR_0, "netdev_tx_dropped");
  VAR_12 = VAR_12 + VAR_0;

  FUNC_3(VAR_12, VAR_0, "netdev_tx_timeout");
  VAR_12 = VAR_12 + VAR_0;

  VAR_11->dev->ops->get_strings(VAR_11, VAR_8, (u8 *)VAR_12);
 }
}
