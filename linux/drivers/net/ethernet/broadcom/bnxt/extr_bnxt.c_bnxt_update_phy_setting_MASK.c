
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_link_info {int autoneg; int auto_pause_setting; int req_flow_ctrl; int force_pause_setting; scalar_t__ auto_mode; scalar_t__ req_link_speed; scalar_t__ force_link_speed; scalar_t__ req_duplex; scalar_t__ duplex_setting; scalar_t__ advertising; scalar_t__ auto_link_speeds; } ;
struct bnxt {int dev; struct bnxt_link_info link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*,int,int) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (struct bnxt*,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct bnxt *VAR_4)
{
 int VAR_5;
 bool VAR_6 = 0;
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 struct bnxt_link_info *VAR_9 = &VAR_4->link_info;

 VAR_5 = FUNC_5(VAR_4, 1);
 if (VAR_5) {
  FUNC_6(VAR_4->dev, "failed to update link (rc: %x)\n",
      VAR_5);
  return VAR_5;
 }
 if (!FUNC_1(VAR_4))
  return 0;

 if ((VAR_9->autoneg & VAR_0) &&
     (VAR_9->auto_pause_setting & VAR_3) !=
     VAR_9->req_flow_ctrl)
  VAR_7 = 1;
 if (!(VAR_9->autoneg & VAR_0) &&
     VAR_9->force_pause_setting != VAR_9->req_flow_ctrl)
  VAR_7 = 1;
 if (!(VAR_9->autoneg & VAR_1)) {
  if (FUNC_0(VAR_9->auto_mode))
   VAR_6 = 1;
  if (VAR_9->req_link_speed != VAR_9->force_link_speed)
   VAR_6 = 1;
  if (VAR_9->req_duplex != VAR_9->duplex_setting)
   VAR_6 = 1;
 } else {
  if (VAR_9->auto_mode == VAR_2)
   VAR_6 = 1;
  if (VAR_9->advertising != VAR_9->auto_link_speeds)
   VAR_6 = 1;
 }




 if (!FUNC_7(VAR_4->dev))
  VAR_6 = 1;

 if (!FUNC_2(VAR_4))
  VAR_8 = 1;

 if (VAR_6)
  VAR_5 = FUNC_3(VAR_4, VAR_7, VAR_8);
 else if (VAR_7)
  VAR_5 = FUNC_4(VAR_4);
 if (VAR_5) {
  FUNC_6(VAR_4->dev, "failed to update phy setting (rc: %x)\n",
      VAR_5);
  return VAR_5;
 }

 return VAR_5;
}
