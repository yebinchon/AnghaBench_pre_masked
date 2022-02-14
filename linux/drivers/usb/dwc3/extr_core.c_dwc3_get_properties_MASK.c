
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct dwc3 {scalar_t__ imod_interval; void* tx_max_burst_prd; void* tx_thr_num_pkt_prd; void* rx_max_burst_prd; void* rx_thr_num_pkt_prd; void* hird_threshold; void* tx_de_emphasis; void* lpm_nyet_threshold; void* dis_metastability_quirk; int fladj; int hsphy_interface; void* tx_de_emphasis_quirk; void* dis_tx_ipgap_linecheck_quirk; void* dis_del_phy_power_chg_quirk; void* dis_u2_freeclk_exists_quirk; void* dis_rxdet_inp3_quirk; void* dis_u2_entry_quirk; void* dis_u1_entry_quirk; void* dis_enblslpm_quirk; void* dis_u2_susphy_quirk; void* dis_u3_susphy_quirk; void* rx_detect_poll_quirk; void* lfps_filter_quirk; void* del_phy_power_chg_quirk; void* del_p1p2p3_quirk; void* req_p1p2p3_quirk; void* u2ss_inp3_quirk; void* u2exit_lfps_quirk; void* disable_scramble_quirk; void* usb2_lpm_disable; void* usb3_lpm_capable; void* dis_start_transfer_quirk; void* is_utmi_l1_suspend; void* has_lpm_erratum; struct device* dev; struct device* sysdev; void* sysdev_is_parent; int hsphy_mode; int dr_mode; int maximum_speed; } ;
struct device {struct device* parent; int of_node; } ;


 void* FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int *) ;
 int FUNC_2 (struct device*,char*,int *) ;
 int FUNC_3 (struct device*,char*,void**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct dwc3 *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 u8 VAR_2;
 u8 VAR_3;
 u8 VAR_4;
 u8 VAR_5;
 u8 VAR_6;
 u8 VAR_7;
 u8 VAR_8;


 VAR_2 = 0xf;


 VAR_3 = 1;





 VAR_4 = 12;

 VAR_0->maximum_speed = FUNC_6(VAR_1);
 VAR_0->dr_mode = FUNC_5(VAR_1);
 VAR_0->hsphy_mode = FUNC_4(VAR_1->of_node);

 VAR_0->sysdev_is_parent = FUNC_0(VAR_1,
    "linux,sysdev_is_parent");
 if (VAR_0->sysdev_is_parent)
  VAR_0->sysdev = VAR_0->dev->parent;
 else
  VAR_0->sysdev = VAR_0->dev;

 VAR_0->has_lpm_erratum = FUNC_0(VAR_1,
    "snps,has-lpm-erratum");
 FUNC_3(VAR_1, "snps,lpm-nyet-threshold",
    &VAR_2);
 VAR_0->is_utmi_l1_suspend = FUNC_0(VAR_1,
    "snps,is-utmi-l1-suspend");
 FUNC_3(VAR_1, "snps,hird-threshold",
    &VAR_4);
 VAR_0->dis_start_transfer_quirk = FUNC_0(VAR_1,
    "snps,dis-start-transfer-quirk");
 VAR_0->usb3_lpm_capable = FUNC_0(VAR_1,
    "snps,usb3_lpm_capable");
 VAR_0->usb2_lpm_disable = FUNC_0(VAR_1,
    "snps,usb2-lpm-disable");
 FUNC_3(VAR_1, "snps,rx-thr-num-pkt-prd",
    &VAR_5);
 FUNC_3(VAR_1, "snps,rx-max-burst-prd",
    &VAR_6);
 FUNC_3(VAR_1, "snps,tx-thr-num-pkt-prd",
    &VAR_7);
 FUNC_3(VAR_1, "snps,tx-max-burst-prd",
    &VAR_8);

 VAR_0->disable_scramble_quirk = FUNC_0(VAR_1,
    "snps,disable_scramble_quirk");
 VAR_0->u2exit_lfps_quirk = FUNC_0(VAR_1,
    "snps,u2exit_lfps_quirk");
 VAR_0->u2ss_inp3_quirk = FUNC_0(VAR_1,
    "snps,u2ss_inp3_quirk");
 VAR_0->req_p1p2p3_quirk = FUNC_0(VAR_1,
    "snps,req_p1p2p3_quirk");
 VAR_0->del_p1p2p3_quirk = FUNC_0(VAR_1,
    "snps,del_p1p2p3_quirk");
 VAR_0->del_phy_power_chg_quirk = FUNC_0(VAR_1,
    "snps,del_phy_power_chg_quirk");
 VAR_0->lfps_filter_quirk = FUNC_0(VAR_1,
    "snps,lfps_filter_quirk");
 VAR_0->rx_detect_poll_quirk = FUNC_0(VAR_1,
    "snps,rx_detect_poll_quirk");
 VAR_0->dis_u3_susphy_quirk = FUNC_0(VAR_1,
    "snps,dis_u3_susphy_quirk");
 VAR_0->dis_u2_susphy_quirk = FUNC_0(VAR_1,
    "snps,dis_u2_susphy_quirk");
 VAR_0->dis_enblslpm_quirk = FUNC_0(VAR_1,
    "snps,dis_enblslpm_quirk");
 VAR_0->dis_u1_entry_quirk = FUNC_0(VAR_1,
    "snps,dis-u1-entry-quirk");
 VAR_0->dis_u2_entry_quirk = FUNC_0(VAR_1,
    "snps,dis-u2-entry-quirk");
 VAR_0->dis_rxdet_inp3_quirk = FUNC_0(VAR_1,
    "snps,dis_rxdet_inp3_quirk");
 VAR_0->dis_u2_freeclk_exists_quirk = FUNC_0(VAR_1,
    "snps,dis-u2-freeclk-exists-quirk");
 VAR_0->dis_del_phy_power_chg_quirk = FUNC_0(VAR_1,
    "snps,dis-del-phy-power-chg-quirk");
 VAR_0->dis_tx_ipgap_linecheck_quirk = FUNC_0(VAR_1,
    "snps,dis-tx-ipgap-linecheck-quirk");

 VAR_0->tx_de_emphasis_quirk = FUNC_0(VAR_1,
    "snps,tx_de_emphasis_quirk");
 FUNC_3(VAR_1, "snps,tx_de_emphasis",
    &VAR_3);
 FUNC_1(VAR_1, "snps,hsphy_interface",
        &VAR_0->hsphy_interface);
 FUNC_2(VAR_1, "snps,quirk-frame-length-adjustment",
     &VAR_0->fladj);

 VAR_0->dis_metastability_quirk = FUNC_0(VAR_1,
    "snps,dis_metastability_quirk");

 VAR_0->lpm_nyet_threshold = VAR_2;
 VAR_0->tx_de_emphasis = VAR_3;

 VAR_0->hird_threshold = VAR_4;

 VAR_0->rx_thr_num_pkt_prd = VAR_5;
 VAR_0->rx_max_burst_prd = VAR_6;

 VAR_0->tx_thr_num_pkt_prd = VAR_7;
 VAR_0->tx_max_burst_prd = VAR_8;

 VAR_0->imod_interval = 0;
}
