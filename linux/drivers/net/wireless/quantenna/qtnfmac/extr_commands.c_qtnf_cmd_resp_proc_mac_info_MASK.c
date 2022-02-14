
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_mac_info {int vht_cap_mod_mask; int ht_cap_mod_mask; int max_acl_mac_addrs; int radar_detect_widths; int max_ap_assoc_sta; int num_rx_chain; int num_tx_chain; int dev_mac; int bands_cap; } ;
struct qtnf_wmac {int macaddr; struct qtnf_mac_info macinfo; } ;
struct qtnf_vif {int mac_addr; } ;
struct qlink_resp_get_mac_info {int vht_cap_mod_mask; int ht_cap_mod_mask; int max_acl_mac_addrs; int radar_detect_widths; int max_ap_assoc_sta; int num_rx_chain; int num_tx_chain; int dev_mac; int bands_cap; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 struct qtnf_vif* FUNC_6 (struct qtnf_wmac*) ;

__attribute__((used)) static void
FUNC_7(struct qtnf_wmac *VAR_0,
       const struct qlink_resp_get_mac_info *VAR_1)
{
 struct qtnf_mac_info *VAR_2;
 struct qtnf_vif *VAR_3;

 VAR_2 = &VAR_0->macinfo;

 VAR_2->bands_cap = VAR_1->bands_cap;
 FUNC_3(&VAR_2->dev_mac, &VAR_1->dev_mac,
        sizeof(VAR_2->dev_mac));

 FUNC_0(VAR_0->macaddr, VAR_2->dev_mac);

 VAR_3 = FUNC_6(VAR_0);
 if (VAR_3)
  FUNC_0(VAR_3->mac_addr, VAR_0->macaddr);
 else
  FUNC_4("could not get valid base vif\n");

 VAR_2->num_tx_chain = VAR_1->num_tx_chain;
 VAR_2->num_rx_chain = VAR_1->num_rx_chain;

 VAR_2->max_ap_assoc_sta = FUNC_1(VAR_1->max_ap_assoc_sta);
 VAR_2->radar_detect_widths =
   FUNC_5(FUNC_1(
     VAR_1->radar_detect_widths));
 VAR_2->max_acl_mac_addrs = FUNC_2(VAR_1->max_acl_mac_addrs);

 FUNC_3(&VAR_2->ht_cap_mod_mask, &VAR_1->ht_cap_mod_mask,
        sizeof(VAR_2->ht_cap_mod_mask));
 FUNC_3(&VAR_2->vht_cap_mod_mask, &VAR_1->vht_cap_mod_mask,
        sizeof(VAR_2->vht_cap_mod_mask));
}
