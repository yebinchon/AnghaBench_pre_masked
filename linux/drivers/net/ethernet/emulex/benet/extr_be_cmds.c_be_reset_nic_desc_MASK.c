
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_nic_res_desc {int unicast_mac_count; int mcc_count; int vlan_count; int mcast_mac_count; int txq_count; int rq_count; int rssq_count; int lro_count; int cq_count; int toe_conn_count; int eq_count; int iface_count; int link_param; int acpi_params; int wol_param; int tunnel_iface_count; int direct_tenant_iface_count; int bw_min; int bw_max; int channel_id_param; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct be_nic_res_desc*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct be_nic_res_desc *VAR_0)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->unicast_mac_count = 0xFFFF;
 VAR_0->mcc_count = 0xFFFF;
 VAR_0->vlan_count = 0xFFFF;
 VAR_0->mcast_mac_count = 0xFFFF;
 VAR_0->txq_count = 0xFFFF;
 VAR_0->rq_count = 0xFFFF;
 VAR_0->rssq_count = 0xFFFF;
 VAR_0->lro_count = 0xFFFF;
 VAR_0->cq_count = 0xFFFF;
 VAR_0->toe_conn_count = 0xFFFF;
 VAR_0->eq_count = 0xFFFF;
 VAR_0->iface_count = 0xFFFF;
 VAR_0->link_param = 0xFF;
 VAR_0->channel_id_param = FUNC_0(0xF000);
 VAR_0->acpi_params = 0xFF;
 VAR_0->wol_param = 0x0F;
 VAR_0->tunnel_iface_count = 0xFFFF;
 VAR_0->direct_tenant_iface_count = 0xFFFF;
 VAR_0->bw_min = 0xFFFFFFFF;
 VAR_0->bw_max = 0xFFFFFFFF;
}
