
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_link_info {int autoneg; int auto_pause_setting; int req_flow_ctrl; int force_pause_setting; int duplex_setting; int req_duplex; int force_link_speed; int req_link_speed; scalar_t__ auto_link_speeds; scalar_t__ advertising; int auto_mode; scalar_t__ support_speeds; scalar_t__ support_auto_speeds; } ;
struct bnxt {int hwrm_spec_code; int dev; struct bnxt_link_info link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_4, bool VAR_5)
{
 int VAR_6 = 0;
 struct bnxt_link_info *VAR_7 = &VAR_4->link_info;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_4->dev, "Probe phy can't get phy capabilities (rc: %x)\n",
      VAR_6);
  return VAR_6;
 }
 VAR_6 = FUNC_2(VAR_4, 0);
 if (VAR_6) {
  FUNC_3(VAR_4->dev, "Probe phy can't update link (rc: %x)\n",
      VAR_6);
  return VAR_6;
 }




 if (VAR_7->auto_link_speeds && !VAR_7->support_auto_speeds)
  VAR_7->support_auto_speeds = VAR_7->support_speeds;

 if (!VAR_5)
  return 0;


 if (FUNC_0(VAR_7->auto_mode)) {
  VAR_7->autoneg = VAR_1;
  if (VAR_4->hwrm_spec_code >= 0x10201) {
   if (VAR_7->auto_pause_setting &
       VAR_3)
    VAR_7->autoneg |= VAR_0;
  } else {
   VAR_7->autoneg |= VAR_0;
  }
  VAR_7->advertising = VAR_7->auto_link_speeds;
 } else {
  VAR_7->req_link_speed = VAR_7->force_link_speed;
  VAR_7->req_duplex = VAR_7->duplex_setting;
 }
 if (VAR_7->autoneg & VAR_0)
  VAR_7->req_flow_ctrl =
   VAR_7->auto_pause_setting & VAR_2;
 else
  VAR_7->req_flow_ctrl = VAR_7->force_pause_setting;
 return 0;
}
