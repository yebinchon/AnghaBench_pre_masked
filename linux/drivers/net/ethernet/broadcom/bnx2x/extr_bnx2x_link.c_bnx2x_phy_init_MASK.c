
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int eee_status; int link_status; scalar_t__ check_kr2_recovery_cnt; scalar_t__ phy_flags; int mac_type; int flow_ctrl; int duplex; scalar_t__ line_speed; scalar_t__ link_up; scalar_t__ phy_link_up; } ;
struct link_params {int req_fc_auto_adv; int port; int feature_config_flags; int num_phys; int loopback_mode; int switch_cfg; int link_flags; int * req_flow_ctrl; int * req_line_speed; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,...) ;
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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct link_params*,struct link_vars*) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_4 (struct link_params*,struct link_vars*,int) ;
 int FUNC_5 (struct link_params*) ;
 int FUNC_6 (struct link_params*,int) ;
 int FUNC_7 (struct link_params*,struct link_vars*) ;
 int FUNC_8 (struct link_params*,struct link_vars*) ;
 int FUNC_9 (struct link_params*,struct link_vars*) ;
 int FUNC_10 (struct link_params*,struct link_vars*) ;
 int FUNC_11 (struct link_params*,struct link_vars*) ;
 int FUNC_12 (struct link_params*,struct link_vars*) ;
 int FUNC_13 (struct link_params*,struct link_vars*) ;
 int FUNC_14 (struct link_params*) ;
 int FUNC_15 (struct bnx2x*,int) ;
 int FUNC_16 (struct link_params*,int) ;
 int FUNC_17 (struct link_params*,int ) ;
 int FUNC_18 (struct link_params*,int ) ;
 int FUNC_19 (struct link_params*) ;
 int FUNC_20 (int) ;
 int FUNC_21 (struct link_params*,struct link_vars*) ;

int FUNC_22(struct link_params *VAR_14, struct link_vars *VAR_15)
{
 int VAR_16;
 struct bnx2x *VAR_17 = VAR_14->bp;
 FUNC_1(VAR_6, "Phy Initialization started\n");
 FUNC_1(VAR_6, "(1) req_speed %d, req_flowctrl %d\n",
     VAR_14->req_line_speed[0], VAR_14->req_flow_ctrl[0]);
 FUNC_1(VAR_6, "(2) req_speed %d, req_flowctrl %d\n",
     VAR_14->req_line_speed[1], VAR_14->req_flow_ctrl[1]);
 FUNC_1(VAR_6, "req_adv_flow_ctrl 0x%x\n", VAR_14->req_fc_auto_adv);
 VAR_15->link_status = 0;
 VAR_15->phy_link_up = 0;
 VAR_15->link_up = 0;
 VAR_15->line_speed = 0;
 VAR_15->duplex = VAR_1;
 VAR_15->flow_ctrl = VAR_0;
 VAR_15->mac_type = VAR_5;
 VAR_15->phy_flags = 0;
 VAR_15->check_kr2_recovery_cnt = 0;
 VAR_14->link_flags = VAR_12;

 FUNC_16(VAR_14, 1);
 FUNC_6(VAR_14, 1);

 VAR_16 = FUNC_5(VAR_14);

 if (VAR_16 == 0) {
  FUNC_1(VAR_6, "Link Flap Avoidance in progress\n");
  return FUNC_2(VAR_14, VAR_15);
 }

 FUNC_1(VAR_6, "Cannot avoid link flap lfa_sta=0x%x\n",
         VAR_16);
 FUNC_4(VAR_14, VAR_15, VAR_16);


 FUNC_3(VAR_17, VAR_11 + VAR_14->port*4,
         (VAR_10 |
   VAR_9 |
   VAR_8 |
   VAR_7));

 FUNC_7(VAR_14, VAR_15);

 if (VAR_14->feature_config_flags & VAR_3)
  VAR_15->link_status |= VAR_4;

 if (VAR_14->num_phys == 0) {
  FUNC_1(VAR_6, "No phy found for initialization !!\n");
  return -VAR_2;
 }
 FUNC_21(VAR_14, VAR_15);

 FUNC_1(VAR_6, "Num of phys on board: %d\n", VAR_14->num_phys);
 switch (VAR_14->loopback_mode) {
 case 133:
  FUNC_8(VAR_14, VAR_15);
  break;
 case 132:
  FUNC_9(VAR_14, VAR_15);
  break;
 case 128:
  FUNC_12(VAR_14, VAR_15);
  break;
 case 130:
  FUNC_10(VAR_14, VAR_15);
  break;
 case 129:
 case 131:
  FUNC_11(VAR_14, VAR_15);
  break;
 default:
  if (!FUNC_0(VAR_17)) {
   if (VAR_14->switch_cfg == VAR_13)
    FUNC_19(VAR_14);
   else
    FUNC_15(VAR_17, VAR_14->port);
  }
  FUNC_13(VAR_14, VAR_15);
  FUNC_20(30);
  FUNC_14(VAR_14);
  break;
 }
 FUNC_17(VAR_14, VAR_15->link_status);

 FUNC_18(VAR_14, VAR_15->eee_status);
 return 0;
}
