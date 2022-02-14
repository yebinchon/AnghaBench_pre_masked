
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_resources {int if_cap_flags; void* max_mcc_count; void* max_iface_count; void* max_cq_count; void* max_evt_qs; void* max_rx_qs; void* max_rss_qs; void* max_tx_qs; void* max_mcast_mac; void* max_vlans; void* max_uc_mac; } ;
struct be_nic_res_desc {int cap_flags; int mcc_count; int iface_count; int cq_count; int eq_count; int rq_count; int rssq_count; int txq_count; int mcast_mac_count; int vlan_count; int unicast_mac_count; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct be_resources *VAR_1,
        struct be_nic_res_desc *VAR_2)
{
 VAR_1->max_uc_mac = FUNC_0(VAR_2->unicast_mac_count);
 VAR_1->max_vlans = FUNC_0(VAR_2->vlan_count);
 VAR_1->max_mcast_mac = FUNC_0(VAR_2->mcast_mac_count);
 VAR_1->max_tx_qs = FUNC_0(VAR_2->txq_count);
 VAR_1->max_rss_qs = FUNC_0(VAR_2->rssq_count);
 VAR_1->max_rx_qs = FUNC_0(VAR_2->rq_count);
 VAR_1->max_evt_qs = FUNC_0(VAR_2->eq_count);
 VAR_1->max_cq_count = FUNC_0(VAR_2->cq_count);
 VAR_1->max_iface_count = FUNC_0(VAR_2->iface_count);
 VAR_1->max_mcc_count = FUNC_0(VAR_2->mcc_count);

 VAR_1->if_cap_flags = FUNC_1(VAR_2->cap_flags) &
    VAR_0;
}
