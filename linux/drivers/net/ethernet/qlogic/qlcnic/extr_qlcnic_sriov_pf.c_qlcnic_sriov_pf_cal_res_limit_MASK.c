
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct qlcnic_vport {int max_tx_bw; int min_tx_bw; } ;
struct qlcnic_resources {int num_tx_queues; int num_rx_mcast_mac_filters; int num_rx_ucast_mac_filters; int num_tx_mac_filters; int num_destip; int num_rx_status_rings; int num_rx_buf_rings; int num_rx_queues; int num_lro_flows_supported; int max_remote_ipv6_addrs; int max_local_ipv6_addrs; int num_txvlan_keys; } ;
struct qlcnic_sriov {scalar_t__ num_allowed_vlans; int num_vfs; TYPE_2__* vf_info; struct qlcnic_resources ff_max; } ;
struct qlcnic_info {int bit_offsets; int max_tx_ques; int max_rx_mcast_mac_filters; int max_rx_ucast_mac_filters; int max_tx_mac_filters; int max_rx_ip_addr; int max_rx_status_rings; int max_rx_buf_rings; int max_rx_ques; int max_rx_lro_flow; int max_remote_ipv6_addrs; int max_local_ipv6_addrs; int max_tx_vlan_keys; int max_tx_bw; int min_tx_bw; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_4__ {struct qlcnic_vport* vp; } ;
struct TYPE_3__ {scalar_t__ pci_func; struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,scalar_t__) ;
 int FUNC_2 (struct qlcnic_adapter*,scalar_t__) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_info*,int) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_6,
      struct qlcnic_info *VAR_7, u16 VAR_8)
{
 struct qlcnic_sriov *VAR_9 = VAR_6->ahw->sriov;
 struct qlcnic_resources *VAR_10 = &VAR_9->ff_max;
 u16 VAR_11 = VAR_9->num_allowed_vlans + 1;
 int VAR_12 = -VAR_1, VAR_13, VAR_14;
 struct qlcnic_vport *VAR_15;
 u32 VAR_16, VAR_17, VAR_18;

 VAR_13 = FUNC_2(VAR_6, VAR_8);
 if (VAR_13 < 0)
  return -VAR_0;

 VAR_16 = VAR_9->num_vfs;
 VAR_17 = VAR_16 + 1;
 VAR_7->bit_offsets = 0xffff;
 VAR_7->max_tx_ques = VAR_10->num_tx_queues / VAR_17;

 if (FUNC_0(VAR_6))
  VAR_11 = VAR_3;

 VAR_7->max_rx_mcast_mac_filters = VAR_10->num_rx_mcast_mac_filters;

 if (VAR_6->ahw->pci_func == VAR_8) {
  VAR_7->min_tx_bw = 0;
  VAR_7->max_tx_bw = VAR_2;

  VAR_18 = VAR_10->num_rx_ucast_mac_filters - VAR_11 * VAR_16;
  VAR_7->max_rx_ucast_mac_filters = VAR_18;
  VAR_18 = VAR_10->num_tx_mac_filters - VAR_11 * VAR_16;
  VAR_7->max_tx_mac_filters = VAR_18;
  VAR_18 = VAR_11 * VAR_16 * VAR_5;
  VAR_18 = VAR_10->num_rx_mcast_mac_filters - VAR_18;
  VAR_7->max_rx_mcast_mac_filters = VAR_18;

  VAR_7->max_tx_ques = VAR_10->num_tx_queues - VAR_9->num_vfs;
 } else {
  VAR_14 = FUNC_1(VAR_6, VAR_8);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_15 = VAR_9->vf_info[VAR_14].vp;
  VAR_7->min_tx_bw = VAR_15->min_tx_bw;
  VAR_7->max_tx_bw = VAR_15->max_tx_bw;

  VAR_7->max_rx_ucast_mac_filters = VAR_11;
  VAR_7->max_tx_mac_filters = VAR_11;
  VAR_18 = VAR_11 * VAR_5;
  VAR_7->max_rx_mcast_mac_filters = VAR_18;

  VAR_7->max_tx_ques = VAR_4;
 }

 VAR_7->max_rx_ip_addr = VAR_10->num_destip / VAR_17;
 VAR_7->max_rx_status_rings = VAR_10->num_rx_status_rings / VAR_17;
 VAR_7->max_rx_buf_rings = VAR_10->num_rx_buf_rings / VAR_17;
 VAR_7->max_rx_ques = VAR_10->num_rx_queues / VAR_17;
 VAR_7->max_rx_lro_flow = VAR_10->num_lro_flows_supported / VAR_17;
 VAR_7->max_tx_vlan_keys = VAR_10->num_txvlan_keys;
 VAR_7->max_local_ipv6_addrs = VAR_10->max_local_ipv6_addrs;
 VAR_7->max_remote_ipv6_addrs = VAR_10->max_remote_ipv6_addrs;

 VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_13);
 if (VAR_12)
  return VAR_12;

 return 0;
}
