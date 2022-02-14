
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


struct ice_vsi {int current_isup; int netdev; TYPE_5__* back; TYPE_6__* port_info; } ;
struct ice_aqc_get_phy_caps_data {int link_fec_options; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_8__ {int link_speed; int fec_info; int an_info; } ;
struct TYPE_9__ {TYPE_2__ link_info; } ;
struct TYPE_7__ {int current_mode; } ;
struct TYPE_12__ {TYPE_3__ phy; TYPE_1__ fc; } ;
struct TYPE_11__ {TYPE_4__* pdev; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct ice_aqc_get_phy_caps_data*) ;
 struct ice_aqc_get_phy_caps_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_6__*,int,int ,struct ice_aqc_get_phy_caps_data*,int *) ;
 int FUNC_3 (struct ice_vsi*) ;
 int FUNC_4 (int ,char*,...) ;

void FUNC_5(struct ice_vsi *VAR_7, bool VAR_8)
{
 struct ice_aqc_get_phy_caps_data *VAR_9;
 enum ice_status VAR_10;
 const char *VAR_11;
 const char *VAR_12;
 const char *VAR_13;
 const char *VAR_14;
 const char *VAR_15;

 if (!VAR_7)
  return;

 if (VAR_7->current_isup == VAR_8)
  return;

 VAR_7->current_isup = VAR_8;

 if (!VAR_8) {
  FUNC_4(VAR_7->netdev, "NIC Link is Down\n");
  return;
 }

 switch (VAR_7->port_info->phy.link_info.link_speed) {
 case 140:
  VAR_12 = "100 G";
  break;
 case 133:
  VAR_12 = "50 G";
  break;
 case 134:
  VAR_12 = "40 G";
  break;
 case 135:
  VAR_12 = "25 G";
  break;
 case 137:
  VAR_12 = "20 G";
  break;
 case 138:
  VAR_12 = "10 G";
  break;
 case 132:
  VAR_12 = "5 G";
  break;
 case 136:
  VAR_12 = "2.5 G";
  break;
 case 141:
  VAR_12 = "1 G";
  break;
 case 139:
  VAR_12 = "100 M";
  break;
 default:
  VAR_12 = "Unknown";
  break;
 }

 switch (VAR_7->port_info->fc.current_mode) {
 case 131:
  VAR_14 = "Rx/Tx";
  break;
 case 128:
  VAR_14 = "Tx";
  break;
 case 129:
  VAR_14 = "Rx";
  break;
 case 130:
  VAR_14 = "None";
  break;
 default:
  VAR_14 = "Unknown";
  break;
 }


 switch (VAR_7->port_info->phy.link_info.fec_info) {
 case 143:

 case 142:
  VAR_13 = "RS-FEC";
  break;
 case 144:
  VAR_13 = "FC-FEC/BASE-R";
  break;
 default:
  VAR_13 = "NONE";
  break;
 }


 if (VAR_7->port_info->phy.link_info.an_info & VAR_6)
  VAR_15 = "True";
 else
  VAR_15 = "False";


 VAR_9 = FUNC_1(&VAR_7->back->pdev->dev, sizeof(*VAR_9), VAR_0);
 if (!VAR_9) {
  VAR_11 = "Unknown";
  goto done;
 }

 VAR_10 = FUNC_2(VAR_7->port_info, 0,
         VAR_5, VAR_9, ((void*)0));
 if (VAR_10)
  FUNC_4(VAR_7->netdev, "Get phy capability failed.\n");

 if (VAR_9->link_fec_options & VAR_3 ||
     VAR_9->link_fec_options & VAR_4)
  VAR_11 = "RS-FEC";
 else if (VAR_9->link_fec_options & VAR_1 ||
   VAR_9->link_fec_options & VAR_2)
  VAR_11 = "FC-FEC/BASE-R";
 else
  VAR_11 = "NONE";

 FUNC_0(&VAR_7->back->pdev->dev, VAR_9);

done:
 FUNC_4(VAR_7->netdev, "NIC Link is up %sbps, Requested FEC: %s, FEC: %s, Autoneg: %s, Flow Control: %s\n",
      VAR_12, VAR_11, VAR_13, VAR_15, VAR_14);
 FUNC_3(VAR_7);
}
