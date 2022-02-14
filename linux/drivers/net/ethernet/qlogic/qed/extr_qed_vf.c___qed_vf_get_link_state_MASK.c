
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_mcp_link_state {int sfp_tx_fault; int partner_adv_pause; int partner_rx_flow_ctrl_en; int partner_tx_flow_ctrl_en; int partner_adv_speed; int pfc_enabled; int parallel_detection; int an_complete; int an; int full_duplex; int speed; int link_up; } ;
struct qed_hwfn {int dummy; } ;
struct qed_bulletin_content {int sfp_tx_fault; int partner_adv_pause; int partner_rx_flow_ctrl_en; int partner_tx_flow_ctrl_en; int partner_adv_speed; int pfc_enabled; int parallel_detection; int autoneg_complete; int autoneg; int full_duplex; int speed; int link_up; } ;


 int FUNC_0 (struct qed_mcp_link_state*,int ,int) ;

void FUNC_1(struct qed_hwfn *VAR_0,
        struct qed_mcp_link_state *VAR_1,
        struct qed_bulletin_content *VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->link_up = VAR_2->link_up;
 VAR_1->speed = VAR_2->speed;
 VAR_1->full_duplex = VAR_2->full_duplex;
 VAR_1->an = VAR_2->autoneg;
 VAR_1->an_complete = VAR_2->autoneg_complete;
 VAR_1->parallel_detection = VAR_2->parallel_detection;
 VAR_1->pfc_enabled = VAR_2->pfc_enabled;
 VAR_1->partner_adv_speed = VAR_2->partner_adv_speed;
 VAR_1->partner_tx_flow_ctrl_en = VAR_2->partner_tx_flow_ctrl_en;
 VAR_1->partner_rx_flow_ctrl_en = VAR_2->partner_rx_flow_ctrl_en;
 VAR_1->partner_adv_pause = VAR_2->partner_adv_pause;
 VAR_1->sfp_tx_fault = VAR_2->sfp_tx_fault;
}
