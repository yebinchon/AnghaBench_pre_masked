
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_vars {int link_status; void* flow_ctrl; } ;
struct link_params {void* req_fc_auto_adv; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct bnx2x_phy *VAR_7,
    struct link_params *VAR_8,
    struct link_vars *VAR_9,
    u32 VAR_10)
{
 struct bnx2x *VAR_11 = VAR_8->bp;

 switch (VAR_10) {
 case 0xb:
  FUNC_0(VAR_6, "Flow Control: TX only\n");
  VAR_9->flow_ctrl = VAR_3;
  break;

 case 0xe:
  FUNC_0(VAR_6, "Flow Control: RX only\n");
  VAR_9->flow_ctrl = VAR_2;
  break;

 case 0x5:
 case 0x7:
 case 0xd:
 case 0xf:




  if (VAR_8->req_fc_auto_adv == VAR_0) {
   FUNC_0(VAR_6, "Flow Control: RX & TX\n");
   VAR_9->flow_ctrl = VAR_0;
  } else {
   FUNC_0(VAR_6, "Flow Control: RX only\n");
   VAR_9->flow_ctrl = VAR_2;
  }
  break;

 default:
  FUNC_0(VAR_6, "Flow Control: None\n");
  VAR_9->flow_ctrl = VAR_1;
  break;
 }
 if (VAR_10 & (1<<0))
  VAR_9->link_status |= VAR_5;
 if (VAR_10 & (1<<1))
  VAR_9->link_status |= VAR_4;

}
