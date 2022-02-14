
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_link_state {int partner_adv_speed; scalar_t__ partner_adv_pause; int eee_lp_adv_caps; scalar_t__ eee_adv_caps; int eee_active; scalar_t__ an_complete; int speed; scalar_t__ link_up; } ;
struct TYPE_12__ {int tx_lpi_timer; int tx_lpi_enable; int enable; scalar_t__ adv_caps; } ;
struct TYPE_10__ {scalar_t__ forced_tx; scalar_t__ forced_rx; scalar_t__ autoneg; } ;
struct TYPE_9__ {scalar_t__ autoneg; int advertised_speeds; } ;
struct qed_mcp_link_params {TYPE_6__ eee; TYPE_4__ pause; TYPE_3__ speed; } ;
struct qed_mcp_link_capabilities {scalar_t__ default_eee; int eee_speed_caps; int speed_capabilities; scalar_t__ default_speed_autoneg; } ;
struct TYPE_11__ {int tx_lpi_timer; int tx_lpi_enable; int enable; int lp_adv_caps; scalar_t__ adv_caps; } ;
struct qed_link_output {int link_up; int eee_supported; TYPE_5__ eee; int sup_caps; int eee_active; int lp_caps; int pause_config; scalar_t__ autoneg; int port; int duplex; int speed; int supported_caps; int advertised_caps; } ;
struct qed_hwfn {TYPE_2__* cdev; } ;
struct TYPE_8__ {TYPE_1__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qed_link_output*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int *) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,struct qed_mcp_link_params*,struct qed_mcp_link_state*,struct qed_mcp_link_capabilities*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int *) ;

__attribute__((used)) static void FUNC_6(struct qed_hwfn *VAR_24,
     struct qed_ptt *VAR_25,
     struct qed_link_output *VAR_26)
{
 struct qed_mcp_link_capabilities VAR_27;
 struct qed_mcp_link_params VAR_28;
 struct qed_mcp_link_state VAR_29;
 u32 VAR_30;

 FUNC_1(VAR_26, 0, sizeof(*VAR_26));


 if (FUNC_3(VAR_24, &VAR_28, &VAR_29, &VAR_27)) {
  FUNC_0(&VAR_24->cdev->pdev->dev, "no link data available\n");
  return;
 }


 if (VAR_29.link_up)
  VAR_26->link_up = 1;


 if (VAR_27.default_speed_autoneg)
  VAR_26->supported_caps |= VAR_21;
 if (VAR_28.pause.autoneg ||
     (VAR_28.pause.forced_rx && VAR_28.pause.forced_tx))
  VAR_26->supported_caps |= VAR_20;
 if (VAR_28.pause.autoneg || VAR_28.pause.forced_rx ||
     VAR_28.pause.forced_tx)
  VAR_26->supported_caps |= VAR_22;

 VAR_26->advertised_caps = VAR_26->supported_caps;
 if (VAR_28.speed.autoneg)
  VAR_26->advertised_caps |= VAR_21;
 else
  VAR_26->advertised_caps &= ~VAR_21;


 FUNC_2(VAR_24, VAR_25, VAR_28.speed.advertised_speeds,
     &VAR_26->advertised_caps);

 FUNC_2(VAR_24, VAR_25, VAR_27.speed_capabilities,
     &VAR_26->supported_caps);

 if (VAR_29.link_up)
  VAR_26->speed = VAR_29.speed;


 VAR_26->duplex = VAR_0;
 FUNC_5(VAR_24, VAR_25, &VAR_30);
 VAR_26->port = FUNC_4(VAR_30);

 VAR_26->autoneg = VAR_28.speed.autoneg;

 if (VAR_28.pause.autoneg)
  VAR_26->pause_config |= VAR_10;
 if (VAR_28.pause.forced_rx)
  VAR_26->pause_config |= VAR_11;
 if (VAR_28.pause.forced_tx)
  VAR_26->pause_config |= VAR_12;


 if (VAR_29.partner_adv_speed &
     VAR_5)
  VAR_26->lp_caps |= VAR_15;
 if (VAR_29.partner_adv_speed & VAR_4)
  VAR_26->lp_caps |= VAR_14;
 if (VAR_29.partner_adv_speed & VAR_6)
  VAR_26->lp_caps |= VAR_16;
 if (VAR_29.partner_adv_speed & VAR_7)
  VAR_26->lp_caps |= VAR_17;
 if (VAR_29.partner_adv_speed & VAR_8)
  VAR_26->lp_caps |= VAR_18;
 if (VAR_29.partner_adv_speed & VAR_9)
  VAR_26->lp_caps |= VAR_19;
 if (VAR_29.partner_adv_speed & VAR_3)
  VAR_26->lp_caps |= VAR_13;

 if (VAR_29.an_complete)
  VAR_26->lp_caps |= VAR_21;

 if (VAR_29.partner_adv_pause)
  VAR_26->lp_caps |= VAR_22;
 if (VAR_29.partner_adv_pause == VAR_1 ||
     VAR_29.partner_adv_pause == VAR_2)
  VAR_26->lp_caps |= VAR_20;

 if (VAR_27.default_eee == VAR_23) {
  VAR_26->eee_supported = 0;
 } else {
  VAR_26->eee_supported = 1;
  VAR_26->eee_active = VAR_29.eee_active;
  VAR_26->sup_caps = VAR_27.eee_speed_caps;

  VAR_26->eee.adv_caps = VAR_29.eee_adv_caps ? VAR_29.eee_adv_caps :
     VAR_28.eee.adv_caps;
  VAR_26->eee.lp_adv_caps = VAR_29.eee_lp_adv_caps;
  VAR_26->eee.enable = VAR_28.eee.enable;
  VAR_26->eee.tx_lpi_enable = VAR_28.eee.tx_lpi_enable;
  VAR_26->eee.tx_lpi_timer = VAR_28.eee.tx_lpi_timer;
 }
}
