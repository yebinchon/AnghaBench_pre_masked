
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_resources {int max_local_ipv6_addrs; int max_remote_ipv6_addrs; int num_rx_status_rings; int num_rx_buf_rings; int num_destip; int num_lro_flows_supported; int num_tx_queues; int num_rx_queues; int num_txvlan_keys; int num_rx_mcast_mac_filters; int num_rx_ucast_mac_filters; int num_tx_mac_filters; } ;
struct qlcnic_info {int max_local_ipv6_addrs; int max_remote_ipv6_addrs; int max_rx_status_rings; int max_rx_buf_rings; int max_rx_ip_addr; int max_rx_lro_flow; int max_tx_ques; int max_rx_ques; int max_tx_vlan_keys; int max_rx_mcast_mac_filters; int max_rx_ucast_mac_filters; int max_tx_mac_filters; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* sriov; } ;
struct TYPE_3__ {struct qlcnic_resources ff_max; } ;



__attribute__((used)) static void FUNC_0(struct qlcnic_adapter *VAR_0,
        struct qlcnic_info *VAR_1)
{
 struct qlcnic_resources *VAR_2 = &VAR_0->ahw->sriov->ff_max;

 VAR_2->num_tx_mac_filters = VAR_1->max_tx_mac_filters;
 VAR_2->num_rx_ucast_mac_filters = VAR_1->max_rx_ucast_mac_filters;
 VAR_2->num_rx_mcast_mac_filters = VAR_1->max_rx_mcast_mac_filters;
 VAR_2->num_txvlan_keys = VAR_1->max_tx_vlan_keys;
 VAR_2->num_rx_queues = VAR_1->max_rx_ques;
 VAR_2->num_tx_queues = VAR_1->max_tx_ques;
 VAR_2->num_lro_flows_supported = VAR_1->max_rx_lro_flow;
 VAR_2->num_destip = VAR_1->max_rx_ip_addr;
 VAR_2->num_rx_buf_rings = VAR_1->max_rx_buf_rings;
 VAR_2->num_rx_status_rings = VAR_1->max_rx_status_rings;
 VAR_2->max_remote_ipv6_addrs = VAR_1->max_remote_ipv6_addrs;
 VAR_2->max_local_ipv6_addrs = VAR_1->max_local_ipv6_addrs;
}
