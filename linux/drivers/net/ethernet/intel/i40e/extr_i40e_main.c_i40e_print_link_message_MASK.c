
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i40e_vsi {int current_isup; int current_speed; int netdev; struct i40e_pf* back; } ;
struct TYPE_8__ {int link_speed; int an_info; int fec_info; int req_fec_info; } ;
struct TYPE_9__ {TYPE_3__ link_info; } ;
struct TYPE_7__ {int current_mode; } ;
struct TYPE_6__ {scalar_t__ npar_enable; } ;
struct TYPE_10__ {TYPE_4__ phy; TYPE_2__ fc; TYPE_1__ func_caps; } ;
struct i40e_pf {TYPE_5__ hw; } ;
typedef enum i40e_aq_link_speed { ____Placeholder_i40e_aq_link_speed } i40e_aq_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct i40e_vsi *VAR_6, bool VAR_7)
{
 enum i40e_aq_link_speed VAR_8;
 struct i40e_pf *VAR_9 = VAR_6->back;
 char *VAR_10 = "Unknown";
 char *VAR_11 = "Unknown";
 char *VAR_12 = "";
 char *VAR_13 = "";
 char *VAR_14 = "";

 if (VAR_7)
  VAR_8 = VAR_9->hw.phy.link_info.link_speed;
 else
  VAR_8 = VAR_5;

 if ((VAR_6->current_isup == VAR_7) && (VAR_6->current_speed == VAR_8))
  return;
 VAR_6->current_isup = VAR_7;
 VAR_6->current_speed = VAR_8;
 if (!VAR_7) {
  FUNC_0(VAR_6->netdev, "NIC Link is Down\n");
  return;
 }




 if (VAR_9->hw.func_caps.npar_enable &&
     (VAR_9->hw.phy.link_info.link_speed == 133 ||
      VAR_9->hw.phy.link_info.link_speed == 135))
  FUNC_1(VAR_6->netdev,
       "The partition detected link speed that is less than 10Gbps\n");

 switch (VAR_9->hw.phy.link_info.link_speed) {
 case 129:
  VAR_10 = "40 G";
  break;
 case 132:
  VAR_10 = "20 G";
  break;
 case 131:
  VAR_10 = "25 G";
  break;
 case 134:
  VAR_10 = "10 G";
  break;
 case 128:
  VAR_10 = "5 G";
  break;
 case 130:
  VAR_10 = "2.5 G";
  break;
 case 133:
  VAR_10 = "1000 M";
  break;
 case 135:
  VAR_10 = "100 M";
  break;
 default:
  break;
 }

 switch (VAR_9->hw.fc.current_mode) {
 case 138:
  VAR_11 = "RX/TX";
  break;
 case 136:
  VAR_11 = "TX";
  break;
 case 137:
  VAR_11 = "RX";
  break;
 default:
  VAR_11 = "None";
  break;
 }

 if (VAR_9->hw.phy.link_info.link_speed == 131) {
  VAR_13 = "None";
  VAR_12 = "None";
  VAR_14 = "False";

  if (VAR_9->hw.phy.link_info.an_info & VAR_0)
   VAR_14 = "True";

  if (VAR_9->hw.phy.link_info.fec_info &
      VAR_1)
   VAR_12 = "CL74 FC-FEC/BASE-R";
  else if (VAR_9->hw.phy.link_info.fec_info &
    VAR_2)
   VAR_12 = "CL108 RS-FEC";




  if (VAR_6->back->hw.phy.link_info.req_fec_info &
      (VAR_3 | VAR_4)) {
   if (VAR_6->back->hw.phy.link_info.req_fec_info &
       VAR_4)
    VAR_13 = "CL108 RS-FEC";
   else
    VAR_13 = "CL74 FC-FEC/BASE-R";
  }
  FUNC_0(VAR_6->netdev,
       "NIC Link is Up, %sbps Full Duplex, Requested FEC: %s, Negotiated FEC: %s, Autoneg: %s, Flow Control: %s\n",
       VAR_10, VAR_13, VAR_12, VAR_14, VAR_11);
 } else {
  FUNC_0(VAR_6->netdev,
       "NIC Link is Up, %sbps Full Duplex, Flow Control: %s\n",
       VAR_10, VAR_11);
 }

}
