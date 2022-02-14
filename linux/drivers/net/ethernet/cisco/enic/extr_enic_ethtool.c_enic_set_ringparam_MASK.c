
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_enet_config {unsigned int rq_desc_count; unsigned int wq_desc_count; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; int tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_pending; scalar_t__ rx_mini_max_pending; } ;
struct enic {struct vnic_enet_config config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (struct enic*) ;
 int FUNC_3 (struct enic*) ;
 int FUNC_4 (struct enic*) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*,char*,...) ;
 struct enic* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5,
         struct ethtool_ringparam *VAR_6)
{
 struct enic *VAR_7 = FUNC_7(VAR_5);
 struct vnic_enet_config *VAR_8 = &VAR_7->config;
 int VAR_9 = FUNC_8(VAR_5);
 unsigned int VAR_10;
 unsigned int VAR_11;
 int VAR_12 = 0;

 if (VAR_6->rx_mini_max_pending || VAR_6->rx_mini_pending) {
  FUNC_6(VAR_5,
       "modifying mini ring params is not supported");
  return -VAR_0;
 }
 if (VAR_6->rx_jumbo_max_pending || VAR_6->rx_jumbo_pending) {
  FUNC_6(VAR_5,
       "modifying jumbo ring params is not supported");
  return -VAR_0;
 }
 VAR_10 = VAR_8->rq_desc_count;
 VAR_11 = VAR_8->wq_desc_count;
 if (VAR_6->rx_pending > VAR_1 ||
     VAR_6->rx_pending < VAR_3) {
  FUNC_6(VAR_5, "rx pending (%u) not in range [%u,%u]",
       VAR_6->rx_pending, VAR_3,
       VAR_1);
  return -VAR_0;
 }
 if (VAR_6->tx_pending > VAR_2 ||
     VAR_6->tx_pending < VAR_4) {
  FUNC_6(VAR_5, "tx pending (%u) not in range [%u,%u]",
       VAR_6->tx_pending, VAR_4,
       VAR_2);
  return -VAR_0;
 }
 if (VAR_9)
  FUNC_0(VAR_5);
 VAR_8->rq_desc_count =
  VAR_6->rx_pending & 0xffffffe0;
 VAR_8->wq_desc_count =
  VAR_6->tx_pending & 0xffffffe0;
 FUNC_3(VAR_7);
 VAR_12 = FUNC_2(VAR_7);
 if (VAR_12) {
  FUNC_5(VAR_5,
      "Failed to alloc vNIC resources, aborting\n");
  FUNC_3(VAR_7);
  goto err_out;
 }
 FUNC_4(VAR_7);
 if (VAR_9) {
  VAR_12 = FUNC_1(VAR_5, ((void*)0));
  if (VAR_12)
   goto err_out;
 }
 return 0;
err_out:
 VAR_8->rq_desc_count = VAR_10;
 VAR_8->wq_desc_count = VAR_11;
 return VAR_12;
}
