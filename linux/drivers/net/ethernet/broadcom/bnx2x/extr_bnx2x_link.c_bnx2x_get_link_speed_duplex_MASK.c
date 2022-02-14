
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {int phy_link_up; int duplex; int line_speed; int mac_type; int flow_ctrl; int link_status; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;

__attribute__((used)) static int FUNC_1(struct bnx2x_phy *VAR_24,
         struct link_params *VAR_25,
          struct link_vars *VAR_26,
          u16 VAR_27,
          u16 VAR_28,
          u16 VAR_29)
{
 struct bnx2x *VAR_30 = VAR_25->bp;
 if (VAR_24->req_line_speed == VAR_23)
  VAR_26->link_status |= VAR_13;
 if (VAR_27) {
  FUNC_0(VAR_16, "phy link up\n");

  VAR_26->phy_link_up = 1;
  VAR_26->link_status |= VAR_14;

  switch (VAR_28) {
  case 135:
   VAR_26->line_speed = VAR_17;
   if (VAR_29 == VAR_1)
    VAR_26->link_status |= VAR_8;
   else
    VAR_26->link_status |= VAR_9;
   break;

  case 142:
   VAR_26->line_speed = VAR_18;
   if (VAR_29 == VAR_1)
    VAR_26->link_status |= VAR_5;
   else
    VAR_26->link_status |= VAR_6;
   break;

  case 134:
  case 133:
   VAR_26->line_speed = VAR_19;
   if (VAR_29 == VAR_1)
    VAR_26->link_status |= VAR_3;
   else
    VAR_26->link_status |= VAR_4;
   break;

  case 130:
   VAR_26->line_speed = VAR_22;
   if (VAR_29 == VAR_1)
    VAR_26->link_status |= VAR_11;
   else
    VAR_26->link_status |= VAR_12;
   break;

  case 129:
  case 128:
   FUNC_0(VAR_16,
     "link speed unsupported  gp_status 0x%x\n",
      VAR_28);
   return -VAR_2;

  case 138:
  case 140:
  case 141:
  case 139:
  case 137:
  case 136:
   VAR_26->line_speed = VAR_20;
   VAR_26->link_status |= VAR_7;
   break;
  case 132:
  case 131:
   VAR_26->line_speed = VAR_21;
   VAR_26->link_status |= VAR_10;
   break;
  default:
   FUNC_0(VAR_16,
      "link speed unsupported gp_status 0x%x\n",
      VAR_28);
   return -VAR_2;
  }
 } else {
  FUNC_0(VAR_16, "phy link down\n");

  VAR_26->phy_link_up = 0;

  VAR_26->duplex = VAR_1;
  VAR_26->flow_ctrl = VAR_0;
  VAR_26->mac_type = VAR_15;
 }
 FUNC_0(VAR_16, " phy_link_up %x line_speed %d\n",
      VAR_26->phy_link_up, VAR_26->line_speed);
 return 0;
}
