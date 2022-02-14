
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {int eee_cfg; int data_src_size; struct qed_mcp_mb_params* p_data_src; int cmd; int feature_config_flags; int loopback_mode; int adv_speed; int pause; int speed; } ;
struct TYPE_8__ {int adv_caps; int tx_lpi_timer; scalar_t__ tx_lpi_enable; scalar_t__ enable; } ;
struct TYPE_6__ {int advertised_speeds; int forced_speed; int autoneg; } ;
struct TYPE_5__ {scalar_t__ forced_tx; scalar_t__ forced_rx; scalar_t__ autoneg; } ;
struct qed_mcp_link_params {TYPE_4__ eee; int loopback_mode; TYPE_2__ speed; TYPE_1__ pause; } ;
struct qed_hwfn {int b_drv_link_init; TYPE_3__* mcp_info; } ;
struct eth_phy_cfg {int eee_cfg; int data_src_size; struct eth_phy_cfg* p_data_src; int cmd; int feature_config_flags; int loopback_mode; int adv_speed; int pause; int speed; } ;
typedef int phy_cfg ;
typedef int mb_params ;
struct TYPE_7__ {int capabilities; struct qed_mcp_link_params link_input; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct qed_mcp_mb_params*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_mcp_mb_params*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int) ;

int FUNC_5(struct qed_hwfn *VAR_15, struct qed_ptt *VAR_16, bool VAR_17)
{
 struct qed_mcp_link_params *VAR_18 = &VAR_15->mcp_info->link_input;
 struct qed_mcp_mb_params VAR_19;
 struct eth_phy_cfg VAR_20;
 int VAR_21 = 0;
 u32 VAR_22;


 FUNC_2(&VAR_20, 0, sizeof(VAR_20));
 VAR_22 = VAR_17 ? VAR_0 : VAR_1;
 if (!VAR_18->speed.autoneg)
  VAR_20.speed = VAR_18->speed.forced_speed;
 VAR_20.pause |= (VAR_18->pause.autoneg) ? VAR_8 : 0;
 VAR_20.pause |= (VAR_18->pause.forced_rx) ? VAR_9 : 0;
 VAR_20.pause |= (VAR_18->pause.forced_tx) ? VAR_10 : 0;
 VAR_20.adv_speed = VAR_18->speed.advertised_speeds;
 VAR_20.loopback_mode = VAR_18->loopback_mode;






 if ((VAR_15->mcp_info->capabilities &
      VAR_11) && VAR_18->eee.enable) {
  VAR_20.eee_cfg |= VAR_4;
  if (VAR_18->eee.tx_lpi_enable)
   VAR_20.eee_cfg |= VAR_5;
  if (VAR_18->eee.adv_caps & VAR_14)
   VAR_20.eee_cfg |= VAR_3;
  if (VAR_18->eee.adv_caps & VAR_13)
   VAR_20.eee_cfg |= VAR_2;
  VAR_20.eee_cfg |= (VAR_18->eee.tx_lpi_timer <<
        VAR_7) &
       VAR_6;
 }

 VAR_15->b_drv_link_init = VAR_17;

 if (VAR_17) {
  FUNC_1(VAR_15, VAR_12,
      "Configuring Link: Speed 0x%08x, Pause 0x%08x, adv_speed 0x%08x, loopback 0x%08x, features 0x%08x\n",
      VAR_20.speed,
      VAR_20.pause,
      VAR_20.adv_speed,
      VAR_20.loopback_mode,
      VAR_20.feature_config_flags);
 } else {
  FUNC_1(VAR_15, VAR_12,
      "Resetting link\n");
 }

 FUNC_2(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.cmd = VAR_22;
 VAR_19.p_data_src = &VAR_20;
 VAR_19.data_src_size = sizeof(VAR_20);
 VAR_21 = FUNC_3(VAR_15, VAR_16, &VAR_19);


 if (VAR_21) {
  FUNC_0(VAR_15, "MCP response failure, aborting\n");
  return VAR_21;
 }







 FUNC_4(VAR_15, VAR_16, !VAR_17);

 return 0;
}
