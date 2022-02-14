
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrm_port_phy_cfg_input {int member_0; } ;
struct TYPE_2__ {int autoneg; int force_link_chng; scalar_t__ auto_pause_setting; int req_flow_ctrl; int force_pause_setting; int pause; } ;
struct bnxt {int hwrm_cmd_lock; TYPE_1__ link_info; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct hwrm_port_phy_cfg_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_port_phy_cfg_input*,int ,int,int) ;
 int FUNC_2 (struct bnxt*,struct hwrm_port_phy_cfg_input*) ;
 int FUNC_3 (struct bnxt*,struct hwrm_port_phy_cfg_input*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct bnxt *VAR_3)
{
 struct hwrm_port_phy_cfg_input VAR_4 = {0};
 int VAR_5;

 FUNC_1(VAR_3, &VAR_4, VAR_2, -1, -1);
 FUNC_3(VAR_3, &VAR_4);

 if ((VAR_3->link_info.autoneg & VAR_0) ||
     VAR_3->link_info.force_link_chng)
  FUNC_2(VAR_3, &VAR_4);

 FUNC_5(&VAR_3->hwrm_cmd_lock);
 VAR_5 = FUNC_0(VAR_3, &VAR_4, sizeof(VAR_4), VAR_1);
 if (!VAR_5 && !(VAR_3->link_info.autoneg & VAR_0)) {




  VAR_3->link_info.pause =
  VAR_3->link_info.force_pause_setting = VAR_3->link_info.req_flow_ctrl;
  VAR_3->link_info.auto_pause_setting = 0;
  if (!VAR_3->link_info.force_link_chng)
   FUNC_4(VAR_3);
 }
 VAR_3->link_info.force_link_chng = 0;
 FUNC_6(&VAR_3->hwrm_cmd_lock);
 return VAR_5;
}
