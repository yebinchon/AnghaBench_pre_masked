
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iavf_vsi {scalar_t__ work_limit; } ;
struct iavf_adapter {int num_active_queues; struct iavf_vsi vsi; } ;
struct ethtool_coalesce {scalar_t__ rx_coalesce_usecs; scalar_t__ tx_coalesce_usecs; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ rx_max_coalesced_frames_irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iavf_adapter*,struct ethtool_coalesce*,int) ;
 struct iavf_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct iavf_adapter*,int ,struct net_device*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
          struct ethtool_coalesce *VAR_5, int VAR_6)
{
 struct iavf_adapter *VAR_7 = FUNC_1(VAR_4);
 struct iavf_vsi *VAR_8 = &VAR_7->vsi;
 int VAR_9;

 if (VAR_5->tx_max_coalesced_frames_irq || VAR_5->rx_max_coalesced_frames_irq)
  VAR_8->work_limit = VAR_5->tx_max_coalesced_frames_irq;

 if (VAR_5->rx_coalesce_usecs == 0) {
  if (VAR_5->use_adaptive_rx_coalesce)
   FUNC_2(VAR_7, VAR_3, VAR_4, "rx-usecs=0, need to disable adaptive-rx for a complete disable\n");
 } else if ((VAR_5->rx_coalesce_usecs < VAR_2) ||
     (VAR_5->rx_coalesce_usecs > VAR_1)) {
  FUNC_2(VAR_7, VAR_3, VAR_4, "Invalid value, rx-usecs range is 0-8160\n");
  return -VAR_0;
 } else if (VAR_5->tx_coalesce_usecs == 0) {
  if (VAR_5->use_adaptive_tx_coalesce)
   FUNC_2(VAR_7, VAR_3, VAR_4, "tx-usecs=0, need to disable adaptive-tx for a complete disable\n");
 } else if ((VAR_5->tx_coalesce_usecs < VAR_2) ||
     (VAR_5->tx_coalesce_usecs > VAR_1)) {
  FUNC_2(VAR_7, VAR_3, VAR_4, "Invalid value, tx-usecs range is 0-8160\n");
  return -VAR_0;
 }




 if (VAR_6 < 0) {
  for (VAR_9 = 0; VAR_9 < VAR_7->num_active_queues; VAR_9++)
   FUNC_0(VAR_7, VAR_5, VAR_9);
 } else if (VAR_6 < VAR_7->num_active_queues) {
  FUNC_0(VAR_7, VAR_5, VAR_6);
 } else {
  FUNC_2(VAR_7, VAR_3, VAR_4, "Invalid queue value, queue range is 0 - %d\n",
      VAR_7->num_active_queues - 1);
  return -VAR_0;
 }

 return 0;
}
