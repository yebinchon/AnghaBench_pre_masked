
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int update_tx_mode_config; int update_rx_mode_config; } ;
struct qed_sp_vport_update_params {int sge_tpa_params; int rss_params; TYPE_1__ accept_flags; int update_approx_mcast_flg; int update_accept_any_vlan_flg; int update_inner_vlan_removal_flg; int update_tx_switching_flg; int update_vport_active_tx_flg; int update_vport_active_rx_flg; } ;
struct qed_hwfn {int dummy; } ;
 int FUNC_0 (struct qed_hwfn*,char*,int) ;

__attribute__((used)) static bool
FUNC_1(struct qed_hwfn *VAR_0,
      struct qed_sp_vport_update_params *VAR_1,
      u16 VAR_2)
{
 switch (VAR_2) {
 case 133:
  return !!(VAR_1->update_vport_active_rx_flg ||
     VAR_1->update_vport_active_tx_flg);
 case 129:
  return !!VAR_1->update_tx_switching_flg;
 case 128:
  return !!VAR_1->update_inner_vlan_removal_flg;
 case 135:
  return !!VAR_1->update_accept_any_vlan_flg;
 case 132:
  return !!VAR_1->update_approx_mcast_flg;
 case 134:
  return !!(VAR_1->accept_flags.update_rx_mode_config ||
     VAR_1->accept_flags.update_tx_mode_config);
 case 131:
  return !!VAR_1->rss_params;
 case 130:
  return !!VAR_1->sge_tpa_params;
 default:
  FUNC_0(VAR_0, "Unexpected vport-update TLV[%d]\n",
   VAR_2);
  return 0;
 }
}
