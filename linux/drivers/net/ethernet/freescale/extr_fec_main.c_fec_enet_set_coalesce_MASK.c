
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {int quirks; int rx_pkts_itr; int tx_pkts_itr; int tx_time_itr; int rx_time_itr; TYPE_1__* pdev; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; int tx_max_coalesced_frames; int tx_coalesce_usecs; int rx_coalesce_usecs; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (struct net_device*,int ) ;
 struct fec_enet_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3, struct ethtool_coalesce *VAR_4)
{
 struct fec_enet_private *VAR_5 = FUNC_3(VAR_3);
 struct device *VAR_6 = &VAR_5->pdev->dev;
 unsigned int VAR_7;

 if (!(VAR_5->quirks & VAR_2))
  return -VAR_1;

 if (VAR_4->rx_max_coalesced_frames > 255) {
  FUNC_0(VAR_6, "Rx coalesced frames exceed hardware limitation\n");
  return -VAR_0;
 }

 if (VAR_4->tx_max_coalesced_frames > 255) {
  FUNC_0(VAR_6, "Tx coalesced frame exceed hardware limitation\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_5->rx_time_itr);
 if (VAR_7 > 0xFFFF) {
  FUNC_0(VAR_6, "Rx coalesced usec exceed hardware limitation\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_5->tx_time_itr);
 if (VAR_7 > 0xFFFF) {
  FUNC_0(VAR_6, "Rx coalesced usec exceed hardware limitation\n");
  return -VAR_0;
 }

 VAR_5->rx_time_itr = VAR_4->rx_coalesce_usecs;
 VAR_5->rx_pkts_itr = VAR_4->rx_max_coalesced_frames;

 VAR_5->tx_time_itr = VAR_4->tx_coalesce_usecs;
 VAR_5->tx_pkts_itr = VAR_4->tx_max_coalesced_frames;

 FUNC_1(VAR_3);

 return 0;
}
